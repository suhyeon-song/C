//������ 
//1. ���� ����(100~10000)�� �Է¹޾� ���� �ڸ����� ���� (%,/���)
//2. �����Ͽ� ���� 3. �����Ͽ� ���Ѱ� ���� �ڸ����� �Ǵµ�=> /10=0(int) 4. �ݺ� Ƚ�� cnt
#include<stdio.h>
#pragma warning(disable:4996)
int transNumber(int num);
int inputUInt(int *,int *,int *);
void output(int cntnum);
void myflush();
int main()
{
	int p1,p2,num,temp,cnt=0,cntnum=0;//cnt: ������ ��� Ƚ�� cntnum: �������� num�� ���� ���� 
	num=inputUInt(&p1,&p2,&num);
	printf("�������� %d�� ���� ���\n", num);
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
	printf("���� ��(P1):");
	scanf("%d", &x);
	*a = x;
	myflush();
	printf("�� ��(P2):");
	scanf("%d", &y);
	*b = y;
	myflush();
	printf("������(N):");
	scanf("%d", &z);
    *c = z;
	myflush();
	if (x >= 100 && y <= 10000 && c>=0)break;
	else { printf("100~10000������ ���ڸ� �Է��ϼ���\n"); continue; }
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
	printf("�� ���� : %d", cntnum);
}
void myflush()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		;
	}
}