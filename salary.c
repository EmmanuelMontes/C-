
/************************************************************************
*Programa que calcula el salario en un mes, utilizando la potencia 
*-numero de días- con base en el salario.
*Developer: Emmanuel Montes Lugo
************************************************************************/
#include<stdio.h>
#include<math.h>

int main (void)
{
    int dias;
    double salario, resultado;
    printf("Escribe los días del mes: \n");
    scanf("%i", &dias);
    if (dias < 28 || dias > 31)
    {
        printf("La cantidad de días es incorrecta");
    }else{
        printf("Escribe el salario: \n");
        scanf("%lf", &salario);
        resultado = pow(salario, dias);
        printf("El total de días es de: %i\n", dias);
        printf("El total ganado es: $%.2f\n", resultado / 1000);
    }
    return 0;
}
