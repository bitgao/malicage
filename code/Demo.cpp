// Demo1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int test()
{
	int input;
	cin >> input;
	if (input > 0)
		printf("%d is bigger than 0\n",input);
	else if (input < 0)
		printf("%d is less than 0\n", input);
	else
		printf("input is 0\n");
	return input;
}

int main()
{
	printf("Hello! Please input:\n");
	test();
    return 0;
}

