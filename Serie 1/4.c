#include <stdio.h>

int main (void)
{
	int num, cont=0;
	printf("Introduce el numero\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
			cont++;
	}
	if(cont==2)
		printf("El numero es primo.\n");
	else
		printf("El numero no es primo.\n");
}