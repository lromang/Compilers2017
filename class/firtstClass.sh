#! /bin/bash

########################################
## ---------------------------------
## Author: Luis Manuel Román García
## ---------------------------------
##
## This scripts receives a string
## that represents a sum of strings
##
## -flags-
## -i: Executes the sum.
## -c: Generates a C script that
##     performes the sum.
##
########################################

# Check correct format
if [ -z "$2" ]
then
    echo "Falta un argumento!"
    echo "USO: ./firstClass.sh -i/-c string_of_numbers"
    exit -1
fi

# Read in string representing a sum
string=$(echo $2 | sed -r 's/ +//g')
valid=$(echo $string | grep -Eo '(^[1-9][0-9]*)(\+([1-9][0-9]*))+')

if [ "$valid" != "$string" ]
then
    echo 'La cadena no representa una suma de enteros!'
    exit -1
fi

if [ "$1" == "-i" ]
then
    echo $(($string))
else if [ "$1" == "-c" ]
     then
         echo -e "#include <stdio.h> \n int main(){\n int a = $string;" > test.c
         echo -e '\n printf("El resultado de la suma es: %d ", a);\n}' >> test.c
     else
         echo 'Instrucción no reconocida'
         echo "uso: ./firstClass.sh -i/-c string_of_numbers"
     fi
fi
