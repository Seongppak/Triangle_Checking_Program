/* 함수 정의 하는 곳
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
		printf("삼각형이 될 수 없습니다.");
		exit();
	}
}
void check_triangle(x, y, z)
{
	if (x > y && x > z) // x가 가장 클 때
	{
		if (x < y + z)
			printf("x의 길이가 가장 큰 삼각형입니다.");
		else
			printf("삼각형이 될 수 없습니다.");
	}
	if (y > x && y > z) // y가 가장 클 때
	{
		if (y < x + z)
			printf("y의 길이가 가장 큰 삼각형입니다.");
		else
			printf("삼각형이 될 수 없습니다.");
	}
	if (z > y && z > x) // z가 가장 클 때
	{
		if (z < y + x)
			printf("z의 길이가 가장 큰 삼각형입니다.");
		else
			printf("삼각형이 될 수 없습니다.");
	}
} */