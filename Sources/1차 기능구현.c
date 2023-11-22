#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_names;

    printf("가정통신문을 받을 사람의 수를 입력하세요: ");
    scanf_s("%d", &num_names);
    printf("%d\n", num_names);

    char student_name[30][50];

    for (int i = 0; i < num_names; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        scanf_s("%s", student_name[i], sizeof(student_name[i]));
        getchar();
    }

    for (int i = 0; i < num_names; i++) {
        printf("학생 %d의 이름: %s\n", i + 1, student_name[i]);
    }

    char* home_txt = (char*)malloc(1000 * sizeof(char));
    printf("가정통신문 본문을 입력하세요: ");
    scanf_s(" %s", home_txt, sizeof(home_txt));

    free(home_txt);
    return 0;
}