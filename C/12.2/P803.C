#include<stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void nmsl(int *numa, int *numb);

int main(void)
{
	int numA, numB;

	printf("please input numA, numB: ");
	scanf("%d,%d", &numA, &numB);

	nmsl(&numA, &numB);  /* userCode(<40�ַ�): ���ú���ʵ��numA��numBֵ�Ľ��� */
	printf("\nnumA=%d, numB=%d\n", numA, numB);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void nmsl(int *numa, int *numb)
{
	int tem;

	tem = *numa;
	*numa = *numb;
	*numb = tem;

}