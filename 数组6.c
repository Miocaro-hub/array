#include<stdio.h>
//�������Ľ���

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);  //���߽����ͬ��˵�����鴫��ʱ�ĵ�ַ����Ԫ�ص�ַ��ͬ����������������Ԫ�صĵ�ַ
	printf("%d\n", *arr);//1
	return 0;
 }

//������ʱ������Ԫ�صĵ�ַ�����������⣩
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
	//1.sizeof(������) - ��������ʾ��������,sizeof���������������ʱ��������Ĵ�С����λ���ֽ�
	printf("%p\n", &arr);
	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ


	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]); 
	//printf("%d\n", *arr);
	return 0;
}




//ps:����sizeof�Ľ���
//sizeof һ����ʽΪ��sizeof��object����Ҳ����sizeof var_char,�����󲿷�programerϰ����sizeof()
//��������Ǳ��ʽ�����������������������Ǳ��ʽʱ�����ſ�ʡ��
//sizeof�ǵ�Ŀ���������������ĺ����ǣ���������ڼ�����ڴ�����ռ�õ��ֽ���
//���������� 
//short��int��long
//int��2���ֽڵģ���16λ����Χ�ǣ�32768��32767��long��4���ֽڣ���Χ�ǣ�2^32---2^32-1��
//������������sizeof(short)=2,sizeof(int)=4.sizeof(long)=4�Դ�����