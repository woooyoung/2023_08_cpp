//어느 회사는 사원 관리시스템이 있다.
//이 사원관리 시스템은 관리자에 의해 사원을 입력받아 등록할 수 있으며
//사원은 각각 사원번호, 이름, 성별, 직급 이라는 속성을 갖고있다.
//관리자는 모든사원을 한번에 볼 수 있고, 관리자에 의해 사원이 추가될 수 있으며 사원이 퇴사시 관리자에 의해 삭제될수 있다.
//삭제는 사원번호를 입력받아 퇴사처리를 할 수 있다 사원 번호는 시스템에 의해 자동으로 관리되며
//사원번호가 관리되는 방법은 자유롭게구현할수있다. (100명)

#include "헤더.h"

int main() {

	Empoloyee* empoloyee[100]; // 사원을 저장할 공간 100개
	int count = 0; // 현재의 사원 숫자 저장
	
	while (true) {
		printf("명령어를 입력해주세요\n");
		printf("1.사원 보기\n");
		printf("2.사원 등록\n");
		printf("3.사원 삭제\n");
		printf("4.프로그램 종료\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);
	
		if (input == 1) {
			printf("==사원보기==\n");
			for (int i = 0; i < count; i++) {
				empoloyee[i]->printInfo();
			}
		}
		else if (input == 2) {
			printf("==사원등록==\n");
		}
		else if (input == 3) {
			printf("==사원삭제==\n");
		}
		else if (input == 4) {
			printf("==프로그램을 종료합니다==\n");
			break;
		}
		else {
			printf("없는 기능이야 1,2,3,4 중에 하나 골라\n");
		}
	}


	return 0;
}

// 입력받은 정수를 리턴하는 함수
int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d\n", &input);
	return input;
}

// 입력받은 문장을 리턴하는 함수
char* getString(const char* prompt) {
	//char input[100]; // 함수가 끝나면??? 없어지잖아? -> 배열의 주소만 리턴하고 실질적인 배열은 사라지므로 '동적할당'을 해야한다.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input); // 99개의 문자를 받아서 String으로 input 에 저장
	return input;
}