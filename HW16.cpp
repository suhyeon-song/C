//����ö ��� ����ϱ�
//������ ���� ����Ǵ� ��Ģ
//1~5;600�� 6~10;800�� 
//10������ �ʰ��� 1~2������ 100�� 3~4������ 200��
//�Է� ��� ��� ����Լ�
#pragma warning(disable:4996)
#include <stdio.h>
int input();
int calcu(int num);
void output(int a);
int main() {
	int num,a;
	num = input();
	a=calcu(num);
	output(a);
	return 0;
}
int input() {
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	return num;
}
int calcu(int num) {
	int fee;
	if (num <= 5)  fee = 600; 
	else if (num <= 10)  fee = 800; 
	else
	{
		fee = 800 + (num - 9) / 2 * 100;
	}
	return fee;
}
void output(int a)
{
	printf("���: %d��", a);
	return;
}