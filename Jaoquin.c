#include <stdio.h>

int main (){

//Definir Variables
int a;
int b;
int op;
int resultado;
float x;

do {
printf ("Menu\n");
printf ("1.- suma\n");
printf ("2.- multiplicacion\n");
printf ("3.- division\n");
printf ("4.- Cuadrado de un numero\n");
printf ("5.- Salir\n");
printf ("Seleccione una op: ");
scanf ("%d",&op);

//Ahora definir operaciones para cada caso

switch (op) {

default:
if (op != 5) {
printf("Opcion invalida, selecciona una opcion valida.\n");
}

case 1: //Suma

printf ("Ingrese dos valores para sumar");
scanf ("%d %d",&a,&b);
resultado = a+b;
printf ("El resultado de la suma es %d", resultado);
break;

case 2: // Multiplicacion

printf ("Ingrese dos valores para multiplicar");
scanf ("%d %d", &a,&b);
resultado = a*b;
printf ("El resultado de la multiplicacion es %d", resultado);
break;

case 3: // Division

printf ("Ingrese el valor del dividendo. (El que vas a dividir)\n#: ");
scanf ( "%d", &a);
printf ("Ingrese el valor del divisor. (El que divide)\n#: ");
scanf ("%d", &b);

if (b !=0){
resultado = (a/b);
printf ("El resultado de la division es %d\n", resultado);}
else{
printf ("No se puede dividir por 0. \n");
}
break;


case 4: //Cuadrado de un numero
printf ("Ingrese un valor para el cuadrado de un numero\n#: ");
scanf ("%d", &a);

resultado = a * a;
printf ("El resultado del cuadrado de un numero es %d\n", resultado);
break;
}
}while (op != 5); // Repetir el programa hasta que la persona elija la opcion 5


return 0;
}
