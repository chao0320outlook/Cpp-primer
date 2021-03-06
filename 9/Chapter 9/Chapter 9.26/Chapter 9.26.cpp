// Chapter 9.26.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <iterator>

using namespace std;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vec(ia,ia+10);
	list <int> li(ia,ia+10);

	auto iter1 = vec.begin();
	auto iter2 = li.begin();

	while(iter1!=vec.end())
	{
		if ((*iter1) % 2)
			iter1=vec.erase(iter1);
		else
			++iter1;
	}

	while (iter2 != li.end())
	{
		if (!(*iter2) % 2)
			iter2=li.erase(iter2);
		else
			++iter2;
	}

	for (auto &a : vec)
	{
		cout << a << " ";
	}
	cout << endl;
	for (auto &a : li)
	{
		cout << a << " ";
	}

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;             //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

