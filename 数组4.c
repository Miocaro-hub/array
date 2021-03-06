#include<stdio.h>
//二维数组的创建和初始化

//创建
int arr[3][4];  //代表三行四列
char arr[3][5];
double arr[2][4];

int main()
{
	int arr[3][4];
	return 0;
}

//初始化
//数组初始化
int arr[3][4] = { 1,2,3,4 };
int arr[3][4] = { {1,2},{4,5} };
int arr[][4] = { {2,3},{4,5} };

int main()
{
	int arr[3][4] = { 1,2,3,4,5 }; //不完全初始化,1234在第一行，5在第二行，剩下的元素默认为0
	int arr[3][4] = { {1,2,3},{4,5} };  //这样可以在第一行放入123，第二行放入45，其他元素默认为0
	//二维数组的行数可以省略，但列数必须要有

	return 0;
}


//使用
//二维数组的使用也是通过下标的方式

int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	return 0;
}


int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]%p\n ", i,j,&arr[i][j]);
		}
	}
	return 0;
}
//通过打印的地址可知，二维数组也是连续存放的，本质上就是一维数组，每一行都是一个一维数组