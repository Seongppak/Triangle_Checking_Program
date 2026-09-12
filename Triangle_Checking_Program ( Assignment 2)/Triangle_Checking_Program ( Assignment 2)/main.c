#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int side_length(x, y, z); // 부호 판별 함수 선언
void check_triangle(x, y, z); // 삼각형 판별 함수 선언

int main()
{
	int x, y, z;
	printf("첫 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &x);
	printf("두 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &y);
	printf("세 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &z);
	
	side_length(x, y, z); // 부호 판별 함수 호출
	
	check_triangle(x, y, z); // 삼각형 판별 함수 호출
	
	return 0;
}

int side_length(x, y, z) //세 변 부호 판별 함수 정의
{
	if (x > 0 && y > 0 && z > 0)
	{
		return 1;
	}
	else
	{
		printf("삼각형이 될 수 없습니다.");
		exit(); // 삼각형이 될 수 없음으로 프로그램 종료
	}
}

void check_triangle(x, y, z) // 삼각형 판별 함수 정의
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
}