#include<stdio.h>
//������Ϊ���������ĳ�������������д�����ʱ�򣬻Ὣ������Ϊ������������

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	return 0;
//}


//����ð����������һ��������������
//ð�������������бȽ�Ȼ�󽻻�
//10 9 8 7 6 5 4 3 2 1  
//9 10 8 7 6 5 4 3 2 1
//9 8 10 7 6 5 4 3 2 1   һ��ð������
//...
//9 8 7 6 5 4 3 2 1 10

void bubble_sort(int arr[], int sz)
{
	//ȷ��ð�����������(Ԫ�ظ���-1��
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;  //������һ��Ҫ����������Ѿ����� 
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //���������������ʵ����ȫ���� 
			}


		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	bubble_sort(arr, sz);//ð�������� 
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//int main()  //�Ż����
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };  //Ԫ������������Ԫ���ڲ�һ�Զ�����Ҫ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}