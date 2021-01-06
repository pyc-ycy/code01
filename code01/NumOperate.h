#pragma once
#include <iostream>
#include <typeinfo>
using namespace std;

void demo01(void)
{
	int int_num = 6;
	float float_num = 4.25L;
	double double_num = 16.125;
	int t1 = int_num + float_num;
	int t2 = float_num - double_num;
	int t3 = float_num + double_num;
	int t4 = int_num * float_num;
	int t5 = float_num * double_num;
	int t6 = int_num / float_num;
	int t7 = float_num / int_num;
	int t8 = float_num / double_num;
	int t9 = double_num / float_num;
	cout << "int_num=" << int_num << endl
		<< "float_num" << float_num << endl
		<< "double_num=" << double_num << endl
		<< "int+float=" << t1 << endl
		<< "float-double=" << t2 << endl
		<< "float+double=" << t3 << endl
		<< "int*float=" << t4 << endl
		<< "float*double=" << t5 << endl
		<< "int/float=" << t6 << endl
		<< "float/int=" << t7 << endl
		<< "float/double=" << t8 << endl
		<< "double/float=" << t9 << endl;
}

void compare(void)
{
	int num1 = 145;
	int num2 = 65;
	int num3 = num1 - num2;
	int num4 = num2 - num1;
	cout << "num1=" << num1 << endl
		<< "num2=" << num2 << endl
		<< "num1-num2=" << num3 << endl
		<< "num2-num1=" << num4 << endl;
}
void compare01(void)
{
	int num1 = 145;
	int num2 = 65;
	float num3 = (1.0 * num1) / num2;
	float num4 = (1.0 * num2) / num1;
	cout << "num1=" << num1 << endl
		<< "num2=" << num2 << endl
		<< "num1/num2=" << num3 << endl
		<< "num2/num1=" << num4 << endl;
}