#include "myheader.h"

int main() {
    int num_names;

    time_t now;
    struct tm t;
    time(&now);
    localtime_s(&t, &now);

    printf("������Ź��� ���� ����� ���� �Է��ϼ���: ");
    scanf_s("%d", &num_names);
    getchar();

    struct Student students[30];
    char* home_txt = (char*)malloc(1000 * sizeof(char));

    StudentName(students, num_names);
    InputHometxt(&home_txt);
    OutTotaltxt(num_names, students, home_txt, &t);

    free(home_txt);

    return 0;
}