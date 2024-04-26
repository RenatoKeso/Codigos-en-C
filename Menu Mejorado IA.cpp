#include <stdio.h>

int main() {
    // Definir Variables
    int x, y;
    int op;
    int resultado;

    do {
        // Menú
        printf("\nMenu:\n");
        printf("1.- Suma\n");
        printf("2.- Multiplicacion\n");
        printf("3.- Division\n");
        printf("4.- Cuadrado de un numero\n");
        printf("5.- Salir\n");
        printf("Seleccione una opcion: ");
        
        scanf("%d", &op); // Leer la opción del usuario

        switch(op) {
            case 1: // Suma
                printf("Ingrese dos numeros para sumar: ");
                scanf("%d %d", &x, &y);
                resultado = x + y;
                printf("La suma es: %d\n", resultado);
                break;
            case 2: // Multiplicación
                printf("Ingrese dos numeros para multiplicar: ");
                scanf("%d %d", &x, &y);
                resultado = x * y;
                printf("La multiplicacion es: %d\n", resultado);
                break;
            case 3: // División
                printf("Ingrese el dividendo y el divisor: ");
                scanf("%d %d", &x, &y);
                if (y != 0) {
                    resultado = x / y;
                    printf("La division es: %d\n", resultado);
                } else {
                    printf("No se puede dividir por cero.\n");
                }
                break;
            case 4: // Cuadrado de un número
                printf("Ingrese un numero para obtener su cuadrado: ");
                scanf("%d", &x);
                resultado = x * x;
                printf("El cuadrado de %d es: %d\n", x, resultado);
                break;
            case 5: // Salir
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, seleccione una opcion del menu.\n");
        }
    } while(op != 5); // Repetir hasta que se seleccione la opción de salir

    return 0;
}

