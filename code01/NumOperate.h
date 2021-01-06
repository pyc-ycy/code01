#pragma once
#include <iostream>
#include <typeinfo>
#include <math.h>
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

void sloveECFC(void)
{
	double A, B, C;
	double x1, x2;
	cout << "请依次（高次在前，低次在后）输入二次方程的系数：";
	cin >> A >> B >> C;
	double delta = B * B - (4 * A * C);
	if (delta > 0)
	{
		x1 = ((-1 * B) + sqrtf(delta)) / (2 * A);
		x2 = ((-1 * B) - sqrtf(delta)) / (2 * A);
		cout << "x1=" << x1 << ", x2=" << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = x2 = (-1 * B) / (2 * A);
		cout << "x1=x2=" << x1 << endl;
	}
	else
	{
		/*cout << "方程无解！" << endl;*/
		cout << "方程的解为虚数解" << endl;
		double t = (B / 2) / sqrtf(A);
		double t2 = C - (t * t);
		double t3 = sqrtf(t2);
		cout << "x1=" << (-t) / sqrtf(A) << "+" << t3 / sqrtf(A) << "i" << endl;
		cout << "x2=" << (-t) / sqrtf(A) << "-" << t3 / sqrtf(A) << "i" << endl;
	}
}