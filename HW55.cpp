//3행 4열짜리 2차원 int 배열의 행,열의 합을 구하기
//3행 4열의 각 방을 1~9 사이 난수로 초기화
//각 방의 내용 및 행의 합계, 열의 합계를 출력하는 프로그램
//1. 난수로 배열 초기화(포인터로 받음)
//2 배열의 내용과 행렬의 합 출력
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void inputarry(int(*p)[4],int row);
void output(int(* p)[4],int row);
int main()
{
	int arry[3][4],i;
	int row, col;
	srand((unsigned int)time(NULL));
	row = sizeof(arry) / sizeof(arry[0]);
	col = sizeof(arry[0]) /sizeof( arry[0][0]);
	inputarry(arry, row);
	output(arry, row);
	return 0;
}
void inputarry(int(*p)[4], int row)//int ?행 4열짜리 2차원 데이터 입력
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 4; j++) {
			p[i][j] = rand() % 9 + 1;
		}
	}
}
void output(int(*p)[4], int row)
{
	int i, j,sumrow=0,sumcol=0;
	for (i = 0; i < row; i++) {
		printf("%d행: ", i);
		for (j = 0; j < 4; j++)
		{
				printf("%4d", p[i][j]);
				sumrow += p[i][j];
		}
		printf("   %d행의 합:%d\n",i,sumrow);
		sumrow = 0;
		}

	printf("열의 합");
	for (i = 0; i < 4; i++)
	{
		sumcol = p[0][i] + p[1][i] + p[2][i];
		printf("%4d", sumcol);
		sumcol = 0;
	}
	



}
