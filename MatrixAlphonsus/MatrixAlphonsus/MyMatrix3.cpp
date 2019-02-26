// Alphonsus Aluya
// C00237736
// Date: 26/2/2019
// time estimated 8 hours
// actual time ??
#include "stdafx.h"
#include "MyMatrix3.h"
#include "MyVector3.h"

MyMatrix3::MyMatrix3()
{
}

MyMatrix3::MyMatrix3(double t_a11, double t_a12, double t_a13, double t_a21, double t_a22, double t_a23, double t_a31, double t_a32, double t_a33)
{
	m11 = t_a11;
	m12 = t_a12;
	m13 = t_a13;

	m21 = t_a21;
	m22 = t_a22;
	m23 = t_a23;

	m31 = t_a31;
	m32 = t_a32;
	m33 = t_a33;
}

MyMatrix3::MyMatrix3(const MyVector3 t_row1, const MyVector3 t_row2, const MyVector3 t_row3)
{
	m11 = t_row1.x;
	m12 = t_row1.y;
	m13 = t_row1.z;

	m21 = t_row2.x;
	m22 = t_row2.y;
	m23 = t_row2.z;

	m31 = t_row3.x;
	m32 = t_row3.y;
	m33 = t_row3.z;
}

MyMatrix3::~MyMatrix3()
{
}

std::string MyMatrix3::toString() const
{
	return std::string();
}

bool MyMatrix3::operator==(const MyMatrix3 other) const
{
	if (m11 == other.m11 && m12 == other.m12 && m13 == other.m13 && m21 == other.m21 && m22 == other.m22 && m23 == other.m23 && m31 == other.m31 && m32 == other.m32 && m33 == other.m33)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyMatrix3::operator!=(const MyMatrix3 other) const
{
	if (m11 != other.m11 && m12 != other.m12 && m13 != other.m13 && m21 != other.m21 && m22 != other.m22 && m23 != other.m23 && m31 != other.m31 && m32 != other.m32 && m33 != other.m33)
	{
		return true;
	}
	else
	{
		return false;
	}
}


MyMatrix3 MyMatrix3::operator+(const MyMatrix3 t_other) const
{
	MyMatrix3 matrix = { m11 + t_other.m11, m12 + t_other.m12, m13 + t_other.m13,
						 m21 + t_other.m21, m22 + t_other.m22, m13 + t_other.m23,
						 m31 + t_other.m31, m32 + t_other.m32, m13 + t_other.m33 };
	return matrix;
}

MyMatrix3 MyMatrix3::operator-(const MyMatrix3 t_other) const
{
	MyMatrix3 matrix = { m11 - t_other.m11, m12 - t_other.m12, m13 - t_other.m13,
						 m21 - t_other.m21, m22 - t_other.m22, m13 - t_other.m23,
						 m31 - t_other.m31, m32 - t_other.m32, m13 - t_other.m33 };
	return matrix;
}

MyMatrix3 MyMatrix3::operator*(const MyMatrix3 t_other) const
{
	MyMatrix3 matrix = { m11 * t_other.m11 + m12 * t_other.m21 + m13 * t_other.m31, m11 * t_other.m12 + m12 * t_other.m22 + m13 * t_other.m32, m11 + t_other.m13 + m12 * t_other.m23 + m13 * t_other.m33,
						 m21 * t_other.m11 + m22 * t_other.m21 + m23 * t_other.m31, m21 * t_other.m12 + m22 * t_other.m22 + m23 * t_other.m32, m21 * t_other.m13 + m22 * t_other.m23 + m23 * t_other.m33,
						 m31 * t_other.m11 + m32 * t_other.m21 + m33 * t_other.m31, m31 * t_other.m12 + m32 * t_other.m22 + m33 * t_other.m32, m31 * t_other.m13 + m32 * t_other.m23 + m33 * t_other.m33 };
	return matrix;
}

MyVector3 MyMatrix3::operator*(const MyVector3 t_vector) const
{
	MyVector3 vector = { m11 * t_vector.x + m12 * t_vector.y + m13 * t_vector.z,
						m21 * t_vector.x + m22 * t_vector.y + m23 * t_vector.z,
						m31 * t_vector.x + m32 * t_vector.y + m33 * t_vector.z };
	return vector;
}

MyMatrix3 MyMatrix3::operator*(const double t_scale) const
{
	MyMatrix3 scales = { m11 * t_scale, m12 * t_scale, m13 * t_scale,
						 m21 * t_scale, m22 * t_scale, m23 * t_scale,
						 m31 * t_scale, m32 * t_scale, m33 * t_scale };
	return scales;
}

MyMatrix3 MyMatrix3::transpose() const
{
	double newM11 = m11;
	double newM12 = m21;
	double newM13 = m31;

	double newM21 = m12;
	double newM22 = m22;
	double newM23 = m32;

	double newM31 = m13;
	double newM32 = m23;
	double newM33 = m33;

	MyMatrix3 newMatrix = { newM11, newM12, newM13,
						   newM21, newM22, newM23,
						   newM31, newM32, newM33 };

	return newMatrix;
}

double MyMatrix3::determinant() const
{
	double determinant = ((m11 * (m22 * m33) - (m23 * m32))) - (m21 * ((m12 * m33) - (m32 * m13))) + (m31 * ((m23 * m12) - (m22 * m13)));
	return determinant;
}

MyMatrix3 MyMatrix3::inverse() const
{
	return MyMatrix3();
}

MyVector3 MyMatrix3::row(const int t_row) const
{
	return MyVector3();
}

MyVector3 MyMatrix3::column(const int t_column) const
{
	return MyVector3();
}
