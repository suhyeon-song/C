//입력된 정수를 8진수와 16진수로 출력하는 프로그램
//정수값을 입력받는다
//8진수와 16진수로 출력 접두어도 함께 출력
//정수 입력함수 사용
#include <stdio.h>
#pragma warning(disable:4996)
int input();
int main() {
	int number;
	number = input();
	printf("입력된 값은 8진수로 %#o입니다.\n", number);
	printf("입력된 값은 16진수로 %#x입니다.\n", number);
	return 0;

}
int input() {
	int number;
	printf("정수 값을 입력하세요: ");
	scanf("%d", &number);
	return number;
}