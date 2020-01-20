//최소값, 최대값 찾기
#include<stdio.h>
#pragma warning (disable:4996)
void input(double *p);
double findMax(double *p);
double findMin(double *p);
void output(double mymax,double mymin);
void myflush();
int main()
{
	double num[5],mymax,mymin;
	input(num);
	mymax = findMax(num);
	mymin = findMin(num);
	
	output(mymax, mymin);

	return 0;
}
void input(double* p)
{
	int i;
		for (i = 0; i < 5; i++) 
		{
			printf("%d 번 방 값: ",i);
			scanf("%lf", p + i);
			while (getchar() != '\n') 
			{ myflush();  
			printf("%d 번 방 값: ",i);
			scanf("%lf", p + i);
			}
		}
	
}
void myflush()
{
	while (getchar() != '\n') { ; }
}
double findMax(double* p)
{
	//배열의 0번째 방이 최대값이라고 가정 //0번째 방 값보다 크면 mymax에 대입
	double mymax;
	int i;
	mymax = p[0];
	for (i = 1; i < 5; i++) {
		if (mymax >= p[i]);
		else mymax = p[i]; 
	}
	return mymax;
}
double findMin(double* p)
{
	//배열의 0번째 방이 최소값이라고 가정 //0번째 방 값보다 작으면 mymin에 대입
	double mymin;
	int i;
	mymin = p[0];
	for (i = 1; i < 5; i++) {
		if (mymin <= p[i]);
		else mymin = p[i];
	}
	return mymin;
}
void output(double mymax, double mymin)
{
	printf("\n\n가장 큰 값: %.2lf\n가장 작은 값: %.2lf\n", mymax, mymin);
}