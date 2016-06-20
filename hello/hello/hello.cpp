// hello.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int sum=0;
	int i;
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}

