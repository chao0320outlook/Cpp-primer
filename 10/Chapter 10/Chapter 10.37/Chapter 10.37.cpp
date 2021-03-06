// Chapter 10.37.cpp: 定义控制台应用程序的入口点。
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
	ostream_iterator<int> os(cout, " ");
	vector<int> vec = { 2,1,3,4,2,5,3,6,4,3 };
	list<int>li1;
	auto iter1 = vec.rbegin();
	auto iter2 = vec.rend();
	copy(iter1 + 3, iter2 - 2, back_inserter(li1));
	copy(li1.cbegin(), li1.cend(), os);

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

