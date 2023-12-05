#pragma once
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
};

void StudentName(struct Student students[], int num_names);
void InputHometxt(char** home_txt);
void OutTotaltxt(int num_names, struct Student students[], char* home_txt, struct tm* t);