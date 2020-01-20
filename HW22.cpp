//한 줄에 5개씩 별(*)출력하기
//1. 키보드로부터 정수 입력 (scanf)2. 숫자만큼 별을 출력 (while) 3, 한줄에 5개씩 출력(if)
#include <stdio.h>
#pragma warning (disable:4996)
int input();
int main() {
	int i=0, num;
	num = input();
	while (i<num) {
		printf("*");
		if ((i+1) % 5 == 0)printf("\n");
		i++;
	}
	return 0;

}
int input() {
	int num;
	printf("# 정수값을 입력하세요: ");
	scanf("%d", &num);
	return num;
}