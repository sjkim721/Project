#include "stdiv.h"
extern Div IntDiv(int num1, int num2);

int main7(void)
{
	Div val = IntDiv(5, 2);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainder);

	return 0;
}