#include<stdio.h>
//数组
//1、一维数组的创建和初始化
//2、一维数组的使用
//3、一维数组在内存中的存储
//4、二维数组的创建和初始化
//5、二维数组的使用
//6、二位数组在内存中的存储
//7、数组作为函数参数
//8、数组的应用实例：三子棋、扫雷游戏

//数组是一组相同类型元素的集合，数组的创建方式：
//type_t arr_name[const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量的表达式，用来指定数组的大小

int main()
{
	//创建一个数组-存放整型-10个
	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
	char arr2[5] = { 'a','b' };//剩下的三个元素默认为0
	char arr3[5] = "ab";//第三个元素为\0，是人为的，虽然结果和arr2相等，但是方式不一样
	char arr4[] = "abcdef";//7个元素，有一个\0

	printf("%d\n", sizeof(arr4));
	//sizeof 计算arr4所占空间的大小，结果为7，包括\0
	printf("%d\n", strlen(arr4));
	//strlen 求字符串的长度，结果为6，\0停止，不计入

	char arr5[] = "abc";  //其中元素有:a b c \0
	char arr6[] = { 'a','b','c' };  //其中元素有:a b c
	printf("%d\n", sizeof(arr5));//4
	printf("%d\n", sizeof(arr6));//3
	printf("%d\n", strlen(arr5));//3
	printf("%d\n", strlen(arr6));//随机值,strlen遇到\0中止，但不知道何时遇到\0
	return 0;
}
