//배열의 부분합 구하기(이차원 배열 이용)
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void inputArry(int(*p)[5], int row, int col);
void calcuSum(int(*p)[5],int row, int col, int* psum1, int* psum2, int* psum3);
void output(int(*p)[5], int row, int col,int sum1, int sum2, int sum3);
int main()
{
	srand((unsigned int)time(NULL));
	int arry[5][5], row, col,sum1,sum2,sum3;
	row = sizeof(arry) / sizeof(arry[0]);
	col = sizeof(arry[0]) / sizeof(arry[0][0]);
	inputArry(arry, row, col);
	calcuSum(arry, row, col, &sum1, &sum2, &sum3);
	output(arry, row, col,sum1,sum2,sum3);
	return 0;
}
void inputArry(int(*p)[5], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			p[i][j] = rand() % 20 + 1;
		}
	}
}
void calcuSum(int(*p)[5],int row, int col, int *psum1, int *psum2,int *psum3)
{
	int i, j,sum=0;
	for (i = 0; i < row; i++)
	{
		sum += p[i][i];
	}
	*psum1 = sum;
	sum = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < i; j++) {
			sum += p[i][j];
		}
	}
	*psum2 = sum;
	sum = 0;
	for (i = 0; i < row; i++)
	{
		for (j = col-1; i<j; j--)
		{
			sum += p[i][j];
		}
	}*psum3 = sum;
}
void output(int(*p)[5], int row, int col,int sum1,int sum2,int sum3)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		printf("%d번 행: ",i);
		for (j = 0; j < col; j++)
		{
			printf("%5d",p[i][j]);
		}
		printf("\n\n");
	}
	printf("sum1= %d\n", sum1);
	printf("sum2= %d\n", sum2);
	printf("sum3= %d\n", sum3);
}