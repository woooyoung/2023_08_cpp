//��� ȸ��� ��� �����ý����� �ִ�.
//�� ������� �ý����� �����ڿ� ���� ����� �Է¹޾� ����� �� ������
//����� ���� �����ȣ, �̸�, ����, ���� �̶�� �Ӽ��� �����ִ�.
//�����ڴ� ������� �ѹ��� �� �� �ְ�, �����ڿ� ���� ����� �߰��� �� ������ ����� ���� �����ڿ� ���� �����ɼ� �ִ�.
//������ �����ȣ�� �Է¹޾� ���ó���� �� �� �ִ� ��� ��ȣ�� �ý��ۿ� ���� �ڵ����� �����Ǹ�
//�����ȣ�� �����Ǵ� ����� �����ӰԱ����Ҽ��ִ�. (100��)

#include "���.h"

int main() {

	Empoloyee* empoloyee[100]; // ����� ������ ���� 100��
	int count = 0; // ������ ��� ���� ����
	
	while (true) {
		printf("��ɾ �Է����ּ���\n");
		printf("1.��� ����\n");
		printf("2.��� ���\n");
		printf("3.��� ����\n");
		printf("4.���α׷� ����\n");

		fseek(stdin, 0, SEEK_END);
		int input;
		scanf("%d", &input);
	
		if (input == 1) {
			printf("==�������==\n");
			for (int i = 0; i < count; i++) {
				empoloyee[i]->printInfo();
			}
		}
		else if (input == 2) {
			printf("==������==\n");
		}
		else if (input == 3) {
			printf("==�������==\n");
		}
		else if (input == 4) {
			printf("==���α׷��� �����մϴ�==\n");
			break;
		}
		else {
			printf("���� ����̾� 1,2,3,4 �߿� �ϳ� ���\n");
		}
	}


	return 0;
}

// �Է¹��� ������ �����ϴ� �Լ�
int getInt(const char* prompt) {
	int input;
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d\n", &input);
	return input;
}

// �Է¹��� ������ �����ϴ� �Լ�
char* getString(const char* prompt) {
	//char input[100]; // �Լ��� ������??? �������ݾ�? -> �迭�� �ּҸ� �����ϰ� �������� �迭�� ������Ƿ� '�����Ҵ�'�� �ؾ��Ѵ�.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input); // 99���� ���ڸ� �޾Ƽ� String���� input �� ����
	return input;
}