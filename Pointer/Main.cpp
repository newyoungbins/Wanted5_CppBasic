#include <iostream>

// 포인터란?
// 포인터는 메모리 주소를 저장하는 변수다.
// 일반 변수에 값이 저장된다면, 포인터 변수에는 다른 데이터가 위치한 메모리 주소를 저장할 수 있다.
// 아직 아무 주소도 가리키지 않는 포인터는 nullptr로 초기화하는 것이 좋다.

// 참조를 한다는 것은 주소를 복사 또는 사용한다는 의미.
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
	// 아무주소도 가리키지 않는 포인터를 nullptr로 초기화.
	void* ptr1 = nullptr;
	// void* 는 특정한 데이터 타입을 지정하지 않은 범용 포인터다.
	// 어떤 객체의 주소든 저장할 수 있지만, 가리키는 데이ㅓㅌ의 타입을 알 수 없으므로 그대로 역참조할 수는 없다.
	// 참고로 역참조란 포인터에 저장된 메모리 주소를 따라가, 그 주소에 저장된 실제 값에 접근하는 것을 의미한다.

	// 다른 변수의 메모리 주소를 얻을 때는 주소 연사자(&)를 사용한다.
	// 아래 코드에서 &var는 var가 저장된 메모리 주소를 반환하고, 그 주소가 ptr에 저장된다.
	// 중단점을 설정한 뒤 디버거의 메모리 창에서 ptr에 저장된 주소로 이동하면 해당 위치에 var의 값인 8이 저장된 것을 확인할 수 있다.
	int var = 8;
	int* ptr = &var;
	// 이때 &는 주소 연산자다. 변수 선언에서 사용하는 참조 타입의 &와 기호는 같지만 쓰임이 다르다.


	// 포인터에 저장된 주소로 이동해 해당 메모리의 값에 접근하는 것을 역참조(Dereference)라고 한다.
	// 역참조할 때는 연산자를 사용한다.
	// ptr = 10은 ptr 자체를 변경하는 것이 아니라, ptr이 가리키는 메모리에 10을 저장한다.
	// 따라서 같은 메모리를 의미하는 var의 값도 10으로 변경된다.
	*ptr = 10;
	

	// 포인터 변수도 자신이 가리키는 데이터에 맞는 타입을 가진다.
	// int*는 int가 저장된 주소를, char*는 char가 저장된 주소를 가리키는 포인터 타입니다.
	// 모든 포인터가 주소를 저장한다는 점은 같지만, 포인터의 타입은 다음과 같은 작업에 사용된다.
	// 1. 역참조한 데이터를 어떤 타입으로 해석할지 결정한다.
	// 2. 포인터 연산을 할 때 몇 바이트씩 이동할지 결정한다.
	// 3. 서로 맞지 않는 타입의 주소를 잘못 사용하는 일을 막아준다.
	int number = 8;
	int* numberPtr = &number;
	char grade = 'A';
	char* gradePtr = &grade;

	int* testPtr = new int;
	Release(testPtr);
	//delete testPtr;
	//testPtr = nullptr;

	// 동적 할당.
	// new[]를 사용하면 실행 중에 필요한 크기의 배열을 동적으로 할당할 수 있다.
	// 사용을 마친 배열은 delete[]로 해제해야한다.
	// 해제하지 않으면 더 이상 사용하지 않는 메모리가 계속 남는 메모리 누수(Memory Leak)가 발생할 수 있다.
	// 해제한 메모리에 다시 접근하면 안 된다.
	const int length = 100;
	int* buffer = new int[length];
	int** bufferPtr = &buffer;
	// int*** bufferPtrPtr = &bufferPtr;  // 잘 안 씀
	// *buffer = 0;
	memset(buffer, 0, sizeof(int) * length);




	delete[] buffer;

	std::cin.get();
}