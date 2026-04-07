#include <cmath> // C 표준헤더 math.h에 대응한다.
#include <cstdio> // C 표준헤더 stdio.h에 대응한다.
#include <cstring> // C 표준헤더 string.h에 대응한다.
using namespace std; // C의 표준에 정의된 함수들 조차 이름공간 std 안에 선언이 되어 있어서 이 문장이 삽입되어야 한다.

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1); // 11 ~ 13: C언어의 표준 함수를 호출하고 있다.
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}

// C++ 사용 중에 C언어의 표준함수가 필요한 경우 c를 더하고 .h를 빼면 된다.
// #include <stdio.h> -> #include <cstdio>
// #include <stdlib.h> -> #include <cstdlib>
// #include <math.h> -> #include <cmath>
// #include <string.h> -> #include <cstring>
// 헤더파일의 확장자인 .h를 생략하고 앞에 c를 붙이면 C언어에 대응하는 C++의 헤더파일이 된다.

// C언어의 헤더파일을 이용해도 되지만, C++의 헤더를 기반으로 예제를 작성하는 것이 좋다.

// 모든 표준함수들이 이름공간 std 내에 선언되어있다.
// 그러나 대부분의 C++ 컴파일러가 using namespace std;를 생략해도 printf, scanf와 같은 기본함수의 호출은 허용을 한다.
// 하지만 허용하는 함수의 종류와 범위도 컴파일러마다 다르기 때문에, 이름공간에 대한 선언을 생략한 상태에서 표준함수를 호출하는 것은 바람직하지 않다.

// C++관점에서, 여전히 다음형태로 함수호출을 허용하는 이유는 '하위 버전과의 호완성(backwards compatibility)'을 제공하기 위함으로 볼 수 있다.
//#include <stdio.h>
//int main(void)
//{
//	printf("Hello world!");
//	return 0;
//}
// 그리고 C++ 표준 라이브러리가 제공하는 함수들과 C 표준 라이브러리가 제공하는 함수들이 완전히 일치하는 것도 아니다.
// 예를 들어 위 예제에서 호출한바 있는 abs 함수는 C표준에서 다음과 같이 선언되어 있다.
//int abs(int num);
// 반면, C++에서는 다음과 같이 오버로딩 되어있다.
//long abs(long num);
//float abs(float num);
//double abs(double num);
//long double abs(long double num);
// C++ 에서는 함수 오버로딩이 간으하기 때문에 자료형에 따라서 함수의 이름을 달리해서 정의하지 않고, 보다 사용하기 편하도록 함수를 오버로딩 해 놓은 것이다.
// 이렇듯 C++ 문법을 기반으로 개선된 형태로 라이브러리가 구성되어 있으므로, 가급적 C++의 표준헤더를 이용해서 함수를 호출하는 것이 좋다.