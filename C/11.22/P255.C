#include <stdio.h>

/* userCode(<70�ַ�): �Զ��庯��֮ԭ������ */
int nmsl(int arr[], int num, int n);

int main(void)
{
	int arrA[5], arrB[8], num, minPosA, minPosB;

	printf("������5������");
	scanf("%d%d%d%d%d", &arrA[0], &arrA[1], &arrA[2], &arrA[3], &arrA[4]);
	printf("������8������");
	scanf("%d%d%d%d%d%d%d%d", &arrB[0], &arrB[1], &arrB[2], &arrB[3], &arrB[4], &arrB[5], &arrB[6], &arrB[7]);
	printf("��������һ������");
	scanf("%d", &num);

	minPosA = nmsl(arrA, num, 5);  /* userCode(<50�ַ�): ���ú���������arrA�д���num����С�����ڵ��±� */
	if (-1 == minPosA)
	{
		printf("\narrA: not Find!");
	}
	else
	{
		printf("\nminPos(arrA) = %d", minPosA);
	}

	minPosB = nmsl(arrB, num, 8);   /* userCode(<50�ַ�): ���ú���������arrB�д���num����С�����ڵ��±� */
	if (-1 == minPosB)
	{
		printf("\narrB: not Find!\n");
	}
	else
	{
		printf("\nminPos(arrB) = %d\n", minPosB);
	}

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
int nmsl(int arr[], int num, int n)
{
	int i, cha = 999999, xiabiao, cishu = 0;

	for ( i = 0; i < n; i++)
	{
		if (arr[i] > num)
		{
			cishu++;
			if ((arr[i] - num) < cha)
			{
				cha = arr[i] - num;
				xiabiao = i;
			}
		}
		
	}
	
	if (cishu != 0)
	{
		return xiabiao;
	}
	else
	{
		return -1;
	}
	

}

