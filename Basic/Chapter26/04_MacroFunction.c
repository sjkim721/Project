#include <stdio.h>
#define DIFF_ABS(x, y)   ( (x)>(y) ? (x)-(y) : (y)-(x) )

int main4(void)
{
	printf("두 값의 차: %d \n", DIFF_ABS(5, 7));
	printf("두 값의 차: %d \n", DIFF_ABS(1.8, -1.4));

	return 0;
}