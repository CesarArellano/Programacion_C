#include <stdio.h>

int main (void)
{
 int num,acum=0,suma=0; 	
 while(acum!=10)
 {
 	printf("Ingresa un numero: \n");
 	scanf("%d",&num);
 	suma+=num;
 	acum++;	
 }
 printf("La suma de los 10 números es de: %d\n",suma);
}