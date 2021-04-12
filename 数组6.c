#include<stdio.h>
//数组名的介绍

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);  //两者结果相同，说明数组传参时的地址和首元素地址相同，数组名就是数组元素的地址
	printf("%d\n", *arr);//1
	return 0;
 }

//数组名时数组首元素的地址（有两个例外）
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名) - 数组名表示整个数组,sizeof（数组名）计算的时整个数组的大小，单位是字节
	printf("%p\n", &arr);
	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址


	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]); 
	//printf("%d\n", *arr);
	return 0;
}




//ps:对于sizeof的讲解
//sizeof 一般形式为：sizeof（object），也可以sizeof var_char,不过大部分programer习惯用sizeof()
//对象可以是表达式或者数据类型名，当对象是表达式时，括号可省略
//sizeof是单目运算符，其运算符的含义是：求出对象在计算机内存中所占用的字节数
//例：整数型 
//short，int，long
//int是2个字节的，即16位，范围是－32768－32767，long是4个字节，范围是－2^32---2^32-1。
//所以输出结果：sizeof(short)=2,sizeof(int)=4.sizeof(long)=4以此类推