#include<stdio.h>
//һά�����ʹ��

int main()
{
	char arr[] = "abcdef";  //[a][b][c][d][e][f][\0]
	//printf("%c\n", arr[3]);  //%c��C�����д����ַ��͸�ʽ��
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i <len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("%s", arr);   //%s�������һ���ַ���

	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

//�ܽ᣺1��������ʹ���±������ʵģ��±��Ǵ�0��ʼ��  2������Ĵ�С�ǿ���ͨ������õ���

