#include "myheader.h"

void StudentName(struct Student students[], int num_names,int language) {
    for (int i = 0; i < num_names; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        scanf_s("%s", students[i].name, sizeof(students[i].name));
        getchar();
        students[i].languge = language;
    }
}

void InputHometxt(char** home_txt) {
    printf("가정통신문 본문을 입력하세요: ");
    fgets(*home_txt, 1000, stdin);
    (*home_txt)[strcspn(*home_txt, "\n")] = '\0'; // 개행 문자 제거
}

void OutTotaltxt(int num_names, struct Student students[], char* home_txt, struct tm* t) {
    for (int i = 0; i < num_names; i++) {
        printf("\n가정통신문 #%d:\n\n", i + 1);
        printf(" %s 학부모님 안녕하세요? %s\n", students[i].name, home_txt);
        printf("감사합니다. 항상 학부모님 가정에 행복과 평안을 기원 합니다.\n\n");

        printf("\t%d년 %d월 %d일\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
        printf("\t담임교사 올림\n");
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