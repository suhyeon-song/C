//�� �ٿ� 5���� ��(*)����ϱ�
//1. Ű����κ��� ���� �Է� (scanf)2. ���ڸ�ŭ ���� ��� (while) 3, ���ٿ� 5���� ���(if)
#include <stdio.h>
#pragma warning (disable:4996)
int input();
int main() {
	int i=0, num;
	num = input();
	while (i<num) {
		printf("*");
		if ((i+1) % 5 == 0)printf("\n");
		i++;
	}
	return 0;

}
int input() {
	int num;
	printf("# �������� �Է��ϼ���: ");
	scanf("%d", &num);
	return num;
}