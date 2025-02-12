#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr)		// 원점 대칭
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main5(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans(&pos);		// pos의 값을 원점 대칭이동 시킨다.
	ShowPosition(pos);
	OrgSymTrans(&pos);		// pos의 값을 원점 대칭이동 시킨다.
	ShowPosition(pos);

	return 0;
}