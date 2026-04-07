#include <cstring>
#include <cstdio>

int main()
{
	char str1[15] = "Hello ";
	char str2[15] = "World!";
	
	std::printf("str1 : %s\n", str1);
	std::printf("str2 : %s\n", str2);

	std::printf("str1의 길이 : %d\n", std::strlen(str1));
	std::printf("str2의 길이 : %d\n", std::strlen(str2));

	std::strcat(str1, str2);
	
	std::printf("str1 : %s\n", str1);
	std::printf("str2 : %s\n", str2);

	char str3[15] = {};
	std::strcpy(str3, str1);

	std::printf("str1 : %s\n", str1);
	std::printf("str2 : %s\n", str2);
	std::printf("str3 : %s\n", str3);

	if (!std::strcmp(str1, str2)) {
		std::printf("str1과 str2는 같다\n");
	}
	else {
		std::printf("str1과 str2는 다르다\n");
	}

	if (!std::strcmp(str1, str3)) {
		std::printf("str1과 str3는 같다\n");
	}
	else {
		std::printf("str1과 str3는 다르다\n");
	}

	if (!std::strcmp(str2, str3)) {
		std::printf("str2과 str3는 같다\n");
	}
	else {
		std::printf("str2과 str3는 다르다\n");
	}
}