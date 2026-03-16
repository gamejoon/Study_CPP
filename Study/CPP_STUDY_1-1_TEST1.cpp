#include <iostream>

int main()
{
	int res{ 0 }, temp;

	for (int i = 1; i <= 5; i++) {
		std::cout << i << "번째 정수 입력: ";
		std::cin >> temp;
		res += temp;
	}

	std::cout << "합계: " << res << std::endl;

	return 0;
}
/* 답안지
#include <iostream>

int main(void)
{
	int num = 0;
	int input;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> input;
		num += input;
	}

	std::cout << "합계: " << num << std::endl;

	return 0;
}
*/