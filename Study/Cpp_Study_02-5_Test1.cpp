#include <iostream>

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2);

int main()
{
	Point* ptr1 = new Point;
	Point* ptr2 = new Point;

	ptr1->xpos = 1;
	ptr1->ypos = 2;
	ptr2->xpos = 3;
	ptr2->ypos = 4;

	Point& ref = PntAdder(*ptr1, *ptr2);

	std::cout << "xpos = " << ref.xpos << std::endl;
	std::cout << "ypos = " << ref.ypos << std::endl;

	delete ptr1;
	delete ptr2;
	delete& ref; // 정답보고 추가, 참조자를 통해 PntAdder에서 할당된 메모리를 해제시킴
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* result = new Point;
	Point& ref = *result;
	ref.xpos = p1.xpos + p2.xpos;
	ref.ypos = p1.ypos + p2.ypos;

	return ref;
}