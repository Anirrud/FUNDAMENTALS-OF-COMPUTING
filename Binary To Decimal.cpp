#include <stdio.h>
#include <math.h>
int main() 
{
	long int bn;
	int dn = 0, i = 0, rem;
	printf("Enter a binary number: ");
	scanf("%ld", &bn);
	while (bn != 0) 
	{
    	rem = bn % 10;
    	bn=bn/10;
    	dn=dn+rem * pow(2, i);
    	++i;
  	}
  		printf("Converted Decimal Number = %d",dn);
}
