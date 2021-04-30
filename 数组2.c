#include<stdio.h>
//一维数组的使用

int main()
{
	char arr[] = "abcdef";  //[a][b][c][d][e][f][\0]
	//printf("%c\n", arr[3]);  //%c在C语言中代表字符型格式符
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i <len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("%s", arr);   //%s用来输出一个字符串

	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}

//总结：1、数组是使用下标来访问的，下标是从0开始的  2、数组的大小是可以通过计算得到的

