#include<stdio.h>

int main (void)
{
    int numero = 0;
    printf("escribe un numero del 1 al 10: ");
    scanf("%d", &numero);
    switch(numero)
    {
        case 1 :
            printf("Escogiste el 1");
            break;
        case 2:
            printf("Escogiste el 2");
            break;
        case 3:
            printf("Escogiste el 3");
            break;
        case 4:
            printf("Escogiste el 4");
            break;
        case 5:
            printf("Escogiste el 5");
            break;
        case 6:
            printf("Escogiste el 6");
            break;
        case 7:
            printf("Escogiste el 7");
            break;
        case 8:
            printf("Escogiste el 8");
            break;
        case 9:
            printf("Escogiste el 9");
            break;
        case 10:
            printf("Escogiste el 10");
            break;
        default:
            printf("Fin\n");

    }
}
