/*
 * file:  dpp.l
 * ------------
 * Lex inupt file to generate the scanner for the preprocessor.
 * If you decide to use lex for the preprocesor, put your rules
 * here, otherwise the file can remain empty.
 */

%{
#include <map>
#include <string>
#include <iostream>
#include "errors.h"

using namespace std;

std::map<std::string, std::string> macros, values;
int nRow =  1;
int count_chars(string s, char c) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == c) count++;

  return count;
}
%}

%x COMMENT_STATE
%option stack

%%

\n {nRow++;
    std::string text = strdup(yytext);
    printf("%s", text.c_str());
}


\/\* {
        BEGIN(COMMENT_STATE);
        yy_push_state(COMMENT_STATE);
}

<COMMENT_STATE><<EOF>> {
        ReportError::UntermComment();
        yy_pop_state();
}

\/\/.* { /* printf("%s", "\n"); */ }

\/\*([^*]|[\n]|(\*+([^*/]|[\n])))*\*+\/ {

        string texto = strdup(yytext);
        int num_lineas = count_chars(texto, '\n');

        for(int i = 0; i < num_lineas; i++){
                printf("%s", "\n");
        }

}

"#define\ "([A-Z]+\ .*) {
  // Obtener nombre de macro.
  std::string def       = strdup(yytext);
  std::string name_val  = def.substr(8);
  // Encontrar split entre nombre y valor.
  int name_val_split    = name_val.find(" ");
  std::string name      = name_val.substr(0, name_val_split);
  std::string value     = name_val.substr(name_val_split + 1);
  // Insertar valor y nombre en Map.
  macros.insert(std::make_pair(name,  value));
};

"#"([A-Z]+) {
  // Obtener nombre de macro.
  std::string def       = strdup(yytext);
  std::string name      = def.substr(1);
  //std::string value     = macros.find(name)->second;
  //printf("%s", value.c_str());
  if(macros.find(name) == macros.end()){
      ReportError::InvalidDirective(nRow);
  }else{
      std::string value     = macros.find(name)->second;
      printf("%s", value.c_str());
  }
}

. {
    std::string text = strdup(yytext);
    printf("%s", text.c_str());
}

%%
