#include <stdio.h>
int main()
{
	int x,z;
	scanf("%d %d", &x, &z);
	if (x%z==0 || z%x==0)
	{printf("Multiples");}
	else {printf("No Multiples");}
	return 0;
}
