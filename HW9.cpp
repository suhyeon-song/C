//�Էµ� ������ 8������ 16������ ����ϴ� ���α׷�
//�������� �Է¹޴´�
//8������ 16������ ��� ���ξ �Բ� ���
//���� �Է��Լ� ���
#include <stdio.h>
#pragma warning(disable:4996)
int input();
int main() {
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.\n", number);
	return 0;

}
int input() {
	int number;
	printf("���� ���� �Է��ϼ���: ");
	scanf("%d", &number);
	return number;
}