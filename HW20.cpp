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
	printf("1주일 간의 근무시간을 입력하시오: ");
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
	printf("#총수입 :%d원\n#세 금:%d원\n # 실수입:%d원\n", gpay, taxes, gpay - taxes);
	return;
}