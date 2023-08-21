// Å¬·¡½º »ý¼ºÀÚ / ¼Ò¸êÀÚ
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

class Student {
public:
	//char name[100];
	char* name;

	Student(const char* n) { 
		printf("»ý¼ºÀÚ ½ÇÇàµÊ\n");
		name = new char[strlen(n) + 1];
		strcpy(this->name, n);
	}

	~Student() { 
		printf("%s ¼Ò¸êÀÚ ½ÇÇàµÊ\n", this->name);
		delete[] name;
	}

	void printInfo() {
		printf("ÀÌ¸§ : %s\n", name);
		printf("============\n");
	}
};

int main() {

	Student* s1 = new Student("±èÃ¶¼ö");
	s1->printInfo();

	delete s1;

	Student* s2 = new Student("±è¿µÈñ");
	s2->printInfo();

	delete s2;

	Student s3 = Student("±è¹Î¼ö");
	s3.printInfo();


	return 0;
}