#pragma once
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

#define Pi 3.14159
//void testRubbishDatum(void)
//{
//	int a;
//	cout << "δ��ʼ���ı���a�����ݣ�" << a << endl;
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

struct MyStudent
{
public:
	char name[12] = "Tom";	//ѧ������
	int age = 24;	// ѧ������
	bool sex = 1;	// 1-boy,0-girl
};
void testMyStudent(void)
{
	MyStudent stu01;
	MyStudent* stu02 = new MyStudent;
	cout << "name=" << stu01.name << ",age=" << stu01.age << ",sex=" << stu01.sex << endl;
	cout << "name=" << stu02->name << ",age=" << stu02->age << ",sex=" << stu02->sex << endl;
}