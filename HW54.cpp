//문자열 내의 숫자의 합 구하기
//1. 문자열을 입력받는다(입력함수) 2. 문자열에서 숫자를 골라서 더한다.(숫자나오면 저장 시작 문자 나오면 끝)
#include <stdio.h>
#include<string.h>
#pragma warning (disable: 4996)
int strinput(char *p);
int calcu(char *p,int arynum);
void output(char *pstr,int sum);
int pow(int a, int b);
int main()
{
	char str[100];
	int num[100] = { 0, },sum,arynum;
	while (1)
	{
		arynum = strinput(str);
		if (strcmp(str, "end") == 0)return 0;
		else;
		sum = calcu(str, arynum);
		output(str, sum);
		printf("\n");
	}
	return 0;
}
int strinput(char *p)
{
	int i = 0;
	printf("# 문장을 입력하세요: ");
	while (1)
	{
		scanf("%c", p + i);
		if (p[i] == '\n') { p[i] = '\0'; break; }
		i++;
	}
	return i+1;//배열의 개수 (\0포함한)  리턴
}
int calcu(char* pstr,int arynum)
{
	int i, k, cnt = 0, sum = 0;
	int num[100] = { 0, };
	for (i = 0; i < arynum; i++)
	{
		if (pstr[i] - '0' >= 0 && pstr[i] - '0' <= 9) {//pstr[i]에 숫자로 변환 가능한 문자상수
			num[cnt] = pstr[i] - '0';//num[cnt]에 pstr[i] 숫자 변환 후 에 대입
			cnt++;//cnt 1 증가
		}
		else {
			for (k = 0; k < cnt; k++)
			{
				sum += (num[k] * pow(10, cnt-k-1));//cnt는 sum배열의 개수 cnt가 3이면 10^2부터 곱하기 시작하기 때문에 -1 해줘야 한다.
			}
			cnt = 0;
		}
	
			
	}
	return sum;
}
void output(char* pstr, int sum)
{	printf("\"%s\"내의 총 숫자는 [%d]입니다.\n", pstr, sum);}
int pow(int a, int b)
{
	int total = 1;//**total=0이라고 하면 *=에 0이 곱해지기 때문에 항상 0이 나오기 때문에 total을 1로 초기화
	for (int i = 0; i < b; i++)
	{
		total *= a;
	}
	return total;
}
