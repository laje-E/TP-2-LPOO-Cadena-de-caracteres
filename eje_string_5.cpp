#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cont_palabra;
int main (){
    char palabras [50];
    printf ("ingrese muchas palabras");
    fgets (palabras, sizeof(palabras), stdin);
    printf ("%s", palabras);
    int n = strlen(palabras);

    int i;
    
    
    
    for (i=0;i<n;i++){
        if (isspace(palabras[i]) != 0){
           cont_palabra = cont_palabra + 1;
        }
    }
    printf ("la cantidad de palabras es: %d", cont_palabra); 
}
