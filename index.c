#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//������
//<< ���Ʋ�����
//>> ���Ʋ�����
//�ƶ����Ƕ�����λ
//int main()
//{
//	int a = 16;
//	//int b = a >> 1;//b=8;�����г�����Ч��
//	int b=a << 1;//b=32;�����г˶���Ч��
//	printf("%d", b);
//	return 0;
//}


//λ������(�����������������)
//&  ��λ��
//|  ��λ��
//^  ��λ���


//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����
//int main()
//{
//	int nim = 0;
//	int cont = 0;//����
//	scanf("%d", &nim);
//	int i = 0;
//	//�����Ƶ�32������λ �����ƶ�����λ�� 1���������1�ͷ���������
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
//	printf("%d\n", sizeof(arr));//(2)x32�汾 4 arr���鴫��������Ԫ������ĸ �������ָ��(4)����
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
//    i = a++ && ++b && d++;//aΪ0ʱΪ�� ++b��ִ�� ����Ķ���ִ��
//    //i = a++ || ++b || d++; //ֻҪ��ߵ�Ϊ�棬����Ķ���ִ��
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


//��ϰ

//ʵ�ֺ���(Init) ��ʼ������Ϊȫ0
//ʵ�ֺ���(printf)��ӡ�����ÿ��Ԫ��
//ʵ��(Reverse)�����������Ԫ�ص�����
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
//	//Init(arr, sz);//�����ʼ��Ϊ0
//	Printf(arr, sz);//��ӡ
//	Reverse(arr, sz);//����
//	Printf(arr, sz);
//	return 0;
//}


//������A�е����ݺ�����B�е��������ݽ��н�����(����һ����)
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


//дһ��������a�Ķ�����(����)��ʾ���м���1
//���a=-1��
//int get(unsigned int n)//�����������һ���޷��ź���
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
////������
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
// ������ ˼·����(��λ�뼸�ξ��������)
//n=n&(n-1)
//n=13
//1101 n
//1100 n-1
//1100 n ����ǰ�λ���õ���
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
//	//system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ) #include <stdlib.h>  �����߼������return 0 ��ǰ��
//	return 0;
//}

//��������в�ͬλ�ĸ���
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


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void pring(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
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


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�룬arr�������飬
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



//�ַ������򣬱�дһ��reverse(char* string)(�ݹ�ʵ�֣�����ʹ��c�������е��ַ�����������(��ʹ�ÿ⺯��))
//ʵ��:�������ַ����е��ַ���������
//int my_strlen(char* str)//�����鳤��
//{
//	int comt = 0;
//	while (*str != '\0')
//	{
//		comt++;
//		str++;
//	}
//	return comt;
//}
//ѭ����ʽ���
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
// �ݹ鷽��
//void reverse(char* arr)
//{
//	char tmp = arr[0];//1��a�ŵ�һ����ʱ������ȥ
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//2.��f����aԭ����λ�� f��λ��len-1
//	arr[len - 1] = '\0';//3.Ȼ��f��λ�÷Ÿ�б���㡰\0�� �и���������
//	if (my_strlen(arr+1) >= 2)
//		reverse(arr + 1);//���ô���ȥ ��bcde����
//	arr[len - 1] = tmp;//4�ٰ�a����б����
//}
//int main() 
//{
//	char arr[] ="abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//дһ���ݹ麯��DigitSun(n),����һ���Ǹ����������������������֮��
//���磺����DigitSun(1729)����Ӧ�÷���1+7+2+9�����ĺ���19��
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



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//double Pow(int n, int k)
//{
//	//�㷨 n^k=n*n^(k-1)
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



//���԰���
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



//strcpy �ַ��������Ż�
//�Ż�1 ʮ���� ��6��
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
//�Ż�2 ʮ���� ��7��
//void my_strcpy(char* dest, char* src)
//{
//while(*dest++ = *src++;)
//{
//	;//ѭ����'\0'��ʱ���Ȼḳֵ��dest��Ȼ���ж�0Ϊ�� ��ֹѭ��
//}
//}
//�Ż�3 ʮ���� ��8��
#include <assert.h>
//void my_strcpy(char* dest, char* src) //�Ż�4 9�� ���˸�const ���ɱ�ı�//void my_strcpy(char* dest, const char* src) 
//{
//	assert(dest != NULL);//���� arr2�����ֵ��������null��ʱ��ᱨ��
//	assert(src != NULL);
//	while (*dest++ = *src++;)
//	{
//		;
//	}
//}
//�Ż�5 ʮ���� ��10��
//char* my_strcpy(char* dest, const char* src) 
//{
//	char* ret = dest;
//	assert(dest != NULL);//���� arr2�����ֵ��������null��ʱ��ᱨ��
//	assert(src != NULL);
// //��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++;)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy �ַ�������
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	//my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}


//ģ��ʵ��һ��strlen���� 
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