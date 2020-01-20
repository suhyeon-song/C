//달팽이 우물 탈출 프로그램
//1. 우물 깊이 cm (정수형)입력받음 2. 낮동안 50cm 밤동안 20cm 3. 달팽이가 우물을 탈출하기까지 며칠이 걸리나요
#include <stdio.h>
#pragma warning (disable:4996)
int input();
int outdate(int dep);
void output(int dep,int num);
int main()
{
	int dep, date;
	dep = input();
	date = outdate(dep);
	output(dep, date);
	return 0;

}
int input() {
	int dep;
	printf("우물의 깊이를 입력하시오(cm단위):");
	scanf("%d", &dep);
	return dep;
}
int outdate(int dep)
{
	int num;
	if (dep >= 50)
	{
		num = (dep - 50) / 30;
		if ((dep - 50) % 30 == 0)return num + 1;
		else return (num + 2);
	}
	else {
		if (dep == 0)return 0;
		else return 1;
	}
}
void output(int dep, int num)
{
	printf("%.2lf 미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다", dep / 100.00, num);
}