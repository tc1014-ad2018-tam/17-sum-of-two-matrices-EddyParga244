/*
 * Este programa fue realizado como la tarea#17 el 8 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es sumar 2 matrices y el resultado guardarlo en una tercer matriz.
 *
 * Fecha: 8 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main(void) {
    //Tamaño del arreglo
    int n;
    printf("Define el tamaño del arreglo: ");
    scanf("%i", &n);

    //Verifica que el tamaño del arreglo sea mayor a 1 y menor o igual a 10
    if(n>1&&n<=10){
        //Declaracion de las matrices
        int a[n][n];
        int b[n][n];
        int c[n][n];
        printf("Captura de datos de la matriz a.\n");
        //captura  matriz a
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("Escribe el numero [%d][%d]:", i,j);
                scanf("%d",&a[i][j]);
            }
        }

        printf("Captura de datos de la matriz b.\n");
        //captura matriz b
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("Escribe el numero [%d][%d]:", i,j);
                scanf("%d",&b[i][j]);
            }
        }

        printf("La matriz a es"); //mostrar los valores de la matriz a
        printf("\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("\nLa matriz b es"); //mostrar los valores de la matriz b
        printf("\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        //suma de a y b
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\n");
        printf("La matriz c es\n"); //mostrar los valores de la matriz resultante c
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Tamaño no valido.");
    }
    return 0;
}