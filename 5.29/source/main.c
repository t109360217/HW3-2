#include <stdio.h>
#include <stdlib.h>
 
int GCD(int n1, int n2);
int LCM(int n1, int n2);

int main()
{
	int n1, n2;
	printf("Enter number 1 :");
	scanf_s ("%d",&n1);
	printf("Enter number 2 :");
	scanf_s("%d", &n2);
	printf("Least Common Multiple is %d" , LCM(n1, n2));
	system("pause");
	return 0;
}

int GCD(int n1, int n2)
{
	if (n2) while ((n1 %= n2) && (n2 %= n1));
	return n1 + n2;
}

int LCM(int n1, int n2)
{
	return n1 * n2 / GCD(n1, n2);
}