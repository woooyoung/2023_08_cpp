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
			if (count == 0) {
				printf("사원 한명도 없음\n");
				continue;
			}
			for (int i = 0; i < count; i++) {
				printf("==%d번째 사원==\n", i + 1);
				empoloyee[i]->printInfo();
			}
		}
		else if (input == 2) {
			printf("==사원등록==\n");
			char* name = getString("사원명을 입력해주세요 : ");
			int gender = getInt("성별을 입력해주세요 : ");
			char* rank =  getString("직급을 입력해주세요 : ");

			Empoloyee* e = new Empoloyee(name, gender, rank);
			delete[] name;
			delete[] rank;

			empoloyee[count] = e; // 사원 명부에 등록
			count++; // 사원 수 증가
		}
		else if (input == 3) {
			printf("==사원삭제==\n");
			int deletedIndex = -1;

			if (count == 0) {
				printf("사원이 없어 그러므로 지울게 없어, 명령어 다시 골라\n");
				continue;
			}

			int number = getInt("사원 번호를 입력해 : ");

			for (int i = 0; i < count; i++) { // 배열을 순회하는 반복문
				if (number == empoloyee[i]->number) { // 사용자가 방금 입력한 삭제하고 싶은 사원번호랑 배열 내에 일치하는게 있는가?
					delete empoloyee[i]; // 일치하는 놈이 있다면 삭제
					
					deletedIndex = i; // 일치하는 사원이 있을 경우에는 deletedIndex 에다가 해당 사원의 인덱스 덮어쓰기
					printf("%d번 사원이 삭제되었습니다.\n", number);
					break;
				}
			}

			if (deletedIndex >= 0) { // 어? 삭제가 됐네?
				for (int i = deletedIndex; i < count; i++) { // 현재 삭제된 인덱스부터 배열 요소의 끝까지
					empoloyee[i] = empoloyee[i + 1]; // 1칸씩 당겨와서 덮어쓰기
				}
				count--; // 사원 수 1 감소
			}
			else {
				printf("그런놈은 없었어\n");
			}
			

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
	scanf("%d", &input);
	return input;
}

// 입력받은 문장을 리턴하는 함수  // 끝나면 메모리 해제 해줘야해 ######필수
char* getString(const char* prompt) {
	//char input[100]; // 함수가 끝나면??? 없어지잖아? -> 배열의 주소만 리턴하고 실질적인 배열은 사라지므로 '동적할당'을 해야한다.
	char* input = new char[100]; // 힙 영역에 생기므로 위의 문제가 생기지 않는다.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input); // 99개의 문자를 받아서 String으로 input 에 저장
	return input;
}