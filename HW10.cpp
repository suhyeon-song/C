//두 정수를 입력받아 합, 차, 곱, 몫의 값을 출력하는 프로그램 작성
//실수값은 소수점 이하 둘째자리까지 출력
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%.2lf\n", a, b, (double)a / b);
	return 0;

}