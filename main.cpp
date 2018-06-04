#include <stdio.h>
#include <array>
struct a {
	const int b[2];
	// other bits follow

	// and here's the constructor
	a();
};

a::a() :
	b{ 2,3 }
{
	// other constructor work
}
class TestA {
public:
	const float b[2];
	// other bits follow

	// and here's the constructor
	TestA()
		:b{0.15f, 0.2f}
	{

	}
};
class TestAB {
public:
	const std::array<float,2> bs;
	// other bits follow

	// and here's the constructor
	TestAB()
		:bs{ 0.15f, 0.2f }
	{

	}
};
void main() {
	printf("test\n");
	{
		a a;
		printf("%d \n", a.b[0]);
		printf("%d \n", a.b[1]);
	}
	{
		TestA b;
		printf("%f \n", b.b[0]);
		printf("%f \n", b.b[1]);

	}
	{
		TestAB b;
		printf("%f \n", b.bs[0]);
		printf("%f \n", b.bs[1]);

	}
}