#include <stdio.h>

/* �����ִ��빦�ܽ��飺����ԭ������ */
/* User Code Begin(Limit: lines<=3, lineLen<=80, �������ڱ��к����Ӵ��롢���3�С��г�<=80�ַ�) */
void scanfArr(int *arr, int n);
int maxArr(int *arr, int n);
double aver(int *arr, int n);
/* User Code End(�������Ӵ��������ע�⣺���к͵���Ϊһ�е�{��}�������������г���������tab����) */

int main(void)
{
	int Data[20], n, max;
	double average;

	printf("Please input the number n = ");
	scanf("%d", &n);
	printf("Please input the array elements : ");
	scanfArr(Data, n);

	max = maxArr(Data, n);
	average = aver(Data, n);
	printf("\nmax = %d\naverage = %.2f\n", max, average);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void scanfArr(int *arr, int n)
{
	int i;

	for ( i = 0; i < n; i++)
	{
		scanf("%d", arr);
		arr++;
	}
	
}

int maxArr(int *arr, int n)
{
	int i, max;

	max = *arr;
	for ( i = 0; i < n; i++)
	{
		if (max < *arr)
		{
			max = *arr;
		}
		arr++;
	}

	return max;
	
}

double aver(int *arr, int n)
{
	int i;
	float sum;

	for ( i = 0; i < n; i++)
	{
		sum += *arr;
		arr++;
	}

	return sum / n;
	
}