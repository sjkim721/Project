#include <stdio.h>

int main3(void)
{
	int num = 15;	// 00000000 00000000 00000000 00001111
	
	int result1 = num << 1;	// num�� ��Ʈ ���� �������� 1ĭ�� �̵�
	int result2 = num << 2;	// num�� ��Ʈ ���� �������� 2ĭ�� �̵�
	int result3 = num << 3;	// num�� ��Ʈ ���� �������� 3ĭ�� �̵�

	printf("1ĭ �̵� ���: %d \n", result1);
	printf("2ĭ �̵� ���: %d \n", result2);
	printf("3ĭ �̵� ���: %d \n", result3);
	
	return 0;
}