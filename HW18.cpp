//���ɴ븦 5������ ����
//5���̻��̸� �� ����� 10%����
//����������α׷�
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
	printf("���尴�� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);
	return age;
}
int inputnumber()
{
	int number;
	printf("���尴�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &number);
	printf("\n\n");
	return number;
}
void output(int price,int number,int discount)
{
	double discountprice;
	discountprice = price * number * (discount) * 0.01;
	printf("�����=>%d��\n���αݾ�=>%d��\n�����ݾ�=>%d��\n", price * number,(int)discountprice, price*number-(int)discountprice);
}