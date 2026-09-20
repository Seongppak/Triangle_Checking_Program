/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sign_check(int x, int y, int z); // 부호 판별 함수 선언
int check_triangle(int x, int y, int z); // 삼각형 판별 함수 선언

int main()
{
	int x, y, z,found;
	printf("첫 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &x);
	printf("두 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &y);
	printf("세 번째 변의 길이를 입력해 주십시오.:");
	scanf("%d", &z);

	found = sign_check(x, y, z); // 부호 판별 함수 호출

	if (found == 1)
	{
		found = check_triangle(x, y, z); // 삼각형 판별 함수 호출
	}

	if (found == 0)
		printf("삼각형이 될 수 없습니다.");
	else
		printf("삼각형 입니다.");


	return 0;
}

int sign_check(int x,int  y, int z) //세 변 부호 판별 함수 정의
{
	if (x > 0 && y > 0 && z > 0)
	{
		return 1; 
	}
	else
	{
		return 0; // 삼각형이 될 수 없음으로 프로그램 종료
	}
}

int check_triangle(int x, int y, int z) // 삼각형 판별 함수 정의
{
	if (x < y + z  && y < x + z && z < y + x)
		return 1;
	else
		return 0;
}
*/