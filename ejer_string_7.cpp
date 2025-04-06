#include <stdio.h>
#include <string.h>
#include <algorithm>
int main () {
	char palabra1 [20];
	printf ("ingrese la primer palabra");
	scanf ("%s", palabra1);
	int longitud1 = strlen(palabra1);
	char palabra2 [20];
	printf ("ingrese la segunda palabra");
	scanf ("%s", palabra2);
	int longitud2 = strlen(palabra2);
	if (longitud1 = longitud2){
	    printf ("las longitudes son iguales ");
		int n = longitud1;
		int i;
		int j = 0;
		int resultado;
		int igualdad;
		char ordenado1 = std::sort(palabra1, palabra1);
		char ordenado2 = std::sort(palabra2.begin(), palabra2.end());
		/*
		for (i=0;i<n;i++){
			do{
				resultado = palabra1[i] = palabra2[j];
				if (resultado == 0){
					igualdad = igualdad + 1;
					(
					tengo que encontrar una forma para no comparar letras repetidas, por ejemplo con lolo y lona, no son iguales pero polo va tomar como que hay dos O iguales, cuando solo hay 1 O
					yo estimo que una soluciòn es saltear una letra que ya se sabe que es igual, pero nose como
					)
				}
				j = j + 1;
			}while(j<n || resultado != 0);
		    
    
        }
        */
		if (strcmp (ordenado1, ordenado2) == 0){
			printf ("las palabras son un anagrama");
		}
		else if (strcmp (ordenado1, ordenado2) != 0) {
			printf ("las palabras no son un anagrama");
		}
	}
	else if (longitud1 != longitud2) {
		printf ("las palabras no son un anagrama");
	}
}
