#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int x, y, res;

	while (1)
	{
		printf("# �ΰ��� ������ �Է��ϼ���: ");
		if (scanf("%d%d", &x, &y) != 2)break;
		else
		{
			if (x > y) printf("%d-%d=%d\n", x, y, x - y);
			else printf("%d-%d=%d\n", y, x, y - x);
		}
	}
	return 0;
}