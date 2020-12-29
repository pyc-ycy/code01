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