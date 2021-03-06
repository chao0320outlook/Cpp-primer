// Chapter 10.11.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void elimDups(vector<string> &s)
{
	cout << "排序前：";
	for (auto &i:s)
	{
		cout <<i<< " ";
	}
	cout << endl << "sort()排序后：";
	sort(s.begin(), s.end());//sort排序
	for (auto &i : s)
	{
		cout << i << " ";
	}
	cout << endl << "unique()排序后：";
	auto str = unique(s.begin(), s.end());//unique排序
	for (auto &i : s)
	{
		cout << i << " ";
	}
	cout << endl << "erase()操作后：";
	s.erase(str, s.end());//erase()操作
	for (auto &i : s)
	{
		cout << i << " ";
	}
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size()<s2.size();//s1的大小是否小于s2
}

int main(int argc, char**argv)
{ 
	string a[10] = { "because","I","Like","Like","C++","very","very","much","that's","why" };
	vector<string> s(a, a + 10);
	elimDups(s);
	stable_sort(s.begin(), s.end(), isShorter);//将自定义的函数传递进来,先长度、后字典序
	cout << endl << "stable_sort排序后：";
	for (auto &i : s)
	{
		cout << i << " ";
	}

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

	return 0;
}

