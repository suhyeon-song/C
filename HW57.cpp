#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
void input(char(*p)[20],int row,int col);
void sort(char(*p)[20],int row);
void output(char(*p)[20], int row);
void swap(char* p1, char* p2);
int main()
{
	char arry[5][20];
	int row, col;
	row = sizeof(arry) / sizeof(arry[0]);
	col = sizeof(arry[0]) / sizeof(arry[0][0]);
	input(arry, row, col);
	sort(arry, row);
	output(arry, row);
	return 0;
}
void input(char(*p)[20],int row, int col)//p=char 이차원 배열을 가리킴
{
	int i;
	for (i = 0; i < row; i++)
	{
		printf("# %d번 문자열을 입력하시오: ", i+1);
		scanf("%s", p[i]);
	}
}

void sort(char(* p)[20], int row)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = i + 1; j < row; j++) {
			if (strcmp(p[i], p[j]) > 0)swap(p[i], p[j]);
			else;
		}
	}
}
void swap(char *p1, char *p2)
{
	char temp[20];
	strcpy(temp, p1);
	strcpy(p1, p2);
	strcpy(p2, temp);
}
void output(char(*p)[20], int row)
{
	int i,len;
	for (i = 0; i < row; i++)
	{
		len=strlen(p[i]);
		printf("str[%d] = %s  %c   %c\n", i,p[i], p[i][0], p[i][len - 1]);
	}
}