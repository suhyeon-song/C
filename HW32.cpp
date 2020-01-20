//���� �Լ� �����

#include <stdio.h>
#pragma warning (disable:4996)
int  inputUInt(const char* msg);
double inputDouble(const char* msg);
int ipow(int num, int N);
double fpow(double fnum, int N);
void myflush();
int main()
{
	int x1, y1,y2,res1;
	double x2,res2;
	x1 = inputUInt("* ���� ���� ���� �Է� �Ͻÿ�:");
	y1 = inputUInt("* ���� ���� �Է� �Ͻÿ�");
	res1 = ipow(x1, y1);
	printf("%d�� %d���� %d�Դϴ�\n\n", x1, y1, res1);
	x2 = inputDouble("\n* ���� �Ǽ� ���� �Է� �Ͻÿ�:");
	y2 = inputUInt("* ���� ���� �Է� �Ͻÿ�:");
	res2 = fpow(x2, y2);
	printf("%.2lf�� %d���� %.3lf�Դϴ�\n\n", x2, y2, res2);
	return 0;
}
int inputUInt(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	while (1) {
		while (getchar() != '\n')
		{
			myflush();
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			scanf("%d", &n);
		}
		if (n < 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			scanf("%d", &n);
		}
		else break;
	}
	return n;
}
double inputDouble(const char* msg)
{
	double n;

	while (1) {
		printf("%s", msg);
		scanf("%lf", &n);
		while (getchar() != '\n')
		{
	
			myflush();
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			scanf("%d", &n);
		}
		if (n < 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ��Է��Ͻʽÿ�:");
			scanf("%d", &n);
		}
		else break;
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}
int ipow(int num, int N)
{
	int res=1;
	if (num == 0)return 0;
	else if (N == 0)return 1;
	else
	{
		for (int i = 0; i < N; i++)
		{
			res *= num;
		}
	}return res;
}
double fpow(double num, int N)
{
	double res = 1.0;
	if (num == 0)return 0;
	else if (N == 0)return 1;
	else
	{
		for (int i = 0; i < N; i++)
		{
			res *= num;
		}
	}return res;
}