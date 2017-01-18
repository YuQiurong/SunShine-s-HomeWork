/*************************************************************************
    > File Name: HelloWorld.c
    > Author: ZHAOCHAO
    > Mail: 479680168@qq.com 
    > Created Time: Wed 18 Jan 2017 02:45:44 AM PST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int index = 0;
	
	for (index = 1; index < 10; index ++) {
		printf("[%2d]: Hello world.\n", index);
	}

	return 0;
}
