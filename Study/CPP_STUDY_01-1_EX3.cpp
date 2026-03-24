#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2; // 이렇듯 연이은 데이터의 입력을 명령할 수 있다.
	
	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++) // for문 안에서도 변수의 선언이 가능하다.
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}

// std::cin을 통해서 입력되는 데이터의 구분은 스페이스 바, 엔터, 탭과 같은 공백을 통해서 이뤄진다.
