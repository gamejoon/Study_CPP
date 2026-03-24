#include <iostream>

void SwapPointer(int*&, int*&);

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	std::cout << num1 << ' ' << num2 << std::endl;
	std::cout << *ptr1 << ' ' << *ptr2 << std::endl;

	return 0;
}

void SwapPointer(int* (&ptr1), int* (&ptr2))
{
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}