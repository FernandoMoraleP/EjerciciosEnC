#include <stdio.h>

int main()
{
	int i;
	int j;
	int Res;

	printf("Ingrese el primer numero\n");
	scanf("%d", &i);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &j);

	Res = i + j;
	printf("El resultado de la suma es: %d\n", Res);

	Res = i - j;
	printf("El resultado de la resta es: %d\n", Res);

	Res = i * j;
	printf("El resultado de la multiplicacion es : %d\n", Res);

	Res = i / j; 
	printf("El resulaado de la division es:%d\n", Res); 
	/* code */
	return 0;
}