#include <iostream>

using namespace std;

class Food1
{
public:

	void printf1()
	{
		cout << "부모클래스(기반클래스) 프린트 : " << std::endl;

	}
};
class Fruit1 : public Food1
{
public:
	void printf2()
	{
		cout << "자식클래스(파생클래스) 프린트 : " << std::endl;
	}

};

int main1()
{
	Fruit1 myFruit;

	// 부모 클래스의 멤버 함수 호출
	myFruit.printf1();

	// 본인 클래스의 멤버 함수 호출
	myFruit.printf2();

	return 0;
}