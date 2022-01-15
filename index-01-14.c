#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//进阶指针学习
//int main()
//{
//    const char* p = "abcdef";//"abcdef"是一个常量字符串   const不可被修改
//    //*p = 'w';//这样去改一个常量是不可行的
//    printf("%c\n", *p);//输出a  char* p="abcdef"这样赋值是可行的
//    printf("%s\n", p);
//    return 0;
//}

//面试题
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");//输出
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//输出
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//小练习
//void main() {
//	int x = 010;//0开头默认为八进制的数 八进制数10转化为十进制等于8；
//	int y = 5;
//	printf("x= %d,y=%%d", x, y);// 8，%d
//}


//指针数组 是数组，用来存放指针的
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针--指针  指向数组的指针 -存放数组的地址
//int main()
//{
//	//int *p = NULL; //p是整形指针 -指向整型的指针 -存放整形的地址
//	//int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr - 数组地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//(*p)是一个指针 指向数组，数组的地址存起来
//	//上面的p就是数组指针
//	return 0;
//}


//参数是数组形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//参数是指针形式 
//void print2(int (*p)[5], int x, int y) //这个二维数组的首字母元素是一个一维数组 int (*p)[5]
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//如下面一维数组的输出等式 这里可幻化为这几种
//			//printf("%d ", *(*(p + i)+j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5); //arr- 数组名 -数组名就是首元素地址
//	print2(arr, 3, 5);
//	return 0;
//
//	//一个指针数组的输出等式
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]); //arr[i] == *(arr + i) == *(p + i)  == p[i]
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", p[i]);
//	//}
//}

//数组指针的理解
//int arr[5]; arr是一个5个元素的整形数组
//int *parr1[10]; parr1是一个数组，数组有10个元素，每个元素的类型是int* parr1是指针数组
//int (*parr2)[10];  parr2是一个指针 该指针指向了一个数组 数组有10个元素 每个元素的类型是int parr2是数组指针
//int (*(parr3[10])[5]);  parr3是一个数组 该数组有10个元素 每个元素是一个指针  该数组指针指向的数组有5个元素 每个元素的类型是int.



//函数指针 -是指向函数的指针 -存放函数地址的一个指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	//数组指针
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	arr;*/
//	
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//	return 0;
//}


//分析下面这段代码1
//void (*signal(int, void(*)(int)))(int);
////signal是一个函数声明
////signal函数的参数有2个 第一个是int 第二个是函数指针 该函数指针指向的函数的参数是int，返回值是void
////signal函数的返回类型也是一个函数指针 该函数指针指向的函数的参数是int 返回值是void
//
////把这段代码简化 给他重命名(typedef)
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
////原本重命名的语法是这样的 typedef unsigned(原名) int uint;但是typedef void(*)(int) pfun_t; 不允许这样写
//
////代码2
//(*(void(*)())0)(); //void(*)()是一个函数指针 (void(*)())0 把0强制转换
////把0强制类型转换成：void(*)()函数指针类型 -0就是一个函数的地址
////调用0地址处的该函数



//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	//int arr[5];
//	
//	//需要一个数组 这个数组可以存放4个函数的地址 -函数指针的数组
//	int (*pa)(int, int) = Add; //取地址Add
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数数组指针
//	//打印
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//		printf("%d\n",(*parr[i])(2, 3));
//	}
//	return 0;
//}

//练习
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	//1.写一个函数指针 pf，能够指向my_strcpy
//	char* (*pf)(char*,const char*) = my_strcpy;
//	//2.写一个函数指针数组pfArr 能够存放4个my_strcpy的函数地址
//	char* (*pfArr[4])(char*,const char*)={my_strcpy};
//	return 0;
//}


