#include<stdio.h>

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;	// 구조체의 멤버로 배열이 선언된 경우 구조체 변수를 인자로 전달하거나 반환 시
			// 배열까지도 통째로 복사가 이뤄진다.


void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? ");
	scanf("%s", man.name);

	printf("phone? ");
	scanf("%s", man.phoneNum);
	
	printf("age? ");
	scanf("%d", &man.age);

	return man;
}

int main4(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}