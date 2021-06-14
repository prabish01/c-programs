 //LOOP TO CALCULATE THE FACTORIAL OF A NUMBER
#include<stdio.h>
int main ()
{
	int a, i=1, f=1;
	printf("enter any number for it factorial: ");
	scanf("%d",&a);
	do{
		f=f*i;
		i++;
	}
	while(i<=a);
	printf("The factorial of %d is %d",a,f);
	return 0;
}







