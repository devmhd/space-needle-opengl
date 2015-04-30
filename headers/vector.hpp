#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <math.h>
class Vector {
public:
	double x, y, z;
	Vector(double a = 0, double b = 0, double c = 0) {
		this->x = a;
		this->y = b;
		this->z = c;
	}

	Vector operator + (Vector temp) {
		return Vector(this->x+temp.x, this->y+temp.y, this->z+temp.z);
	}
	Vector operator - (Vector temp) {
		return Vector(this->x-temp.x, this->y-temp.y, this->z-temp.z);
	}

	double operator / (Vector temp) {
		return this->x*temp.x + this->y*temp.y + this->z*temp.z;
	}

	Vector operator * (Vector temp) {
		return Vector(this->y*temp.z - this->z*temp.y, this->z*temp.x - this->x*temp.z, this->x*temp.y - this->y*temp.x);
	}

	Vector operator * (double temp) {
		return Vector(this->x*temp, this->y*temp, this->z*temp);
	}

	double val() {
		double temp = sqrt(this->x*this->x + this->y*this->y + this->z*this->z);
		return temp;
	}

	void normalize() {
		double temp = this->val();
		this->x /= temp;
		this->y /= temp;
		this->z /= temp;
	}
};
#endif
