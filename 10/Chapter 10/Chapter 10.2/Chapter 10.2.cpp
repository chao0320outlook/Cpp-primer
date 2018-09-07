// Chapter 10.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
#include <list>

using namespace std;


int main()
{
	list<string> li1;
	string str1 = "chao",str2;
	while (cin >> str2 &&str2!="q")
	{
		li1.push_back(str2);
	}
	auto i=count(li1.begin(), li1.end(), str1);
	cout << i << endl;

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环


    return 0;
}

