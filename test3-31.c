#define _CRT_SECURE_NO_WARNINGS 1

//初始C语言
//外国人的东西符号全是外国的

#include<stdio.h>

//std -- 标准
//i   -- input  输入
//o   -- output 输出


//标准的主函数写法
//main函数是程序的入口
//只能由一个main函数体，因此有且仅有一个

//int main()
////C语言代码中一定要有main函数
////main函数也叫主函
//{
//	printf("hehe\n");
//	//"---"双引号引用字符串
//	//printf-->库函数，用于打印
//	//使用printf需要引用头文件<stdio.h>
//	return 0;
//}

//数据类型

//char //字符数据类型
//short //短整型
//int //整形
//long //长整型
//long long //更长的整形
//float //单精度浮点数
//double //双精度浮点数

//类型大小

//int main()
//{
//	printf("%zu\n", sizeof(char));       // 1字节 --- 8  比特位
//	printf("%zu\n", sizeof(short));      // 2字节 --- 16 比特位
//	printf("%zu\n", sizeof(int));        // 4字节 --- 32 比特位
//	//C语言规定
//	//sizeof(long)>=sizeof(int)即可
//	printf("%zu\n", sizeof(long));       // 4字节
//	printf("%zu\n", sizeof(long long));  // 8字节
//	printf("%zu\n", sizeof(float));      // 4字节
//	printf("%d\n", sizeof(double));      // 8字节
//	return 0;
//}


//变量、常量

int a = 20;
//大括号外部定义的为全局变量

//int main()
//{
//	short age = 20;//年龄
//	int high = 180;//身高
//	float weight = 88.5;//体重
//
//	int b = 10;
//	//大括号内部定义的为局部变量
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//	int a = 100;//同一个括号内同一个变量只能定义一次
//	//全局变量和局部变量的名字可以相同
//	//优先使用局部变量
//	//当局部变量与全局变量冲突时，局部变量优先
//	return 0;
//}
//
//
////不建议将全局变量和局部变量的名字不一样



//使用代码计算两数的和

//int main()
//{
//	int a = 0;//等于0是初始化变量
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	//scanf输入函数
//	c = a + b;
//	printf("%d\n", c);
//	//printf输出函数
//	return 0;
//}


//变量的作用域
//1.局部变量

//2.全局变量

//声明来自外部的符号
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