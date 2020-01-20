//총 5개의 정수를 입력받아 그 수의 합을 출력하기
#include<stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n, i,sum=0;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("0보다 큰수를 입력하시오(%d번쨰) :", i + 1);
			scanf("%d", &n);
			if (n > 0)break;
			else;
		}
		sum += n;
	}
	printf("\n입력된 값의 총 합: %d",sum);
	return 0;
}