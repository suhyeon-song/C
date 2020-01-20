//연령대를 5가지로 나눔
//5명이상이면 총 입장료 10%할인
//입장료계산프로그램
#pragma warning(disable:4996)
#include<stdio.h>
int inputage();
int inputnumber();
void output(int price,int number, int discount);
int main()
{
	int age, number,price;
	int discount;
	age=inputage();
	number=inputnumber();
	
	if (age <19) {
		if (age < 8) {
			price = 500;
		}
		else if (age < 13)
		{
			price = 700;
		}
		else
			price = 1000;
	}
	else {
		if (age > 55) {
			price = 500;
		}
		else price = 1500;
	}
	if (number > 4)
	{
     discount = 10;
	 output(price,number,discount);
	}
	else
	{
		discount = 0;
		output(price,number,discount);
	}
	return 0;
}
int inputage()
{
	int age;
	printf("입장객의 나이를 입력하시오: ");
	scanf("%d", &age);
	return age;
}
int inputnumber()
{
	int number;
	printf("입장객의 수를 입력하시오: ");
	scanf("%d", &number);
	printf("\n\n");
	return number;
}
void output(int price,int number,int discount)
{
	double discountprice;
	discountprice = price * number * (discount) * 0.01;
	printf("입장료=>%d원\n할인금액=>%d원\n결제금액=>%d원\n", price * number,(int)discountprice, price*number-(int)discountprice);
}