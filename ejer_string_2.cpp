#include<stdio.h>
#include<string.h>
int cont_voc, n, i;
int main() {
	char palabra[20];
	printf("ingrese una palabra para ver cuantas vocales tiene ");
	scanf("%s", palabra);
	int longitud = strlen (palabra);
	n = longitud;
	for (i=0;i<=n;i++){
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' ){
			cont_voc = cont_voc + 1;
		}
	}
	printf ("la cantidad de vocales de la palabra ingresada es %d ", cont_voc);
	
}
