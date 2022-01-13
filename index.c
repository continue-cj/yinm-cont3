#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//操作符
//<< 左移操作符
//>> 右移操作符
//移动的是二进制位
//int main()
//{
//	int a = 16;
//	//int b = a >> 1;//b=8;右移有除二的效果
//	int b=a << 1;//b=32;左移有乘二的效果
//	printf("%d", b);
//	return 0;
//}


//位操作符(操作对象必须是整数)
//&  按位与
//|  按位或
//^  按位异或


//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int nim = 0;
//	int cont = 0;//计算
//	scanf("%d", &nim);
//	int i = 0;
//	//二进制的32个比特位 向左移动，按位与 1，如果等于1就符合条件。
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((nim >> i) & 1))
//			cont++;
//	}
//	printf("%d\n", cont);
//
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)x32版本 4 arr数组传过来的是元素首字母 接收因该指针(4)类型
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
// 
 
 
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;//a为0时为假 ++b不执行 后面的都不执行
//    //i = a++ || ++b || d++; //只要左边的为真，后面的都不执行
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//
//}


//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = 6;
//	int max = 0;
//	max = (a > b?a : b);
//	return 0;
//}


//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = 6;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		printf("%d ", *(arr[i]));
//	return 0;
//}


//练习

//实现函数(Init) 初始化数组为全0
//实现函数(printf)打印数组的每个元素
//实现(Reverse)函数完成数组元素的逆算
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//数组初始化为0
//	Printf(arr, sz);//打印
//	Reverse(arr, sz);//逆算
//	Printf(arr, sz);
//	return 0;
//}


//将数组A中的内容和数组B中的数组内容进行交换。(数组一样大)
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i  < sz; i++);
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}


//写一个函数求a的二进制(补码)表示中有几个1
//如果a=-1呢
//int get(unsigned int n)//可以在这添加一个无符号函数
//{
//	int comt = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			comt++;
//		}
//		n = n / 2;
//	}
//	return comt;
//}
////方法二
//int get(int n)
//{
//	int comt = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			comt++;
//		}
//	}
//	return comt;
//}
// 方法三 思路如下(按位与几次就输出几次)
//n=n&(n-1)
//n=13
//1101 n
//1100 n-1
//1100 n 这个是按位与后得到的
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//int get(int n)
//{
//	int comt = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		comt++;
//	}
//	return comt;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int comt =get(a);
//	printf("comt= %d\n", comt);
//	//system("pause");//system库函数-执行系统命令-pause(暂停) #include <stdlib.h>  放在逻辑的最后return 0 的前面
//	return 0;
//}

//求二进制中不同位的个数
//int get(int m, int y)
//{
//	int tmp = m ^ y;
//	int comt = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		comt++;
//	}
//	return comt;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int comt = get(a, b);
//	printf("comt= %d\n", comt);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void pring(int m)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	pring(m);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针，arr整型数组，
//void pring(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	pring(arr, sz);
//	return 0;
//}



//字符串逆序，编写一个reverse(char* string)(递归实现，不能使用c函数库中的字符串操作函数(不使用库函数))
//实现:将参数字符串中的字符反向排列
//int my_strlen(char* str)//求数组长度
//{
//	int comt = 0;
//	while (*str != '\0')
//	{
//		comt++;
//		str++;
//	}
//	return comt;
//}
//循环方式求解
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
// 递归方法
//void reverse(char* arr)
//{
//	char tmp = arr[0];//1把a放到一个临时变量里去
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//2.把f换到a原来的位置 f的位置len-1
//	arr[len - 1] = '\0';//3.然后f的位置放个斜杠零“\0” 有个条件如下
//	if (my_strlen(arr+1) >= 2)
//		reverse(arr + 1);//调用传回去 再bcde逆序
//	arr[len - 1] = tmp;//4再把a代替斜杠零
//}
//int main() 
//{
//	char arr[] ="abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//写一个递归函数DigitSun(n),输入一个非负整数，返回组成它的数字之和
//列如：调用DigitSun(1729)，则应该返回1+7+2+9，它的和是19，
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret= %d\n", ret);
//	return 0;



//编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	//算法 n^k=n*n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
////	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret= %lf\n", ret);
//	return 0;
//}



//调试案例
//#include <stdlib.h>
//int main()
//{
//	int i = 0;  
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//strcpy 字符串拷贝优化
//优化1 十分制 得6分
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//优化2 十分制 得7分
//void my_strcpy(char* dest, char* src)
//{
//while(*dest++ = *src++;)
//{
//	;//循环到'\0'的时候先会赋值给dest，然后判断0为假 终止循环
//}
//}
//优化3 十分制 得8分
#include <assert.h>
//void my_strcpy(char* dest, char* src) //优化4 9分 加了个const 不可别改变//void my_strcpy(char* dest, const char* src) 
//{
//	assert(dest != NULL);//断言 arr2如果传值过来得是null的时候会报错
//	assert(src != NULL);
//	while (*dest++ = *src++;)
//	{
//		;
//	}
//}
//优化5 十分制 得10分
//char* my_strcpy(char* dest, const char* src) 
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言 arr2如果传值过来得是null的时候会报错
//	assert(src != NULL);
// //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++;)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy 字符串拷贝
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	//my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现一个strlen函数 
int my_strlen(const char *src)
{
	int cont = 0;
	assert(src != NULL);
	while (*src != '\0')
	{
		cont++;
		src++;
	}
	return cont;
}
int main()
{
	char arr[] = "abcddef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}