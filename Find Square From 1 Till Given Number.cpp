#include<stdio.h>
int main()
{
	int n,sq[100],i;
	printf("Till Which Number You Want To Find Square = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sq[i]=i*i;
		printf("%d ",sq[i]);
	}
}
