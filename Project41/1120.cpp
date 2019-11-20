#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char star = '*';
	char* pstar = &star;

	printf("주소: %d 코드값: %d 문자: %c\n", &pstar, *pstar, *pstar);

}
