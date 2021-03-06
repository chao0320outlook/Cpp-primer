// Chapter 9.20.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<list>
#include<deque>
#include<vector>
#include <ctime>

using namespace std;


int main()
{
	list<int> li1 = { 1,2,3,5,4,6,7,9,13 };
	deque<int> deq1,deq2;

	for (auto &a : li1)
	{
		if (a % 2)
			deq1.push_back(a);
		else
			deq2.push_back(a);
	}

	for (auto &a : deq1)
	{
		cout << a << " ";
	}

	cout << endl;

	for (auto &a : deq2)
	{
		cout << a << " ";
	}


	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;             //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环


    return 0;
}

