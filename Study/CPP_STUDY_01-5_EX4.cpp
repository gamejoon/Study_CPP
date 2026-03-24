#include <iostream>

namespace Parent
{
	int num = 2;
	namespace SubOne
	{
		int num = 3;
	}

	namespace SubTwo
	{
		int num = 4;
	}
}

int main()
{
	std::cout << Parent::num << std::endl;
	std::cout << Parent::SubOne::num << std::endl;
	std::cout << Parent::SubTwo::num << std::endl;

	return 0;
}

// 이름공간은 중첩이 가능하다.
// 따라서 계층적 구조를 갖게끔 이름공간을 구성할 수 있다.

// <iostream>에 선언되어 있는 cout, cin 그리고 endl은 이름공간 std 안에 선언되어 있다.
// 이렇듯 이름충돌을 막기 위해서, C++ 표준에서 제공하는 다양한 요소들은 이름공간 std 안에 선언되어 있다.
