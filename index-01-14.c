#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ָ��ѧϰ
//int main()
//{
//    const char* p = "abcdef";//"abcdef"��һ�������ַ���   const���ɱ��޸�
//    //*p = 'w';//����ȥ��һ�������ǲ����е�
//    printf("%c\n", *p);//���a  char* p="abcdef"������ֵ�ǿ��е�
//    printf("%s\n", p);
//    return 0;
//}

//������
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");//���
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//���
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}

//С��ϰ
//void main() {
//	int x = 010;//0��ͷĬ��Ϊ�˽��Ƶ��� �˽�����10ת��Ϊʮ���Ƶ���8��
//	int y = 5;
//	printf("x= %d,y=%%d", x, y);// 8��%d
//}


//ָ������ �����飬�������ָ���
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


//����ָ��--ָ��  ָ�������ָ�� -�������ĵ�ַ
//int main()
//{
//	//int *p = NULL; //p������ָ�� -ָ�����͵�ָ�� -������εĵ�ַ
//	//int arr[10] = { 0 };
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr - �����ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//(*p)��һ��ָ�� ָ�����飬����ĵ�ַ������
//	//�����p��������ָ��
//	return 0;
//}


//������������ʽ
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
//������ָ����ʽ 
//void print2(int (*p)[5], int x, int y) //�����ά���������ĸԪ����һ��һά���� int (*p)[5]
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//������һά����������ʽ ����ɻû�Ϊ�⼸��
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
//	print1(arr, 3, 5); //arr- ������ -������������Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	return 0;
//
//	//һ��ָ������������ʽ
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

//����ָ������
//int arr[5]; arr��һ��5��Ԫ�ص���������
//int *parr1[10]; parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int* parr1��ָ������
//int (*parr2)[10];  parr2��һ��ָ�� ��ָ��ָ����һ������ ������10��Ԫ�� ÿ��Ԫ�ص�������int parr2������ָ��
//int (*(parr3[10])[5]);  parr3��һ������ ��������10��Ԫ�� ÿ��Ԫ����һ��ָ��  ������ָ��ָ���������5��Ԫ�� ÿ��Ԫ�ص�������int.



//����ָ�� -��ָ������ָ�� -��ź�����ַ��һ��ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	//����ָ��
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	arr;*/
//	
//
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//	return 0;
//}


//����������δ���1
//void (*signal(int, void(*)(int)))(int);
////signal��һ����������
////signal�����Ĳ�����2�� ��һ����int �ڶ����Ǻ���ָ�� �ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
////signal�����ķ�������Ҳ��һ������ָ�� �ú���ָ��ָ��ĺ����Ĳ�����int ����ֵ��void
//
////����δ���� ����������(typedef)
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
////ԭ�����������﷨�������� typedef unsigned(ԭ��) int uint;����typedef void(*)(int) pfun_t; ����������д
//
////����2
//(*(void(*)())0)(); //void(*)()��һ������ָ�� (void(*)())0 ��0ǿ��ת��
////��0ǿ������ת���ɣ�void(*)()����ָ������ -0����һ�������ĵ�ַ
////����0��ַ���ĸú���



//����ָ������
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
//	//ָ������
//	//int arr[5];
//	
//	//��Ҫһ������ ���������Դ��4�������ĵ�ַ -����ָ�������
//	int (*pa)(int, int) = Add; //ȡ��ַAdd
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//��������ָ��
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//		printf("%d\n",(*parr[i])(2, 3));
//	}
//	return 0;
//}

//��ϰ
//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	//1.дһ������ָ�� pf���ܹ�ָ��my_strcpy
//	char* (*pf)(char*,const char*) = my_strcpy;
//	//2.дһ������ָ������pfArr �ܹ����4��my_strcpy�ĺ�����ַ
//	char* (*pfArr[4])(char*,const char*)={my_strcpy};
//	return 0;
//}


//���� ������
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
////�ص�����
//void Calc(int (*pf)(int, int))
//{
//    int x=0;
//    int y = 0;
//    printf("���������������� ");
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
//    ////parr ��һ������ָ������
//    //int (*parr[])(int, int) = { 0,add,sub,mul,div,sor };
//    //do {
//    //    menu();
//    //    printf("��ѡ��->");
//    //    scanf("%d", &input);
//    //    if (input >= 1 && input <= 5)
//    //    {
//    //        printf("���������������� ");
//    //        scanf("%d%d", &x, &y);
//    //        int ret = parr[input](x, y);
//    //        printf("%d\n", ret);
//    //    }
//    //    else if (input == 0)
//    //    {
//    //        printf("�˳�\n");
//    //    }
//    //    else
//    //    {
//    //        printf("ѡ�����\n");
//    //    }
//    //} while (input);
//����2
 /*   do
    {
        menu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("�����������");
            scanf("%d%d", &x, &y);
            printf("%d\n", add(x, y));
            break;
        case 2:
            printf("�����������");
            scanf("%d%d", &x, &y);
            printf("%d\n", sub(x, y));
            break;
        case 3:
            printf("�����������");
            scanf("%d%d", &x, &y);
            printf("%d\n", mul(x,y));
            break;
        case 4:
            printf("�����������");
            scanf("%d%d", &x, &y);
            printf("%d\n", div(x, y));
            break;
        case 0:
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);*/

    //����3��ʹ�ûص��������Ż��������ַ�ʽд�Ĵ���
 /*   do
    {
        menu();
        printf("��ѡ��");
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
            printf("�˳�����\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input); 

    return 0;
}*/



//ָ����ָ�������ָ��
int main()
{
    int arr[10] = { 0 };
    int(*p)[10] = &arr;//ȡ������ĵ�ַ

    int(*pf)(int, int);//����ָ��
    int(*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
    //pparr��һ��ָ��[����ָ������]��ָ�� 
    int(*(*pparr[4])(int, int)) = &pfArr;
    //pparr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
    //ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)

    return 0;
}