#include <stdio.h>

int main (void)
{
	int a,b,c,temp;
	printf("Ingrese el valor de A.\n");
	scanf("%d",&a);
	printf("Ingrese el valor de B.\n");
	scanf("%d",&b);
	printf("Ingrese el valor de C.\n");
	scanf("%d",&c);
	temp=a;
	a=c;
	c=b;
	b=temp;
	printf("Los numeros valores son:\nA=%d\nB=%d\nC=%d\n",a,b,c);
}