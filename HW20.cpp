#include <stdio.h>
#pragma warning (disable:4996)
int input();
int calgpay(int time);
int caltaxes(int gpay);
void output(int gpay, int taxes);
int main()
{
	int time, gpay,npay;
	double taxes;
	time = input();
	gpay = calgpay(time);
	taxes = caltaxes(gpay);
	output(gpay,taxes);
	return 0;
}
int input() {
	int time;
	printf("1���� ���� �ٹ��ð��� �Է��Ͻÿ�: ");
	scanf("%d", &time);
	return time;
}
int calgpay(int time) {
	int gpay;
	if (time <= 40) {
		gpay = time * 3000;
	}
	else gpay = (40 * 3000) + (time - 40) * 3000 * 1.5;
	return gpay;
}
int caltaxes(int gpay) {
	int taxes;
	if (gpay <= 100000)
	{
		taxes = gpay * 0.15;
	}
	else
	{
		taxes = 100000 * 0.15 + (gpay - 100000) * 0.25;
	}
	return taxes;
}
void output(int gpay,int taxes) {
	printf("#�Ѽ��� :%d��\n#�� ��:%d��\n # �Ǽ���:%d��\n", gpay, taxes, gpay - taxes);
	return;
}