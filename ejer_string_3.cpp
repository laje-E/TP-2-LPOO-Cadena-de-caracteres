#include<stdio.h>
#include<string.h>
int main (){
	char palabra[20];
	printf ("ingrese una palabra \n");
	scanf ("%s", palabra);
	char invertido [20];
	int n = strlen(palabra);
	printf  ("%d ", n);
	n = n-1;
	int i;
	for (i=0;i<=n;i++){
		invertido [i] = palabra [n-i];
	}
	printf ("%s ", invertido);
	int p = strlen (invertido);
	printf ("%d ", p);
	int resultado = strcmp(invertido, palabra);
	printf ("%d ", resultado);
	if (resultado == 0){
		printf ("la palabra es palindroma "); 
	}
	else if (resultado != 0){
		printf ("la palbra no es palindroma ");
	}
}
