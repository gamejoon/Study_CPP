#include <iostream>
//using std::cin;
//using std::cout;
//using std::endl;
// 이후부터 cin, cout, endl은 std::cin, std::cout, std::endl을 의미한다는 선언

using namespace std;
// 이름공간 std에 선언된 것은 std라는 이름공간의 선언없이 접근하겠다는 선언

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}

// 너무 빈번한 using namespace의 선언은 이름의 충돌을 막기위한 이름공간의 선언을 의미없게 만든다.
// 따라서 제한적으로 사용할 필요가 있다.