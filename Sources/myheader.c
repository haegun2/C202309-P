#include "myheader.h"

void StudentName(struct Student students[], int num_names,int language) {
    for (int i = 0; i < num_names; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name));
        getchar();
        students[i].languge = language;
    }
}

void InputHometxt(char** home_txt) {
    printf("������Ź� ������ �Է��ϼ���: ");
    fgets(*home_txt, 1000, stdin);
    (*home_txt)[strcspn(*home_txt, "\n")] = '\0'; // ���� ���� ����
}

void OutTotaltxt(int num_names, struct Student students[], char* home_txt, struct tm* t) {
    for (int i = 0; i < num_names; i++) {
        printf("\n������Ź� #%d:\n\n", i + 1);
        printf(" %s �кθ�� �ȳ��ϼ���? %s\n", students[i].name, home_txt);
        printf("�����մϴ�. �׻� �кθ�� ������ �ູ�� ����� ��� �մϴ�.\n\n");

        printf("\t%d�� %d�� %d��\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
        printf("\t���ӱ��� �ø�\n");
    }
}

void OutTotaltxtEnglish(int num_names, struct Student students[], char* home_txt, struct tm* t) {
    for (int i = 0; i < num_names; i++) {
        printf("\nNewsletter #%d:\n\n", i + 1);
        printf("Dear parents of %s, %s\n", students[i].name, home_txt);
        printf("Thank you. Wishing happiness and peace to your family always.\n\n");

        printf("\t%d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
        printf("\tSincerely,\n");
        printf("\tClass Teacher\n");
    }
}