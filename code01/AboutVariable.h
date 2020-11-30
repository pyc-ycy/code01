#pragma once
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

//void testRubbishDatum(void)
//{
//	int a;
//	cout << "未初始化的变量a的内容：" << a << endl;
//}

void templateOfUsingDataType(void)
{
	int a;
	cin >> a;
	int b = 1456;
	printf("a=%d\n", a);
	cout.width(6);
	cout.fill('#');
	cout << setiosflags(ios::right);
	cout << b << endl;
}