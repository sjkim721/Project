#include <stdio.h>

int main6(void)
{
	int sum = 0, num = 0;

	while (1)
	{
		sum = sum + num;
		if (sum > 5000)
			break;	// break문 실행!따라서 반복문 탈출
		num++;

	}

	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	
	return 0;

}