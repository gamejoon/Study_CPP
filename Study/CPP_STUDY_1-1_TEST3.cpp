#include <iostream>

int main()
{
	int num;
	
	std::cout << "숫자를 입력하세요: ";
	std::cin >> num;

	for (int i = 1; i <= 9; i++) {
		std::cout << num << " X " << i << " = " << num * i << std::endl;
	}

	return 0;
}

/*
#include <iostream>

int main(void)
{
	int num;
	std::cout << "구구단 정보 입력: ";
	std::cin >> num;

	for (int i = 1; i <= 9; i++)
		std::cout << num << 'x' << i << '=' << num * i << std::endl;
	return 0;
}
*/