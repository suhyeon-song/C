//구구단 출력하기 (for뮨 사용)
//2~9단을 한 화면 안에 출력//2중 for문 2set이용 한번 출력 . 바로 이어서 3중 for문을 1set만을 이용해서 똑같이 출력 
#include <stdio.h>
int main()
{
	int i, j,k,mod;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 5; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	printf("\n\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	for (i = 0; i < 50; i++) { printf("-"); }printf("\n");
	printf("<3중 for문을 이용한 출력>\n");
	
	for (k = 0; k < 2; k++)//두번 돈다
	{
		for (i = 1; i <= 9; i++)//9번 돈다
		{
		
			for (j= 2; j< 6; j++)//2~5까지 돈다. 
			{
				printf("%d*%d=%d\t", j+k*4, i, i * (j+k*4));//k=0 2~5, k=1: 6~9

			}
			
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;

}