//���������� ����
//1. user �Է� 2. com ���� �߻� 3. output(user,com) ��� 4. main���� ��� ��� 5. user�� �������� while 6. �� ��� � ���
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
				printf("�����ϴ�.");
				cnte++;
			}
			else if (com == 2) {
				printf("����� �����ϴ�.");
				break;
			}
			else {
				printf("�̰���ϴ�.");
				cntw++;
			}
		}
		else if (user == 2)
		{
			if (com == 1) {
				printf("����� �����ϴ�."); break;
			}
			else if (com == 2) {
				printf("�����ϴ�."); cnte++;
			}
			else {
				printf("�̰���ϴ�."); cntw++;
			}
		}
		else {
			if (com == 1) {
				printf("�̰���ϴ�.");
				cntw++;
			}
			else if (com == 2)
			{
				printf("����� �����ϴ�. "); break;
			}
			else {
				printf("�����ϴ�.");
				cnte++;
			}
		}
		printf("\n");}
	printf("\n���Ӱ��: %d�� %d��", cntw, cnte);
	return 0;
		}
	


int input()
{
	int user;
	printf("# ������ 1, ������ 2, ���� 3. �߿� �����Ͻÿ�: ");
	scanf("%d", &user);
	return user;
}
void output(int user, int com)
{
	char users[20], coms[20];
	if (user == 1)strcpy(users, "����");
	else if (user == 2)strcpy(users, "����");
	else strcpy(users, "��");
	if (com == 1)strcpy(coms, "����");
	else if (com == 2)strcpy(coms, "����");
	else strcpy(coms, "��");
	printf("����� %s ���� ��ǻ�ʹ� %s ����: ", users, coms);
	return;
}