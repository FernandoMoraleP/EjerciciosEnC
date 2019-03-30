/*Toma de decisiones If
operadores de igualdad  	| operadores de relación
	== x es igual que 			> x es mayor que 
	!= x es diferente que 		< x es menor que 
								>= x es menor o igual que 
								<= es mayor o igual que 
*/

#include <stdio.h>

int main()
{
	int edad;
	printf("Ingresa tu edad\n");
	scanf("%d", &edad);

	if (edad >= 18)
	{
		printf("Pasale, ya alcansas el timbre joto\n");
		/* code */
	}else if(edad == 17){
		printf("Ya casi entras perro pero no, saquese alv\n");
	}else{
		printf("Eres menor de edad pendejo putito sacate de aqui\n");
	}
	/* code */

	return 0;
}
