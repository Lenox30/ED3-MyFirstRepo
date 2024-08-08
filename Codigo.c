#include <stdio.h>

int main() {

    printf("Hola mundo\n");

    int num1 = 4;
    int num2 = 3;
    int suma, resta, multiplicacion;
    float division;


    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = (float)num1 / num2;  

    // Imprimir resultados
    printf("Suma: %d + %d = %d\n", num1, num2, suma);
    printf("Resta: %d - %d = %d\n", num1, num2, resta);
    printf("Multiplicación: %d * %d = %d\n", num1, num2, multiplicacion);
    printf("División: %d / %d = %.2f\n", num1, num2, division);

    return 0;
}
