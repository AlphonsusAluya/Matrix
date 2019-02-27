#include "MyMatrix3.h"
#include <iostream>
#include "MyVector3.h"

int main()
{
	MyMatrix3 testMatrix1{};
	MyMatrix3 testMatrix2{};
	MyMatrix3 testMatrix3{};

	MyVector3 testVector1{};
	MyVector3 testVector2{};

	std::string answer;
	double Pi = 3.141592653589;
	double scalar = 2.0;
	int col = 0;
	int row = 0;

	testMatrix1 = { 3.0,  2.0,  4.0,
					5.0,  2.0,  9.0,
		   		    6.0,  7.0,  1.0 };
	testMatrix2 = { 4.0,  8.0,  2.0,
					7.0,  5.0,  3.0,
					3.0,  1.0,  9.0 };

	testMatrix2 = { 3.0,  2.0,  4.0,
					5.0,  2.0,  9.0,
					6.0,  7.0,  1.0 };

	testVector1 = { 5.0, 2.0, 4.0};
	testVector2 = { 9.0, 6.0, 3.0 };

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

	testMatrix2 = { 4.0, 8.0, 2.0,
					7.0, 5.0, 3.0,
					3.0, 1.0, 9.0 };
	std::cout << "\n" << "    operator!= " << std::endl;
	if (testMatrix1 != testMatrix2)
	{
		std::cout << " true " << std::endl;
	}
	else
	{
		std::cout << " false " << std::endl;
	}
	std::cout << " answer should be true " << std::endl;
	std::cout << "---------------------------------------------------------";

	testMatrix3 = testMatrix1 + testMatrix2;
	std::cout << "\n" << "   + operator   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << "\n" << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1 - testMatrix2;
	std::cout << "\n" << "   - operator   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1 * testMatrix2;
	std::cout << "\n" << "   * operator   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1 * testMatrix1;
	std::cout << "\n" << "   * operator   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";


	testVector2 = testMatrix1 * testVector1;
	std::cout << "\n" << "  vector * operator   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1 * scalar;
	std::cout << "\n" << "   scalar * operator   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1.transpose();
	std::cout << "\n" << "   transpose   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	double determ = 0;

	determ = testMatrix1.determinant();
	std::cout << "\n" << "   determination   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << determ << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1.inverse();
	std::cout << "\n" << "   inverse   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector1 = testMatrix1.row(row);
	std::cout << "\n" << "   row   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector1 = testMatrix1.column(col);
	std::cout << "\n" << "   column   " << std::endl;
	answer = testMatrix3.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector2 = MyMatrix3::rotationZ(Pi / 2)*testVector2;
	std::cout << "\n" << "   rotationZ   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector2 = MyMatrix3::rotationY(Pi / 2)*testVector2;
	std::cout << "\n" << "   rotationY   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector2 = MyMatrix3::rotationX(Pi / 2)*testVector2;
	std::cout << "\n" << "   rotationX   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testVector1 = { 7.0,2.0,0 };
	testMatrix3 = testMatrix1.translation(testVector1);
	testVector1 = { 5.0, 2.0, 4.0 };
	testVector2 = testMatrix3 * testVector1;
	std::cout << "\n" << "   translation   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	testMatrix3 = testMatrix1.scale(scalar);
	std::cout << "\n" << "   scale   " << std::endl;
	answer = testVector2.toString();
	std::cout << "the answer should be: " << answer << std::endl;
	std::cout << "---------------------------------------------------------" << "\n";

	system("pause");
	return 0;
}
