//온도변환하기
//키보드로 화씨 온도를 입력받고 섭씨 온도를 계산하여 출력하는 프로그램
//섭씨온도는 소수점 이하 첫째자리까지 출력
//C=5/9(F-32)
//입력함수 출력함수 
#pragma warning(disable:4996)
#include <stdio.h>
int input();
void output(double cels);
int main()
{
	int fahre;
	double cels;
    fahre=input();
	cels = (5 / 9.0) * ((double)fahre-32.0);
    output(cels);
	return 0;
}
int input( )
{
	int fahre;
	printf("화씨온도를 입력하세요:");
	scanf("%d", &fahre);
    return fahre;
}
void output(double cels)
{
	printf("섭씨온도는 %.1lf도 입니다", cels);
	return;
}