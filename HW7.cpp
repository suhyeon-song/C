//����Ÿ��� �ü��� �Է¹޾� ����ð� ����ϴ� ���α׷�
//����Ÿ� Km �ü� Km/h ����ð��� �ú��ʴ��� ���
//�ʼ��� �Ҽ��� ���� ��°�ڸ����� ���
#pragma warning(disable:4996)
#include <stdio.h>
double inputdistance();
double inputvolume();
int main()
{
	double distance, volume,sec,dhour,dmin;
	int hour, min;
	distance=inputdistance();
	volume=inputvolume();
	dhour = distance / volume;
	hour = (int)dhour;
	dmin = (dhour-hour) * 60;
	min = (int)dmin;
	sec = (dmin - min) * 60;
	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��",distance, hour, min, sec);
	return 0;
	
}
double inputdistance()
{
	double distance;
	printf("�Ÿ��� �Է��ϼ���(km����):");
	scanf("%lf", &distance); 
	return distance;
}
double inputvolume()
{
	double volume;
	printf("�ü��� �Է��ϼ���(km/h����):");
	scanf("%lf", &volume);
	return volume;
}
