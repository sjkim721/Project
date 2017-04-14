#include <iostream>

using namespace std;

// 참조자가 참조하는 변수의 값이 반환된다.

int RefRetFuncTwo3(int &ref)
{
	ref++;
	return ref;
}

int main3(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo3(num1);
	// int &num2 = RefRetFuncTwo3(num1);		// 반환형이 값이므로 불가능

	num1 += 1;
	num2 += 100;
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}