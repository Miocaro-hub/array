//一维数组在内存中的存储
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);  //格式控制符“%p”中的p是pointer(指针)的缩写
	}
	//由输出结果可知，随着数组下标的增长，元素的地址存在规律的递增：数组在内存中是连续存放的
	return 0;
}

