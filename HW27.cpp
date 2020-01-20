//달걀 포장 프로그램 작성하기
// 1. 달걀의 무게를 입력 받음 2. (150<mass<500)=> 포장 (mass<150 || mass>500)=> 포장에서 제외 if문 3. 10개의 달걀을 한 박스 포장
#include<stdio.h>
#pragma warning (disable:4996)
int input();
int main()
{
	int mass, num=0;
	mass = input();
	while (num < 10) 
	{
		if (mass < 150)printf("메추리알 가지고 장난하지 마시오~^^\n");
		else if (mass > 500)printf("타조알 가지고 장난하지 마시오~^^\n");
		else {
			num++;
			printf("현재의 달걀 수: %d\n", num);
		}
		mass = input();
		
	}printf("*** 달걀 포장이 끝났습니다. ");
	return 0;

}
int input()
{
	int mass;
	printf("# 계란의 무게를 입력하세요(단위: g): ");
	scanf("%d", &mass);
	return mass;
}