#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Sex {
	MALE,
	FEMALE,
	UNKNOWN,
	};

#define MUM 5

//int main(){
//	// ������4��������ʽ
//	// 1. ����ֵ����
//	// 2. const �޸ĵı�����Ϊ����
//	// 3. ö�� enum
//	// 4. �� #define
//
//	printf("MUM =\t%d\n", MUM);
//	printf("my name is \"yangying\"\n");
//	printf("d:\\test.txt");
//	printf("%d\n", strlen("c"));
//
//	printf("���ú��ô�����?  1.��ʾ��  0.��ʾ����:\n");
//	int choice = 0;
//	scanf("%d", &choice);
////ѡ�����:if else , switch
//	if (choice == 1){
//		//��������ִ�� if ���� { } �е�����
//		printf("�� offer ���������� !\n");
//	}
//	else{
//		//����������,ִ�� else { } �е�����
//		printf("�ؼ�������� !\n");
//	}
//
////ѭ�����
//	// ��� 1 - 10
//	// while ѭ��
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num = num + 1;
//	}
//	printf("\n");

//����
	// int ����ֵ����
	// Add �Ǻ�����
	// ( ) �����Ǻ����Ĳ���
	// { } ������(����Ƭ�ε�����)
	// return ��ʾ����������.
//int Add(int x, int y){
//		int sum = x + y;
//		return sum;
//	}
//int main(){
//	//��������,����ִ�д���Ƭ��
//	printf("%d\n", Add(10, 20));
//	printf("%d\n", Add(100, 2000));

//����

int main(){
	int a[4] = { 1, 2, 3, 4 };
	//ȡ�±�ķ�ʽ��ʹ�������е�Ԫ��
	printf("%d\n", a[1]);

	system("pause");
	return 0;

}