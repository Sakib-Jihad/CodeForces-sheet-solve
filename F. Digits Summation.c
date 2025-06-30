#include <stdio.h>
int main()
{
	long long int x, z;
	scanf("%lld %lld", &x, &z);
	printf("%lld", ((x%10)+(z%10)));
	return 0;
}
