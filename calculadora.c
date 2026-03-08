/*encabezado- cabezera*/
#include <stdio.h>

/*Declaracion Funciones y Variables*/
double sumar();
double restar();
double multiplicar();
double dividir();
double total;

/*Logica del negocio - Logica del Modelo*/
int main(){
    int opcion;
    do{
        printf("\n 1.sumar\n");
        printf("2.restar\n");
        printf("3.multiplicar\n");
        printf("4.dividir\n");
        printf("5.salir\n");
        scanf("%d", &opcion);
        switch (opcion){
            case 1: sumar ();printf("Total: %d",total);break;
            case 2: restar ();break;
            case 3: multiplicar ();break;
            case 4: dividir ();break;
        };
    } while (opcion !=5);

        return 0;
}

double sumar(){
    double x, y;
    printf("Digite el primer numero ");
    scanf("%d", &x);
    printf("Digite el segundo numero ");
    scanf("%d", &y);
    total= x+ y;
    
}
double restar(){
    double x, y;
    printf("Digite el primer numero");
    scanf("%d", &x);
    printf("Digite el segundo numero");
    scanf("%d", &y);
    total= x - y;
}
double multiplicar(){
    double x, y;
    printf("Digite el primer numero");
    scanf("%d", &x);
    printf("Digite el segundo numero");
    scanf("%d", &y);
    total= x * y;
}
double dividir(){
    double x, y;
    printf("Digite el primer numero");
    scanf("%d", &x);
    printf("Digite el segundo numero");
    scanf("%d", &y);
    total= x / y;
}