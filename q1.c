// To perform the arithmetic operations(add, sub, mult, div) using switch statement
#include<stdio.h>
int main()
{
	double a,b;
	char op;
	printf("Enter any two values: ");
	scanf("%lf %lf",&a,&b);
	printf("what do you want to do (+,-,*,/): ");
	scanf(" %c",&op);
		switch(op)
		{
			case'+':
				printf("%lf + %lf = %lf",a,b,a+b);
				break;
			case'-':
				printf("%lf - %lf = %lf",a,b,a-b);
				break;	
			case'*':
				printf("%lf * %lf = %lf",a,b,a*b);
				break;					
			case'/':
				printf("%lf / %lf = %lf",a,b,a/b);
				break;			
			default:
				printf("Error 404, the given input isn't correct");					
		}
	return 0;
}
