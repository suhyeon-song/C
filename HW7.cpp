//주행거리와 시속을 입력받아 주행시간 계산하는 프로그램
//주행거리 Km 시속 Km/h 주행시간은 시분초단위 출력
//초수는 소수점 이하 셋째자리까지 출력
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
	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨",distance, hour, min, sec);
	return 0;
	
}
double inputdistance()
{
	double distance;
	printf("거리를 입력하세요(km단위):");
	scanf("%lf", &distance); 
	return distance;
}
double inputvolume()
{
	double volume;
	printf("시속을 입력하세요(km/h단위):");
	scanf("%lf", &volume);
	return volume;
}
