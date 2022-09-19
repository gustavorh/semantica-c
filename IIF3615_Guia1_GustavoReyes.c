#include <stdio.h>

void main() {
	int tempAmbPromedio; // °C
	int velDespegue;	// km/h
	float tamanoVirus;	// micras
	int diametroTierra; // m
	
	// Variables para funciones algebraicas (2)
	int a;
	int b;
	int c;
	int d;
	int x;
	float resultadoF1;
	float resultadoF2;
	float resultadoF3;
	
	// Implementación expresiones algebraicas
	printf("Ingrese un valor entero para A: ");
	scanf("%i", &a);
	
	printf("Ingrese un valor entero para B: ");
	scanf("%i", &b);
	
	printf("Ingrese un valor entero para C: ");
	scanf("%i", &c);
	
	printf("Ingrese un valor entero para D: ");
	scanf("%i", &d);
	
	printf("Ingrese un valor entero para X: ");
	scanf("%i", &x);
	
	// Proceso de aplicación de expresiones algebraicas
	resultadoF1 = a + b * (x + 1 / x - 1);
	
	resultadoF2 = a / (b * (2 * c + d));
	
	resultadoF3 = 1 / 1 + (1 / (3 * a - 2 * b));
	
	printf("El resultado de la expresion algebraica 1 es: %f\n", resultadoF1);
	printf("El resultado de la expresion algebraica 2 es: %f\n", resultadoF2);
	printf("El resultado de la expresion algebraica 3 es: %f\n", resultadoF3);
	
}
