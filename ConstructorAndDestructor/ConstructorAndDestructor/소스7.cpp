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
			if (count == 0) {
				printf("��� �Ѹ� ����\n");
				continue;
			}
			for (int i = 0; i < count; i++) {
				printf("==%d��° ���==\n", i + 1);
				empoloyee[i]->printInfo();
			}
		}
		else if (input == 2) {
			printf("==������==\n");
			char* name = getString("������� �Է����ּ��� : ");
			int gender = getInt("������ �Է����ּ��� : ");
			char* rank =  getString("������ �Է����ּ��� : ");

			Empoloyee* e = new Empoloyee(name, gender, rank);
			delete[] name;
			delete[] rank;

			empoloyee[count] = e; // ��� ��ο� ���
			count++; // ��� �� ����
		}
		else if (input == 3) {
			printf("==�������==\n");
			int deletedIndex = -1;

			if (count == 0) {
				printf("����� ���� �׷��Ƿ� ����� ����, ��ɾ� �ٽ� ���\n");
				continue;
			}

			int number = getInt("��� ��ȣ�� �Է��� : ");

			for (int i = 0; i < count; i++) { // �迭�� ��ȸ�ϴ� �ݺ���
				if (number == empoloyee[i]->number) { // ����ڰ� ��� �Է��� �����ϰ� ���� �����ȣ�� �迭 ���� ��ġ�ϴ°� �ִ°�?
					delete empoloyee[i]; // ��ġ�ϴ� ���� �ִٸ� ����
					
					deletedIndex = i; // ��ġ�ϴ� ����� ���� ��쿡�� deletedIndex ���ٰ� �ش� ����� �ε��� �����
					printf("%d�� ����� �����Ǿ����ϴ�.\n", number);
					break;
				}
			}

			if (deletedIndex >= 0) { // ��? ������ �Ƴ�?
				for (int i = deletedIndex; i < count; i++) { // ���� ������ �ε������� �迭 ����� ������
					empoloyee[i] = empoloyee[i + 1]; // 1ĭ�� ��ܿͼ� �����
				}
				count--; // ��� �� 1 ����
			}
			else {
				printf("�׷����� ������\n");
			}
			

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
	scanf("%d", &input);
	return input;
}

// �Է¹��� ������ �����ϴ� �Լ�  // ������ �޸� ���� ������� ######�ʼ�
char* getString(const char* prompt) {
	//char input[100]; // �Լ��� ������??? �������ݾ�? -> �迭�� �ּҸ� �����ϰ� �������� �迭�� ������Ƿ� '�����Ҵ�'�� �ؾ��Ѵ�.
	char* input = new char[100]; // �� ������ ����Ƿ� ���� ������ ������ �ʴ´�.
	printf("%s", prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input); // 99���� ���ڸ� �޾Ƽ� String���� input �� ����
	return input;
}