//배열 내의 데이터를 역순으로 저장하기
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
	int ary[] = { 1,2,3,4,5,6};
	int size, i;
	size = sizeof(ary) / sizeof(ary[0]);
	printf("처음 배열에 저장된 값: ");
	for (i = 0; i < size; i++) { printf("%d ",ary[i]); }
	printf("\n");
	
	for (i = 0; i < size / 2; i++)
	{
		swap(&ary[i], &ary[size - i-1]);
		}
	
	/*for(i=0;i<size/2;i++)
	{
	swap(ary+4*i,ary+(size-1-i)*4);
	}
	*/
	printf("바뀐 배열에 저장된 값: ");
	for (i = 0; i < size; i++) { printf("%d ",ary[i]); }
	
	
	return 0;
}

void swap(int*a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}