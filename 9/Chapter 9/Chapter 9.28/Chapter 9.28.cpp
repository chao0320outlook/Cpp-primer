// Chapter 9.28.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <forward_list>
#include <string>

using namespace std;

forward_list<string>::iterator Find(forward_list<string> & lis , string a, string b)
{   
	bool flag = 0;
	auto iter1 = lis.begin();
	for (iter1; iter1 != lis.end(); iter1++)
	{
		if (*iter1 == a)
		{
			lis.insert_after(iter1, b);
			flag = 1; 
			return iter1;
		}
	}
	if(flag==1)
	   lis.insert_after(lis.end(), b);
	return lis.end();
}
int main()
{
	forward_list <string> l1 = {"adwad","dfasf","cd","dasdasds" };

	auto iter2 = Find(l1, "cd", "ab");
	cout << *iter2<<endl;
	for (auto &a : l1)
	{
		cout << a << " ";
	}

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

