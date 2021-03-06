// Chapter9.18.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <ctime>


using namespace std;


int main()
{
	string str;
	deque<string> deq;

	while (cin >> str &&str!="q")
	{
		deq.push_back(str);
	}

	deque<string>::iterator it1 = deq.begin();

	for (it1; it1 != deq.end(); it1++)
	{
		cout << *it1 << endl;
	}

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

