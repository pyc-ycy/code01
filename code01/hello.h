#pragma once
#include <iostream>
using namespace std;
int hello(void)
{
	std::cout << "Hello, I am trying to print something into screen by a header file" << std::endl;

	return 12;
}

void formatIn(void)
{
	int num1 = 1024;
	long num2 = 655356;
	int num3 = -15;
	int a = 65;
	float num4 = 123.456;
	long num5 = 1024578964155;
	char str[24] = "Hello world\0";
	// 首先体验%d格式输出
	printf("num1=%d,num4=%d\n", num1, num4);
	//%ld
	printf("num2=%d,num5=%ld\n", num2, num5);
	// %md
	printf("num1=%5d, num2=%5d\n", num1, num2);
	// %u
	printf("num3=%d,num3=%u\n", num3, num3);
	//%f %lf
	printf("num4=%f,num4=%.1f\n", num4, num4);
	// %c
	printf("a=%d, a=%c\n");
	// %s
	printf("str=%s\n", str);
	//%o %x
	printf("num2=%o, num2=%x", num2, num2);
}

void formatOut(void)
{
	int num1;
	float num2;
	double num3;
	char* str[100];
	printf("请按照格式进行输入：\n");
	scanf("%d,%f,%lf,%s", &num1, &num2, &num3, &str);
	printf("num1=%d,num2=%f,num3=%lf,str=%s", num1, num2, num3, str);
}

void testCPPIO(void)
{
	// 如果在文件头部没有使用 using namespace std;
	// 则以下代码在使用 cout 或 cin 时请改为 std::cout 或 std::cin
	int t;
	cout << "请输入一个整数：";
	cin >> t;
	cout << "你所输入的整数为：" << t << endl;	// endl 表示换行
	int num;
	char s[50];
	cout << "请输入一个整数和字符串：";
	cin >> num >> s;
	cout << "你所输入的整数：" << num << ",你所输入的字符串：" << s << endl;
}