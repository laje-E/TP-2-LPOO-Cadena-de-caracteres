#include<stdio.h>
#include<string.h>
int main() {
    char cadena[20];
    char sustituir;
    char letra_nueva;
    printf ("ingrese una cadena de caracteres ");
    scanf ("%s", cadena);

    printf ("ingrese el caracter que quiere sustituir ");
    scanf (" %c", &sustituir);

    printf ("ingrese el caracter por el que se va a cambiar");
    scanf (" %c", &letra_nueva);
    int n = strlen(cadena);
    int i;
    for (i=0;i<n;i++){
        if (cadena[i] == sustituir){
            cadena[i] = letra_nueva;
        }
    }
    printf ("la cadena cambiada es %s", cadena);
    
}
