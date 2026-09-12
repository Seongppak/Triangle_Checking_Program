// 함수 정의 하는 곳
#include<stdio.h>
#include "T_C_P.h"
int side_length(x, y, z)
{
	int check = 0;
	if (x > 0 && y > 0 && z > 0)
	{
		check =1;
		return check;
	}
	else
	{
		check = 0;
		return check;
	}
}