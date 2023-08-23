#define _CRT_SECURE_NO_WARNINGS
// ���Ϳ� ��Į�� ��
#include <cstdio>
#include <cstring>

// 3���� ����
class Vector3 {
public:
	float X;
	float Y;
	float Z;

	Vector3() {
		X = 0.0f;
		Y = 0.0f;
		Z = 0.0f;
	}

	Vector3(float x, float y,float z) {
		this->X = x;
		this->Y = y;
		this->Z = z;
	}

	void printInfo() {
		printf("%.2f, %.2f, %.2f\n", X, Y, Z);
	}
};

// ���� ��
Vector3 operator*(Vector3& v, float s) {
	return Vector3(v.X * s, v.Y * s, v.Z * s);
}

int main() {

	Vector3 v1 = Vector3(10,20,30);

	Vector3 v2 = v1 * 10;
	v2.printInfo();


	return 0;
}