#include <iostream>
using namespace std;

int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref; // 참조자를 반환하지만 반환형이 기본자료형 int이기 때문에 참조자가 참조하는 변수의 값이 반환된다.
}				// 다시 한번 말하지만, 변수에 저장된 값이 반환된다.

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1);

	num1 += 1; // num1과 num2가 다른 변수임을 확인하기 위해서 서로 다른 연산을 진행하였다.
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	//int test1 = 10;
	//int test2 = 5;
	//const int& tRef1 = test1;
	//test1++;
	//
	//cout << test1 << ' ' << tRef1 << endl;
	return 0;
}

// const를 이용해서 변수를 상수화 했을 경우, 참조자도 똑같이 const를 사용해야 한다.
// ex)
// const int num = 10;
// int& ref = num; (x)
// const int& ref = num; (o);

// const 참조자는 상수도 참조가 가능하다.
// ex) const int& ref = 50;
// const 선언에 의해서 만들어진 변수를 가리켜 '상수화된 변수'라 한다.
// 본래 상수가 아니라, 변수를 상수화시킨 것으로 정의하고 있기 때문이다.
// 
// int num = 20 + 30;
// 여기서 20, 30과 같은 프로그램 상에서 표현되는 숫자를 가리켜 '리터럴(literal)' 또는 '리터럴 상수(literal constant)'라고 한다.
// 이들은 다음과 같은 특징을 갖는다.
// - 임시적으로 존재하는 값이다.
// - 다음 행으로 넘어가면 존재하지 않는 상수다.
// 연산을 위해서 일시적으로 메모리 공간에 저장되지만 재참조가 불가능하다.
// 다음 행으로 넘어가면서 소멸되는 상수라고 봐도 된다.
//
// const int& ref = 30;
// 이는 숫자 30이 메모리 공간에 남아있을 때에나 성립이 가능한 문장이다.
// 그래서 C++에서는 위의 문장이 성립이 가능하도록 const 참조자를 이용해서 상수를 참조할 때 '임시 변수'라는 것을 만들어서 이 장소에 상수 30을 젖아하고선 참조자가 이를 참조하게끔 한다.
// 임시로 생성한 변수를 상수화하여 참조자가 참조하게끔 하는 구조이니, 결과적으로는 상수화된 변수를 참조하는 형태가 된다.
// 
//int adder(const int& num1, const int& num2)
//{
//	return num1 + num2;
//}
// 위와 같이 정의된 함수에 인자의 전달을 목적으로 변수를 선언하는 것은 번거로운 일이기 때문에 const 참조자의 상수참조를 허용함으로써, 상수를 인자로 위의 함수를 호출이 가능하게 되었다.
//cout << Adder(3, 4) << endl;