#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_names;

    printf("������Ź��� ���� ����� ���� �Է��ϼ���: ");
    scanf_s("%d", &num_names);
    printf("%d\n", num_names);

    char student_name[30][50];

    for (int i = 0; i < num_names; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s("%s", student_name[i], sizeof(student_name[i]));
        getchar();
    }

    for (int i = 0; i < num_names; i++) {
        printf("�л� %d�� �̸�: %s\n", i + 1, student_name[i]);
    }

    //��� 4 ���� �� ������Ź� ���̽��� �������� �������� �������� �������� ������ ���� ����

    char* home_txt = (char*)malloc(1000 * sizeof(char));
    printf("������Ź� ������ �Է��ϼ���: ");
    scanf_s(" %s", home_txt, sizeof(home_txt));


    //��� 3 ������ ��� ���� ���� �ۼ� ��¥�� ���� �����ϴ� ����� �����Ͽ� ���� �� ����

    free(home_txt);
    return 0;
}