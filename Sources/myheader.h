#pragma once
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int languge;
};

void StudentName(struct Student students[], int num_names, int languge);
void InputHometxt(char** home_txt);
void OutTotaltxt(int num_names, struct Student students[], char* home_txt, struct tm* t);
void OutTotaltxtEnglish(int num_names, struct Student students[], char* home_txt, struct tm* t);