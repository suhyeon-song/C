#include <stdio.h>
int main()
{
	int time = 54321;
	int hour, min, second;
	hour = time / 3600;
	min = (time - hour * 3600) / 60;
	second = time - hour * 3600 - min * 60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�", time, hour, min, second);
	return 0;
}