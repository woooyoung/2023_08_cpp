#define _CRT_SECURE_NO_WARNINGS
//������ �����ε� 
// + - * / -> �⺻ �ڷ������� ��ȿ�� ������
#include <cstdio>
#include <cstring>
//#include <vector>

class Vector {
public:
	float X;
	float Y;

	Vector() {
		X = 0.0f;
		Y = 0.0f;
	}

	Vector(float x, float y){
		this->X = x;
		this->Y = y;
	}

	void printInfo() {
		printf("%.2f, %.2f\n", X, Y);
	}
};

// ���� ��
//Vector operator+(Vector v1, Vector v2) { // ������ �����ε� : �������� �Ҵ�(���þ������Ƽ��) �������� �����Ѵ�.
Vector operator+(Vector& v1, Vector& v2) { // �����簡 �Ͼ�� �ʴ´� -> �ּ� ���� -> �����ս��� ����.
	return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {

	Vector v1 = Vector(100,200);
	Vector v2 = Vector(1,2);
	
	Vector v3 = v1 + v2;
	v3.printInfo();
	

	return 0;
}