#include <stdio.h>

/* userCode(<60�ַ�): �Զ��庯��֮ԭ������ */
void nmsl(int *arr, int *sum, int *gt, int gesu);

int main(void)
{
	int arr1[6], arr2[10], arr3[15], gt60A, gt60B, gt60C, sumA, sumB, sumC;
	
	nmsl(arr1, &sumA, &gt60A, 6);  /* userCode(<60�ַ�): ���ú����� 6������arr1�У�������ͼ�>60�ĸ��� */
	nmsl(arr2, &sumB, &gt60B, 10);  /* userCode(<60�ַ�): ���ú�����10������arr2�У�������ͼ�>60�ĸ��� */
	nmsl(arr3, &sumC, &gt60C, 15);  /* userCode(<60�ַ�): ���ú�����15������arr3�У�������ͼ�>60�ĸ��� */

	printf("\narr1[0]=%3d, arr1[ 5]=%3d, sum(arr1)=%d, cnt(arr1)=%d", arr1[0], arr1[5], sumA, gt60A);
	printf("\narr2[0]=%3d, arr2[ 9]=%3d, sum(arr2)=%d, cnt(arr2)=%d", arr2[0], arr2[9], sumB, gt60B);
	printf("\narr3[0]=%3d, arr3[14]=%3d, sum(arr3)=%d, cnt(arr3)=%d\n", arr3[0], arr3[14], sumC, gt60C);
	
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void nmsl(int *arr, int *sum, int *gt, int gesu)
{
	int i;

	*sum = 0;
	*gt = 0;
	printf("������%2d����: ", gesu);
	for (i = 0; i < gesu; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < gesu; i++)
	{
		*sum += *arr;
		if (*arr > 60)
		{
			(*gt)++;
		}
		arr++;
	}
	/*for (i = 0; i < gesu; i++)
	{
		*sum += arr[i];
		if (arr[i] > 70)
		{
			*gt++;
		}
	}*/
}