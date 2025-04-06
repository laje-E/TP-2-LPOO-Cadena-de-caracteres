#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cont_palabra, j, letra_max, letra_min, letra, cont;
int main () {
	char palabras [50];
	char aux;
	printf ("ingrese muchas palabras ");
	fgets (palabras, sizeof(palabras), stdin);

	int n = strlen(palabras);
	char palabra [50];
	int i;
	for (i=0; i<n; i++) {
		letra = letra + 1;
		if (isspace(palabras[i]) != 0) {
			cont_palabra = cont_palabra + 1;
			j = j + 1;
			letra_max = letra;
			for (cont=letra_min; cont<letra_max; cont++) {
				aux = palabras[cont];
				palabra[j] = strcat(palabra[j], aux);
			}

			if (cont_palabra => 1) {
				letra_min = letra;
			}
		}
		char al_reves;
		for(i=0; i<j; i++) {
			strcat (al_reves, palabra[j-i]);
		}
	}
	printf ("la palabra al reves es: %s", al_reves);
}
