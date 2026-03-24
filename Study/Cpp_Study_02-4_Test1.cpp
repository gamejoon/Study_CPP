#include <iostream>

void IncreaseFunc(int&);
void SignFunc(int&);

int main()
{
	int num{ 0 };
	for (int i = 0; i < 10; i++) {
		IncreaseFunc(num);
		std::cout << num << std::endl;
	}

	SignFunc(num);
	std::cout << num << std::endl;

	return 0;
}

void IncreaseFunc(int& num)
{
	num++;
}

void SignFunc(int& num)
{
	num *= -1;
}