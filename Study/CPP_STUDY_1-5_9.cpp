#include <iostream>
using namespace std;

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

int main(void)
{
	AAA::BBB::CCC::num1 = 20; // 별칭이 선언되기 이전의 변수 num1과 num2의 접근을 보이고 있다.
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC 에 ABC라는 별칭을 붙여주고 있다.
	cout << ABC::num1 << endl; // 별칭의 선언 이후의 접근을 보이고 있다.
	cout << ABC::num2 << endl;
	return 0;
}