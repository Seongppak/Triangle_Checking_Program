#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"T_C_P.h"
int main()
{
	int x, y, z;
	printf("첫 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &x);
	printf("두 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &y);
	printf("세 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &z);
	
	side_length(x, y, z);
	int found = side_length(x,y,z);

	if (found == 1)
		printf("삼각형");
	else
		printf("삼각형 X");
	
	return 0;
}