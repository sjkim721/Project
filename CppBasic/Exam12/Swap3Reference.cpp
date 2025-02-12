#include<iostream>

using namespace std;

// call-by-reference

void SwapByValue2(int &ref1, int &ref2)	// 포인터 대신 참조자를 사용한 형태
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main3(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByValue2(val1, val2);	// val1과 val2에 저장된 값이 바뀌기를 기대함.

	cout << "val1: " << val1 << endl;	// 20 출력
	cout << "val2: " << val2 << endl;	// 10 출력

	return 0;
}

/*
C++에서는 함수 외부에 선언된 변수의 접근방법 두 가지
- 주소 값을 이용한 Call-by-reference
- 참조자를 이용한 Call-by-reference
*/