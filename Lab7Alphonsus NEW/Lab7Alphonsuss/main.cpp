#include "MyMatrix3.h"
#include <iostream>
#include "MyVector3.h"

int main()
{
	MyMatrix3 testMatrix1{};
	MyMatrix3 testMatrix2{};

	double Pi = 3.141592653589;
	int col = 0;
	int row = 0;

	testMatrix1 = { 3.0, 2.0, 4.0,
					5.0, 2.0, 9.0,
		   		    6.0, 7.0, 1.0 };
	testMatrix2 = { 4.0, 8.0, 2.0,
					7.0, 5.0, 3.0,
					3.0, 1.0, 9.0 };

	std::cout << "    operator== " << std::endl;
	if (testMatrix1 == testMatrix2)
	{
		std::cout << " true " << std::endl;
	}
	else
	{
		std::cout << " false " << std::endl;
	}
	std::cout << " answer should be true " << std::endl;
	std::cout << "---------------------------------------------------------";

	system("pause");
	return 0;
}
