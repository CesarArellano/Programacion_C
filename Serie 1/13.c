#include <stdio.h>

int main (void)
{
	int num,sumap=0,cantp=0,mediaimp=0,cantimp=0;
	for(int i=0; i<10; i++)
	{
		printf("Introduce el numero %d\n", i+1);
		scanf("%d",&num);
		if(num%2==0)
		{
			sumap+=num;
			cantp+=1;
		}
		else
		{
			mediaimp+=num;
			cantimp+=1;
		}
	}
	mediaimp/=cantimp;
	printf("La suma de número pares es: %d\n",sumap);
	printf("La cantidad de números pares es: %d\n",cantp);
	printf("La media arimética de los números impares es: %d\n",mediaimp);
	printf("La cantidad de números impares es: %d\n",cantimp);	
}