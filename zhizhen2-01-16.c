#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int	tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//结构体 进行排序
#include <string.h>
//struct Stu {
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//return ((struct Sut*)e1)->age -((struct Sut*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//比较字符串应该用strcmp函数 -<string.h>头文件
//	//return strcmp(((struct Sut*)e1)->name, ((struct Sut*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20}, {"lisi",32} , {"suhang",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
////整数使用qsort库函数进行冒泡排序
//void cmp_int(const void* e1, const void* e2)
//{
//	//这个函数是用来 比较两个数值
//	return *(int*)e1 - *(int*)e2;
//}
////浮点数 实现
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;
//	//else
//	//	return -1;
//	//或者直接强制性转换
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.2f ", f[i]);
//	}
//}
//
////自己设置一个冒泡函数 -函数指针
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0; //趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟的对象
//		int j = 0;
//		for (j = 0; j < sz -1-i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换 设置一个函数掉用
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
////使用自己设置的冒泡排序函数 实现一个整形数组排序
//void test4()
//{
//	int arr[10] = { 9,2,4,6,5,7,3,8,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble——sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//这里还是要使用上面 cmp_int函数调用
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	//整形冒泡排序
//	//int arr[10] = { 9,2,4,6,5,7,3,8,1,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//其他类型冒泡排序
//	//test2(); //浮点型函数调用
//	//test3();
//	test4();
//
//	//使用 qsort这个函数给其他进行排序
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort 4个参数的简单的解释
//	//第一个参数: 待排序数组的首元素地址
//	//第二个参数: 待排序数组的元素个数
//	//第三个参数: 待排序数组的每个元素的大小-单位是字节
//	//第四个参数: 是函数指针，比较两个元素的所用函数的地址 -这个函数使用者自己实现
//	//			 函数指针的两个参数是:带比较的两个元素的地址
//
//	//bubble_sort(arr, sz); //整数数组冒泡排序的调用函数 在最开始的位置
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}

//qsort库函数的语法 头文件<stdlib.h>
//void qsort(void* base, size_t nums, size_t width, int(*cmp)(const void* e1, const void* e2));

//void* 的分析解释
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;//会报错 int类型转换成char会出错
//
//	char ch = 'w';//把char类型放到void(空)* 指针里去是没有问题的
//	void* p = &a;
//	//p = &ch;//不会出错
//	//*p=0;
//	//p++;
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行 + -;
//	
//	return 0;
//}



//牛客网练习
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）输出该字符是字母（YES）或不是（NO）
//#include <ctype.h>
//int main()
//{
//	int cj = 0;
//	while ((cj = getchar()) !=EOF)
//	{
//		//isalpha库函数 -是专门用来判断一个字符是不是字母的 -头文件<ctype.h>
//		// 是字母返回非0的值 不是字母返回0
//		//if ((cj >= 'a' && cj <= 'z') || (cj >= 'A' && cj <= 'Z'))
//		if(isalpha(cj)) //库函数
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//处理上面一个输出结构后的回车键"\n"
//	}
//	return 0;
//}

//输入一个字符，用它构造一个边长为5的三角形圣诞树。数据范围：保证输入的字符是一个 char 类型的值
//int main()
//{
//	//输入一个字符
//	char cj = 0;
//	cj = getchar();
//
//	int i = 0;
//	//每循环一次打印一行
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0; //打印空格
//		for (j = 0; j <4-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", cj);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//输出字符常量或字符变量表示的字符在内存中以ASCII码形式存储。转换成对应字符并输出他们。
//int main()
//{
//	char arr[]={ 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	
//	return 0;
//}

//输出三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1位数前面补0。
//通过scanf函数的%m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d", &year, &month, &date);
//    printf("year=%4d\n", year);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", date);
//    return 0;
//}

//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。一行输入整数n（0 <= n < 31）
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}