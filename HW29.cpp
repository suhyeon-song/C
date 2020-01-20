//고집수 
//1. 양의 정수(100~10000)을 입력받아 가가 자릿수를 분할 (%,/사용)
//2. 분할하여 곱함 3. 분할하여 곱한게 일의 자리수가 되는데=> /10=0(int) 4. 반복 횟수 cnt
#include<stdio.h>
#pragma warning(disable:4996)
int transNumber(int num);
int inputUInt(int *,int *,int *);
void output(int cntnum);
void myflush();
int main()
{
	int p1,p2,num,temp,cnt=0,cntnum=0;//cnt: 고집수 계산 횟수 cntnum: 고집수가 num인 수의 개수 
	num=inputUInt(&p1,&p2,&num);
	printf("고집수가 %d인 숫자 출력\n", num);
	for (int i = p1; i < p2+1; i++)
	{
		temp =i;
        while (1)
		{
			temp = transNumber(temp);
			cnt++;
			if (0<=temp&&temp < 10) break;
			
		}
		if (num == cnt) { printf("%d\n", i); cntnum++; }
		else;
		cnt = 0;
	}

	output(cntnum);
	return 0;
}
int inputUInt(int *a,int *b,int *c) {
	int x, y,z;
	while(1){
	printf("시작 값(P1):");
	scanf("%d", &x);
	*a = x;
	myflush();
	printf("끝 값(P2):");
	scanf("%d", &y);
	*b = y;
	myflush();
	printf("고집수(N):");
	scanf("%d", &z);
    *c = z;
	myflush();
	if (x >= 100 && y <= 10000 && c>=0)break;
	else { printf("100~10000사이의 숫자를 입력하세요\n"); continue; }
	}
	return z;
}
int transNumber(int num)
{
	int num1,num10,num100,num1000;
	
		if (0 <= num && num < 10) { return num; }
		else if (num >= 10 && num < 100)
		{
			num1 = num % 10;
			num10 = num / 10;
			return num1 * num10;
		}
		else if (num >= 100 && num < 1000)
		{
			num1 = num % 10;
			num10 = (num / 10) % 10;
			num100 = num / 100;
			return num1 * num10 * num100;
		}
		else
		{
			num1 = num % 10;
			num10 = (num / 10) % 10;
			num100 = (num / 100) % 10;
			num1000 = num / 1000;
			return num1 * num10 * num100 * num1000;
		}
	   
}

void output(int cntnum)
{
	printf("총 개수 : %d", cntnum);
}
void myflush()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		;
	}
}