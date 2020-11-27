#pragma once
#include <iostream>

int hello(void)
{
	std::cout << "Hello, I am trying to print something into screen by a header file" << std::endl;

	return 12;
}

void formatIO(void)
{
	int num1 = 1024;
	long num2 = 655356;
	int num3 = -15;
	int a = 65;
	float num4 = 123.456;
	char str[24] = "Hello world\0";
	// 首先体验%d格式输出
	printf("num1=%d,num4=%d\n", num1, num4);
	//%ld
	printf("num2=%ld\n", num2);
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
	printf("num2=%o, num4=%x", num2, num4);
}