//案例 计算器
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int sor(int a, int b)
//{
//    return a ^ b;
//}
////回调函数
//void Calc(int (*pf)(int, int))
//{
//    int x=0;
//    int y = 0;
//    printf("请输入两个操作数 ");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//int menu()
//{
//    printf("***********************\n");
//    printf(" 1:add           2:sub \n");
//    printf(" 3:mul           4:div \n");
//    printf(" 5.sor           0:exit\n");
//    printf("***********************\n");
//}
//int main()
//{
//    //int x=0;
//    //int y = 0;
//    int input = 0;
//    //int ret = 0;
//    ////parr 是一个函数指针数组
//    //int (*parr[])(int, int) = { 0,add,sub,mul,div,sor };
//    //do {
//    //    menu();
//    //    printf("请选择->");
//    //    scanf("%d", &input);
//    //    if (input >= 1 && input <= 5)
//    //    {
//    //        printf("请输入两个操作数 ");
//    //        scanf("%d%d", &x, &y);
//    //        int ret = parr[input](x, y);
//    //        printf("%d\n", ret);
//    //    }
//    //    else if (input == 0)
//    //    {
//    //        printf("退出\n");
//    //    }
//    //    else
//    //    {
//    //        printf("选择错误\n");
//    //    }
//    //} while (input);
//方法2
 /*   do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("输入操作数：");
            scanf("%d%d", &x, &y);
            printf("%d\n", add(x, y));
            break;
        case 2:
            printf("输入操作数：");
            scanf("%d%d", &x, &y);
            printf("%d\n", sub(x, y));
            break;
        case 3:
            printf("输入操作数：");
            scanf("%d%d", &x, &y);
            printf("%d\n", mul(x,y));
            break;
        case 4:
            printf("输入操作数：");
            scanf("%d%d", &x, &y);
            printf("%d\n", div(x, y));
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);*/

    //方法3：使用回调函数来优化上面这种方式写的代码
 /*   do
    {
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            Calc(add);
            break;
        case 2:
            Calc(sub);
            break;
        case 3:
            Calc(mul);
            break;
        case 4:
            Calc(div);
            break;
        case 0:
            printf("退出程序\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input); 

    return 0;
}*/



//指向函数指针数组的指针
//int main()
//{
//    int arr[10] = { 0 };
//    int(*p)[10] = &arr;//取出数组的地址
//
//    int(*pf)(int, int);//函数指针
//    int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//    //pparr是一个指向[函数指针数组]的指针 
//    int(*(*pparr[4])(int, int)) = &pfArr;
//    //pparr 是一个数组指针，指针指向的数组有4个元素
//    //指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//
//    return 0;
//}

//牛客网 BC6题 小飞机
//int main()
//{
//    int i = 0;
//    int k = 0;
//    int y = 0;
//    //飞机头部
//    for (i = 0; i < 2; i++)
//    {
//       
//        for (y = 0; y <=4; y++)
//        {
//            printf(" ");
//        }
//        printf("**\n");
//    }
//    //飞机身体
//    for (i = 0; i < 2; i++)
//    {
//        for (y = 0; y < 12; y++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //飞机尾部
//    for (i = 0; i < 2; i++)
//    {
//        for (y = 0; y < 4; y++)
//        {
//            printf(" ");
//        }
//            printf("*");
//        for (k = 0; k < 2; k++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;
//}

//BC8 十六进制转十进制 描述 十六进制整数ABCDEF对应的十进制整数，所占域宽为15。
//int main()
//{
//    printf("%15d", 0xABCDEF);
//    return 0;
//}


//BC9 printf的返回值 输出“Hello world!”的程序，BoBo老师告诉他printf函数有返回值，你能帮他写个程序输出printf(“Hello world!”)的返回值吗？
//第一行为“Hello world!”第二行为printf(“Hello world!”)调用后的返回值。
//int main()
//{
//    /*int ret = printf("Hello World!");
//    printf("\n");
//    printf("%d\n", ret);*/
//    //简化
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}


//在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数)
int main()
{
    int a = 0;
    float b = 0.0;
    float c = 0.0;
    float d = 0.0;
    scanf("%d%f%f%f", &a, &b, &c, &d);
    if (a >= 1 && a <= 20000000)
    {
        printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
    }
    else
        printf("学号输入错误请重新输入");
    return 0;
}


    