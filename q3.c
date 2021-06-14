// To display prime numbers upto n number
#include <stdio.h>
int main ()
{
	int n,i,j,c=0;
	printf("enter any number: ");
	scanf("%d",&n);
	printf("the prime no upto %d is: ",n,i);
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			{							
				c=c+1;
			}
		}
		if(c==2)
			{
				printf("%d ",i);
			}
	}
return 0;
}


