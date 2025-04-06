#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cont_palabra, j, letra_max, letra_min, letra;
int main (){
    char palabras [50];
    printf ("ingrese muchas palabras ");
    scanf ("%s", palabras);
    
    int n = strlen(palabras);
    char palabra;
    int i;
    for (i=0;i<n;i++){
        letra = letra + 1;
        if (isspace(palabras[i]) != 0){           
           cont_palabra = cont_palabra + 1;
           j = j + 1;
           letra_max = letra;
           for (letra_min<letra_max;letra_min++){
               palabra[j] = strcat(palabra[j], palabras[letra_min];
           }
           
           if (cont_palabra => 1){
              letra_min = letra;
           }
        }
        char al_reves;
        for(i=0;i<j;i++){
            strcat (al_reves, palabra[j]);
        }
    }
    printf ("la palabra al reves es: %s", al_reves);
}
