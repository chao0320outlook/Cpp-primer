// 8.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


int main()
{

	string infile = "1.txt";
	vector <string> vec;
	ifstream in(infile);

	if (in)
	{
		string buf;
		while (getline(in, buf))
		{
			vec.push_back(buf);
		}
	}

    return 0;
}

