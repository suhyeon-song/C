//������� ��� ���α׷�
#include<stdio.h>
#pragma warning(disable:4996)
int input(const char* msg);
int calcu(int code,int use);
void output(int code,int use, int total);
void myflush();
int main()
{
	int code, use, total;
	while (1) {
		code = input("����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3.������): ");
		if (code >= 1 && code <= 3)break;
		else;
}
	while (1) {
		use = input("��뷮�� �Է��Ͻÿ�(ton����): ");
		if (use >= 0)break;
		else;
	}
	total = calcu(code, use);
	output(code, use, total);
	return 0;
}
int input(const char* msg)
{
	int n;
	printf("%s", msg);
	scanf("%d", &n);
	myflush();
	return n;
	}
int calcu(int code, int use)
{
	int total,tax;
	double dtax;

	switch (code)
	{
	case 1: total = use * 50; break;
	case 2: total = use * 45; break;
	case 3: total = use * 30; break;
	}
	dtax = total * 0.05;
	tax = (int)dtax;
	return total + tax;
}
void output(int code, int use, int total)
{
	if(code==1)printf("\n# ������ڵ�: %d(������)\n", code);
	else if (code == 2)printf("\n# ������ڵ�: %d(�����)\n", code);
	else printf("\n# ������ڵ�: %d(������)\n", code);
	
	printf("# ��뷮: %dton\n", use);
	printf("# �� �������: %d��\n", total);
	return;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}