#include <stdio.h>
void printAge(int);
void printHeight(double);
int main()
{
	char name[20] = "�ۼ���";
	int age = 24;
	double height = 164.2;

	printf("�̸�:%s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}
void printAge(int age)
{
	printf("����: %d��\n", age);
	return;
}
void printHeight(double height)
{
	printf("����: %lf cm", height);
	return;
}