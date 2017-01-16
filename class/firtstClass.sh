#! /bin/bash



# Read in numbers
string=$(echo $2 | sed -r 's/ +//g')


if [ "$1" == "-i" ]
then
    echo $(($string))
else if [ "$1" == "-c" ]
     then
         echo -e "#include <stdio.h> \n int main(){\n int a = $string;" > test.c
         echo -e '\n printf("El resultado de la suma es: %d ", a);\n}' >> test.c
     else
         echo 'Opción no reconocida'
     fi
fi
