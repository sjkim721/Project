#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center;
};

int main7(void)
{
	struct point cen = { 2, 7 };
	double rad = 5.5;
	struct circle ring = { rad, &cen };		// 불러올 데이터가 구조체이기 때문에 메모리 효율을 위해 값이 아닌 주소를 선언함
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);

	return 0;
}