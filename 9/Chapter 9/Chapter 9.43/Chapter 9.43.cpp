// Chapter 9.43.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <ctime>
#include <string>
#include <iostream>
#include <iterator>

using namespace std;

void change(string & s, string & oldVal, string & newVal)
{
	auto _size = oldVal.size();
	auto st1 = s.begin(), st2 = newVal.begin(), st3 = newVal.end();
	for (st1; st1 <= (s.end() - oldVal.size() + 1); ++st1)
	{
		if ((s.substr(st1 - s.begin(), _size) == oldVal))
		{
			st1 = s.erase(st1, st1 + _size);
			st1 = s.insert(st1,st2,st3);
		}
	}
}

int main()
{
	string s = "adsafsa",_old="fs",_new="chao";
	change(s, _old, _new);
	cout << s << endl;

	int secs = 120;                                  //延时120s的程序
	clock_t delay = secs * CLOCKS_PER_SEC;           //总延时
	clock_t start = clock();                         //开始时间
	while (clock() - start < delay);                 //时间差大于总延时 跳出循环

    return 0;
}

