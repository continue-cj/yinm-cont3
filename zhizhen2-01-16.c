#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
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

//�ṹ�� ��������
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�Ƚ��ַ���Ӧ����strcmp���� -<string.h>ͷ�ļ�
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
////����ʹ��qsort�⺯������ð������
//void cmp_int(const void* e1, const void* e2)
//{
//	//������������� �Ƚ�������ֵ
//	return *(int*)e1 - *(int*)e2;
//}
////������ ʵ��
//int cmp_float(const void* e1, const void* e2)
//{
//	//if (*(float*)e1 == *(float*)e2)
//	//	return 0;
//	//else if (*(float*)e1 > *(float*)e2)
//	//	return 1;
//	//else
//	//	return -1;
//	//����ֱ��ǿ����ת��
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
////�Լ�����һ��ð�ݺ��� -����ָ��
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
//	int i = 0; //����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˵Ķ���
//		int j = 0;
//		for (j = 0; j < sz -1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//���� ����һ����������
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
////ʹ���Լ����õ�ð�������� ʵ��һ��������������
//void test4()
//{
//	int arr[10] = { 9,2,4,6,5,7,3,8,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble����sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//���ﻹ��Ҫʹ������ cmp_int��������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	//����ð������
//	//int arr[10] = { 9,2,4,6,5,7,3,8,1,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//��������ð������
//	//test2(); //�����ͺ�������
//	//test3();
//	test4();
//
//	//ʹ�� qsort���������������������
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort 4�������ļ򵥵Ľ���
//	//��һ������: �������������Ԫ�ص�ַ
//	//�ڶ�������: �����������Ԫ�ظ���
//	//����������: �����������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ�����: �Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -�������ʹ�����Լ�ʵ��
//	//			 ����ָ�������������:���Ƚϵ�����Ԫ�صĵ�ַ
//
//	//bubble_sort(arr, sz); //��������ð������ĵ��ú��� ���ʼ��λ��
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	return 0;
//}

//qsort�⺯�����﷨ ͷ�ļ�<stdlib.h>
//void qsort(void* base, size_t nums, size_t width, int(*cmp)(const void* e1, const void* e2));

//void* �ķ�������
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;//�ᱨ�� int����ת����char�����
//
//	char ch = 'w';//��char���ͷŵ�void(��)* ָ����ȥ��û�������
//	void* p = &a;
//	//p = &ch;//�������
//	//*p=0;
//	//p++;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ��� + -;
//	
//	return 0;
//}



//ţ������ϰ
//�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд��������ַ�����ĸ��YES�����ǣ�NO��
//#include <ctype.h>
//int main()
//{
//	int cj = 0;
//	while ((cj = getchar()) !=EOF)
//	{
//		//isalpha�⺯�� -��ר�������ж�һ���ַ��ǲ�����ĸ�� -ͷ�ļ�<ctype.h>
//		// ����ĸ���ط�0��ֵ ������ĸ����0
//		//if ((cj >= 'a' && cj <= 'z') || (cj >= 'A' && cj <= 'Z'))
//		if(isalpha(cj)) //�⺯��
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//��������һ������ṹ��Ļس���"\n"
//	}
//	return 0;
//}

//����һ���ַ�����������һ���߳�Ϊ5��������ʥ���������ݷ�Χ����֤������ַ���һ�� char ���͵�ֵ
//int main()
//{
//	//����һ���ַ�
//	char cj = 0;
//	cj = getchar();
//
//	int i = 0;
//	//ÿѭ��һ�δ�ӡһ��
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0; //��ӡ�ո�
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

//����ַ��������ַ�������ʾ���ַ����ڴ�����ASCII����ʽ�洢��ת���ɶ�Ӧ�ַ���������ǡ�
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

//������У���һ��Ϊ������ݣ��ڶ���Ϊ�����·ݣ�������Ϊ�������ڡ����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0��
//ͨ��scanf������%m��ʽ���ƿ���ָ�������������������������������˿�Ƚ�ȡ�������ݣ�ͨ��printf������%0��ʽ���Ʒ��������ֵʱָ�����治ʹ�õĿ�λ���Զ���0��
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

//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ��㡣һ����������n��0 <= n < 31��
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);
	}
	return 0;
}