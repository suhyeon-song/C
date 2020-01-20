//가위바위보 게임
//1. user 입력 2. com 난수 발생 3. output(user,com) 출력 4. main에서 결과 출력 5. user가 질때까지 while 6. 총 몇승 몇무 출력
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
int input();
void output(int user,int com);
int main()
{
	int user, com,cnte=0,cntw=0;
	while (1)
	{
		user = input();
		srand((unsigned int)time(NULL));
		com = rand() % 3 + 1;
		output(user, com);

		if (user == 1)
		{
			if (com == 1)
			{
				printf("비겼습니다.");
				cnte++;
			}
			else if (com == 2) {
				printf("당신이 졌습니다.");
				break;
			}
			else {
				printf("이겼습니다.");
				cntw++;
			}
		}
		else if (user == 2)
		{
			if (com == 1) {
				printf("당신이 졌습니다."); break;
			}
			else if (com == 2) {
				printf("비겼습니다."); cnte++;
			}
			else {
				printf("이겼습니다."); cntw++;
			}
		}
		else {
			if (com == 1) {
				printf("이겼습니다.");
				cntw++;
			}
			else if (com == 2)
			{
				printf("당신이 졌습니다. "); break;
			}
			else {
				printf("비겼습니다.");
				cnte++;
			}
		}
		printf("\n");}
	printf("\n게임결과: %d승 %d무", cntw, cnte);
	return 0;
		}
	


int input()
{
	int user;
	printf("# 바위는 1, 가위는 2, 보는 3. 중에 선택하시오: ");
	scanf("%d", &user);
	return user;
}
void output(int user, int com)
{
	char users[20], coms[20];
	if (user == 1)strcpy(users, "바위");
	else if (user == 2)strcpy(users, "가위");
	else strcpy(users, "보");
	if (com == 1)strcpy(coms, "바위");
	else if (com == 2)strcpy(coms, "가위");
	else strcpy(coms, "보");
	printf("당신은 %s 선택 컴퓨터는 %s 선택: ", users, coms);
	return;
}