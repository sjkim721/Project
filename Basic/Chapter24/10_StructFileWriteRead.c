#include <stdio.h>

typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;

int main10(void)
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	/*** file write ***/

	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);	// 바이너리 모드로 통째로 구조체 변수를 저장
	fclose(fp);

	/*** file read ***/

	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);		// 바이너리 모드로 통째로 구조체 변수를 복원
	printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);

	return 0;
}