#include<stdio.h>
//数组作为函数参数的场景，往往我们写代码的时候，会将数组作为参数传给函数

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


//例：冒泡排序函数将一个整形数组排序
//冒泡排序：两两进行比较然后交换
//10 9 8 7 6 5 4 3 2 1  
//9 10 8 7 6 5 4 3 2 1
//9 8 10 7 6 5 4 3 2 1   一趟冒泡排序
//...
//9 8 7 6 5 4 3 2 1 10

void bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数(元素个数-1）
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;  //假设这一趟要排序的数据已经有序 
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //本趟排序的数据其实不完全有序 
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
	//对arr进行排序，排成升序
	bubble_sort(arr, sz);//冒泡排序函数 
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

//int main()  //优化情况
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };  //元素有序的情况，元素内部一对都不需要交换
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}