// To find the total number of even integers.
#include<stdio.h>
int main()
{
	int ttl,i,n;
	printf("enter any number: ");
	scanf("%d",&n);
	ttl=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			ttl=ttl+1;
		}
	}
	printf("the total even number upto %d is: %d ",n,ttl);
return 0;
}


	 
	 
	 
	 
	 