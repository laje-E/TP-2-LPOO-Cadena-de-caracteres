#include<stdio.h>
#include<string.h>

int main () {
    int i;
    int n = 5;
    for (i=0;i<n;i++){
        char palabra (20);
        printf ("ingrese la palabra n°%d ", i);
    }
    
            char repeticion_1 = strstr (palabra [0], palabra [1]);
        
            char repeticion_2 = strstr (repeticion_1, palabra [2]);
        
            char repeticion_3 = strstr (repeticion_2, palabra [3]);
        
            char repeticion_total = strstr (repeticion_3, palabra [4]);
        
    printf ("la concidencia que hay entre todas las palabras es %s ", repeticion_total);
}
