#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i,j,n=1;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (n % 3 == 0 && n % 5 != 0)printf("  *");
			else if (n % 3 != 0 && n % 5 == 0)printf("  #");
			else printf("%3d", n);
			n++;
		}
		printf("\n");
	}
	return 0;
}