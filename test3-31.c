#define _CRT_SECURE_NO_WARNINGS 1

//��ʼC����
//����˵Ķ�������ȫ�������

#include<stdio.h>

//std -- ��׼
//i   -- input  ����
//o   -- output ���


//��׼��������д��
//main�����ǳ�������
//ֻ����һ��main�����壬������ҽ���һ��

//int main()
////C���Դ�����һ��Ҫ��main����
////main����Ҳ������
//{
//	printf("hehe\n");
//	//"---"˫���������ַ���
//	//printf-->�⺯�������ڴ�ӡ
//	//ʹ��printf��Ҫ����ͷ�ļ�<stdio.h>
//	return 0;
//}

//��������

//char //�ַ���������
//short //������
//int //����
//long //������
//long long //����������
//float //�����ȸ�����
//double //˫���ȸ�����

//���ʹ�С

//int main()
//{
//	printf("%zu\n", sizeof(char));       // 1�ֽ� --- 8  ����λ
//	printf("%zu\n", sizeof(short));      // 2�ֽ� --- 16 ����λ
//	printf("%zu\n", sizeof(int));        // 4�ֽ� --- 32 ����λ
//	//C���Թ涨
//	//sizeof(long)>=sizeof(int)����
//	printf("%zu\n", sizeof(long));       // 4�ֽ�
//	printf("%zu\n", sizeof(long long));  // 8�ֽ�
//	printf("%zu\n", sizeof(float));      // 4�ֽ�
//	printf("%d\n", sizeof(double));      // 8�ֽ�
//	return 0;
//}


//����������

int a = 20;
//�������ⲿ�����Ϊȫ�ֱ���

//int main()
//{
//	short age = 20;//����
//	int high = 180;//���
//	float weight = 88.5;//����
//
//	int b = 10;
//	//�������ڲ������Ϊ�ֲ�����
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	int a = 100;//ͬһ��������ͬһ������ֻ�ܶ���һ��
//	//ȫ�ֱ����;ֲ����������ֿ�����ͬ
//	//����ʹ�þֲ�����
//	//���ֲ�������ȫ�ֱ�����ͻʱ���ֲ���������
//	return 0;
//}
//
//
////�����齫ȫ�ֱ����;ֲ����������ֲ�һ��



//ʹ�ô�����������ĺ�

//int main()
//{
//	int a = 0;//����0�ǳ�ʼ������
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	//scanf���뺯��
//	c = a + b;
//	printf("%d\n", c);
//	//printf�������
//	return 0;
//}


//������������
//1.�ֲ�����

//2.ȫ�ֱ���

//���������ⲿ�ķ���
// extern int a;



//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	
//	printf("a=%d\n", a);
//	return 0;
//}