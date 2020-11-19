#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char abc;
	printf("Enter a alphapet:");
	scanf_s("%c",&abc);
	printf("%c", abc^32);
	system("pause");
	return 0;
}