//BMI구하기
//1. 몸무게와 키를 입력받아 2. BMI지수 계산 3.비만도 출력(5가지) 
//BMI=몸무게(키로)/키(미터)의 제곱
#include<stdio.h>
#pragma warning(disable:4996)
int inputweight();
double inputheight();
double calculatebmi(int weight, double height);
void output(double bmi);
int main()
{
	int weight;
	double height, bmi;
	weight = inputweight();
	height = inputheight();
	bmi = calculatebmi(weight, height);
	output(bmi);
	return 0;
}
int inputweight() {
	int weight;
	printf("몸무게를 입력하세요(Kg): ");
	scanf("%d", &weight);
	return weight;
}
double inputheight() {
	int height;
	printf("키를 입력하세요(m):");
	scanf("%lf", &height);
	return height;
}

double calculatebmi(int weight, double height) {
	double bmi;
	bmi = weight / (height * height);
	return bmi;
}
void output(double bmi) {
	if (bmi < 25.0)
	{
		if (bmi < 18.5)  printf("당신의 BMI는 %lf로 저체중입니다", bmi); 
		else  printf("당신의 BMI는 %lf로 정상체중입니다", bmi); 
	}
	else{
		if (bmi < 30)  printf("당신의 BMI는 %lf로 과체중입니다", bmi); 
		else if (bmi < 40)  printf("당신의 BMI는 %lf로 비만입니다", bmi); 
		else  printf("당신의 BMI는 %lf로 고도비만입니다", bmi); 
	}
}