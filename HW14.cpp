//���ڿ� �����Ͽ� ����ϱ�
//���ڿ��� �Է¹޾� �Է¹��� ���ڿ��� �տ������� �ݸ� ���
//��½� ���ȣ�� ��� ���, ���ڿ��� ���̸�ŭ�� �ʵ����� ���ڿ��� �ݸ� ����ϰ� ���ڿ� �ڿ��� ������ȣ�� �־� ���
#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
	char str[10];
	int len;
	printf("���ڿ� �Է�:");
	scanf("%s", str);
	len = strlen(str);
	printf("[%*.*s...]", len,len/2,str);
	return 0;
}