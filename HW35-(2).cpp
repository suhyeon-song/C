#include <stdio.h>
#pragma warning (disable:4996)
int input(const char* msg);
void myflush();
int main()
{
	int i = 1, j, date, sum = 0, cnt = 0;
	date = input("����� �ٹ��ϼ��� �Է��Ͻÿ�: ");


		for (i = 1;; i++)
		{
			for (j = i; j > 0; j--)
			{
				sum += i;
				cnt++;
				if (cnt == date) {
					printf("�ٹ���: %d��/ �� ��ȭ ��: %d��", date, sum); return 0;
				}
			}
		}
		return 0;


}
int input(const char* msg)
{
	int n;
	while (1) {
		printf("%s", msg);
		scanf("%d", &n);
		if (n > 0)break;
		else { myflush(); }
	}
	return n;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}