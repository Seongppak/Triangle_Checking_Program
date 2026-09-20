#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sign_check(int x, int y, int z);       // 부호 판별 함수
int check_triangle(int x, int y, int z);   // 삼각형 판별 함수

int main(void)
{
    int x, y, z;
    int found;

    printf("첫 번째 변의 길이를 입력해 주십시오: ");
    scanf("%d", &x);

    printf("두 번째 변의 길이를 입력해 주십시오: ");
    scanf("%d", &y);

    printf("세 번째 변의 길이를 입력해 주십시오: ");
    scanf("%d", &z);

    // 세 변이 모두 양수인지 확인
    found = sign_check(x, y, z);

    // 모두 양수인 경우에만 삼각형 판별
    if (found == 1)
    {
        found = check_triangle(x, y, z);
    }

    if (found == 1)
    {
        printf("삼각형입니다.\n");
    }
    else
    {
        printf("삼각형이 될 수 없습니다.\n");
    }

    return 0;
}

// 세 변의 길이가 모두 양수인지 판별
int sign_check(int x, int y, int z)
{
    if (x > 0 && y > 0 && z > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 순서도의 방법으로 삼각형 판별
int check_triangle(int x, int y, int z)
{
    int temp;

    // x가 y보다 작으면 x와 y를 교환
    // 교환 후에는 x가 x, y 중 더 큰 값이 됨
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    // x가 z보다 작으면 x와 z를 교환
    // 교환 후에는 x가 세 변 중 가장 긴 변이 됨
    if (x < z)
    {
        temp = x;
        x = z;
        z = temp;
    }

    // 가장 긴 변이 나머지 두 변의 합보다 작아야 함
    if (x < y + z)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}