//�ټ����� �л��� Ű�� �Է¹޾� �� ��� ����ϱ�
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int i = 0;
	double tall[5],sum=0,avg;
	/*while (i < 5)
	{
		printf("%d�� �л��� Ű��?:", i + 1);
		scanf("%lf", &tall[i]);//tall[i]=getchar();
		i++;
	}
	*/
	for (i = 0; i < 5; i++) {
		printf("%d�� �л��� Ű��?:", i + 1);
		scanf("%lf", &tall[i]);
	}
	for (i = 0; i < 5; ++i) {
		sum += tall[i];
	}
	avg = sum / 5;
	printf("�ټ� ���� ��� Ű�� %.1lf cm�Դϴ�", avg);
	return 0;
}