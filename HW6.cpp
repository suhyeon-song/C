//�µ���ȯ�ϱ�
//Ű����� ȭ�� �µ��� �Է¹ް� ���� �µ��� ����Ͽ� ����ϴ� ���α׷�
//�����µ��� �Ҽ��� ���� ù°�ڸ����� ���
//C=5/9(F-32)
//�Է��Լ� ����Լ� 
#pragma warning(disable:4996)
#include <stdio.h>
int input();
void output(double cels);
int main()
{
	int fahre;
	double cels;
    fahre=input();
	cels = (5 / 9.0) * ((double)fahre-32.0);
    output(cels);
	return 0;
}
int input( )
{
	int fahre;
	printf("ȭ���µ��� �Է��ϼ���:");
	scanf("%d", &fahre);
    return fahre;
}
void output(double cels)
{
	printf("�����µ��� %.1lf�� �Դϴ�", cels);
	return;
}