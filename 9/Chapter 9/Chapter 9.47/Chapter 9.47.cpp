// Chapter 9.47.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	string s = "ab2c3d7R4E6";
	string num = "0123456789";
	unsigned pos = 0;

	while ((pos = s.find_first_of(num, pos)) != string::npos)
	{
		cout << "在第" << pos + 1 << "个位置找到数字" << s[pos] << endl;
		++pos;
	}

	pos = 0;
	while ((pos = s.find_first_not_of(num, pos)) != string::npos)
	{
		cout << "在第" << pos + 1 << "个位置找到字母" << s[pos] << endl;
		++pos;
	}

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

