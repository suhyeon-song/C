#include <stdio.h>
void printAge(int);
void printHeight(double);
int main()
{
	char name[20] = "송수현";
	int age = 24;
	double height = 164.2;

	printf("이름:%s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}
void printAge(int age)
{
	printf("나이: %d세\n", age);
	return;
}
void printHeight(double height)
{
	printf("신장: %lf cm", height);
	return;
}