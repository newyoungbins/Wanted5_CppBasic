#include "File1.h"
#include "File2.h"
// #include "Person.h"
#include <iostream>


void Increment()
{
	static int count = 0;				// 함수 내부(지역변수)에 스태틱을 붙이면 함수가 죽을 때 스태틱변수는 죽지 않는다.
	++count;
	std::cout << "Count : " << count << "\n";
}


class Person
{
public:
	Person()
	{
		++personCount;
		std::cout << personCount << "번째 Person 객체 생성\n";
	}

	~Person()
	{
		--personCount;
	}

private:
	static int personCount;		// private에서 static을 쓰면 초기화 할 수 없다. (선언과 초기화를 따로 해야함)
};

// static 변수는 별도로 초기화 해야함.
int Person::personCount = 0;


int main()
{
	//FileOneFunction();
	//FileTwoFunction();

	//Increment();
	//Increment();
	//Increment();
	
	// 밑에는 테스트할떄 {} 안에 가두면 된다.
	//{
	//	Person p1;
	//	Person p2;
	//}

	Person p3;
}