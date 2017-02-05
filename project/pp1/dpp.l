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
using namespace std;

std::map<std::string, std::string> macros, values;

%}


%%
"#define "([A-Z]+.*) {
  // Obtener nombre de macro.
  std::string def       = strdup(yytext);
  std::string name_val  = def.substr(8);
  // Encontrar split entre nombre y valor.
  int name_val_split    = name_val.find(" ");
  std::string name      = name_val.substr(0, name_val_split);
  std::string value     = name_val.substr(name_val_split);
  // Insertar valor y nombre en Map.
  macros.insert(std::make_pair(name,  value));
  // Incrementar el número de macros.
};

"#"([A-Z]+) {
  // Obtener nombre de macro.
  std::string def       = strdup(yytext);
  std::string name      = def.substr(1);
  std::string value     = macros.find(name)->second;
  printf("%s\n", value.c_str());
}

. {
        string texto = strdup(yytext);
        printf("%s", texto.c_str());
}

%%
