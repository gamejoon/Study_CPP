#include <iostream>

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

namespace ABC = AAA::BBB::CCC;
// AAA::BBB::CCC에 대해 ABC라는 이름의 별칭 선언 후

int main()
{
	ABC::num1 = 10;
	ABC::num2 = 20;
	// 위와 같이 하나의 별칭으로 이름공간의 선언을 대신할 수 있다.

	std::cout << ABC::num1 << ' ' << ABC::num2 << std::endl;

	return 0;
}