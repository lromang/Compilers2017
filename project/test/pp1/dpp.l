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
#include <algorithm>

using namespace std;

std::map<std::string, std::string> macros, values;
int nRow =  1;

%}

%x STATE
%option stack

%%

\n {nRow++;
    std::string text = strdup(yytext);
    printf("%s", text.c_str());
}


\/\* {
        BEGIN(STATE);
        yy_push_state(STATE);
}

<STATE><<EOF>> {
        ReportError::UntermComment();
        yy_pop_state();
}


\/\/.* { /* printf("%s", "\n"); */ }

\/\*([^*]|[\n]|(\*+([^*/]|[\n])))*\*+\/ {

        std::string texto = strdup(yytext);
        int nRows = std::count(texto.begin(), texto.end(), '\n');
        for(int i = 0; i < nRows; i++){
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
