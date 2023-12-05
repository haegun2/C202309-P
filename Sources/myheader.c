#include "myheader.h"

void StudentName(struct Student students[], int num_names) {
    for (int i = 0; i < num_names; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name));
        getchar();
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