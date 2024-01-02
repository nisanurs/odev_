#include <stdio.h>
main()
{
	int i,j,k;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-(i+1);j++)
		{
			printf(" ");
		}
		for(k=0;k<5-j;k++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}