//다섯명의 학생의 키를 입력받아 그 평균 출력하기
#include <stdio.h>
#pragma warning (disable:4996)
int main() {
	int i = 0;
	double tall[5],sum=0,avg;
	/*while (i < 5)
	{
		printf("%d번 학생의 키는?:", i + 1);
		scanf("%lf", &tall[i]);//tall[i]=getchar();
		i++;
	}
	*/
	for (i = 0; i < 5; i++) {
		printf("%d번 학생의 키는?:", i + 1);
		scanf("%lf", &tall[i]);
	}
	for (i = 0; i < 5; ++i) {
		sum += tall[i];
	}
	avg = sum / 5;
	printf("다섯 명의 평균 키는 %.1lf cm입니다", avg);
	return 0;
}