#include "myheader.h"

int main() {
    int num_names;

    time_t now;
    struct tm t;
    time(&now);
    localtime_s(&t, &now);

    int language_choice;

    printf("�� �����ϼ��� (1: �ѱ���, 2: ����): ");
    scanf_s("%d", &language_choice);
    getchar();

    printf("������Ź��� ���� ����� ���� �Է��ϼ���: ");
    scanf_s("%d", &num_names);
    getchar();

    struct Student students[30];
    char* home_txt = (char*)malloc(1000 * sizeof(char));

    StudentName(students, num_names, language_choice);
    InputHometxt(&home_txt);

    if (language_choice == 1) {OutTotaltxt(num_names, students, home_txt, &t);}
    else if (language_choice == 2) { OutTotaltxtEnglish(num_names, students, home_txt, &t); }

    free(home_txt);

    return 0;
}