//�̸��� �������� �Է¹޾� ������ ���� ���·� ���
//�̸� ��ü�� ""�� ��� ���
//�ʵ����� 20�ڷ� �̸��� ����ϵ� �� �ʵ带 ""�� ���μ� ���
//�ʵ����� 20�ڷ� �̸��� ����ϵ� �� �ʵ带 ""�� ���μ� ���� ����
#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
	char name[20];
	printf("�̸��� �Է��ϼ���");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;

}