// Chapter 9.5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

vector<int>::iterator findl(vector<int>::iterator a, vector<int>::iterator b, int c)
{
	for (a; a != b; ++a)
	{
		if (*a == c)
			return a;
	}
	return b;
}


int main()
{
	vector<int> vec { 4,5,2,8,9,6,7 };
	int find_member = 1;
	if (findl(vec.begin(), vec.end(), find_member)!=vec.end())
		cout << "We find it" << endl;
	else
		cout << "Sorry,there is no " << find_member << "in the range" << endl;

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

	return 0;
}