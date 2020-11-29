#pragma once
#include <iostream>
#include<iomanip>
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
	// ��������%d��ʽ���
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
	printf("�밴�ո�ʽ�������룺\n");
	scanf("%d,%f,%lf,%s", &num1, &num2, &num3, &str);
	printf("num1=%d,num2=%f,num3=%lf,str=%s", num1, num2, num3, str);
}

void testCPPIO(void)
{
	// ������ļ�ͷ��û��ʹ�� using namespace std;
	// �����´�����ʹ�� cout �� cin ʱ���Ϊ std::cout �� std::cin
	int t;
	cout << "������һ��������";
	cin >> t;
	cout << "�������������Ϊ��" << t << endl;	// endl ��ʾ����
	int num;
	char s[50];
	cout << "������һ���������ַ�����";
	cin >> num >> s;
	cout << "���������������" << num << ",����������ַ�����" << s << endl;
}

void CPPFormatIO(void)
{
	// ʹ��֮ǰ�ȵ��� iomanip ���ļ�
	cout << setiosflags(ios::left | ios::showpoint);  // ������룬��һ��ʵ����ʽ��ʾ
	cout.precision(5);       // ���ó�С����������λ��Ч����
	cout << 123.456789 << endl;
	cout.width(10);          // ������ʾ���10
	cout.fill('*');          // ����ʾ����հ״���*���
	cout << resetiosflags(ios::left);  // ���״̬�����
	cout << setiosflags(ios::right);   // �����Ҷ���
	cout << 123.456789 << endl;
	cout << setiosflags(ios::left | ios::fixed);    // ������룬�Թ̶�С��λ��ʾ
	cout.precision(3);    // ����ʵ����ʾ��λС��
	cout << 999.123456 << endl;
	cout << resetiosflags(ios::left | ios::fixed);  //���״̬�����Ͷ����ʽ
	cout << setiosflags(ios::left | ios::scientific);    //��������룬�Կ�ѧ��������ʾ
	cout.precision(3);   //���ñ�����λС��
	cout << 123.45678 << endl;
}