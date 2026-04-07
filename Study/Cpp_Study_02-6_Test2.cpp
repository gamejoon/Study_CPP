#include <cstdio>
#include <ctime>
#include <cstdlib>

int main()
{
	int arr[5] = {};
	
	std::srand((unsigned int)std::time(NULL));
	for (int i = 0; i < 5; i++) {
		arr[i] = std::rand() % 100;
	}

	for (int i = 0; i < 5; i++) {
		std::printf("%d\n", arr[i]);
	}
}