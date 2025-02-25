#include <stdio.h>

int esPalindromo(int num, int *op)
{
    int numori = num;
    int invert = 0;

    
    while (num > 0) // función para invertir el numero
    {
        int digito = num % 10; // obtiene el ́ultimo dígito de la cadena
        invert = invert * 10 + digito; // invierte el numero
        num /= 10; // elimina el ultimo digito
        (*op) += 3; // cuenta las operaciones basicas
    }

    // Comparacion del numero original con el numero invertido
    (*op)++; 
    return numori == invert;
}

int main() 
{
    int num;
    int op = 0;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    if (esPalindromo(num, &op)) 
    {
        printf("El número %d es un palíndromo.\n", num);
    } else 
    {
        printf("El número %d no es un palíndromo.\n", num);
    }

    printf("Número de operaciones básicas realizadas: %d\n", op);

    return 0;
}