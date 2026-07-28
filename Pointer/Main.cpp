#include <iostream>


void Release(int* &t)
{
	if (t != nullptr)
	{
		delete t;
		t = nullptr;
	}
}

int main()
{
	int var = 8;
	int* ptr = &var;

	int* testPtr = new int;
	Release(testPtr);
	//delete testPtr;
	//testPtr = nullptr;

	// 동적 할당.
	const int length = 100;
	int* buffer = new int[length];
	int** bufferPtr = &buffer;
	// int*** bufferPtrPtr = &bufferPtr;  // 잘 안 씀
	// *buffer = 0;
	memset(buffer, 0, sizeof(int) * length);




	delete[] buffer;

	std::cin.get();
}