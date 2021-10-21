#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AddPercent(int* percent){
    (*percent)++;
    // This code acts as bug.
    if (*percent == 30) {
        (*percent)++;
    }
    return;
}
int main(int argc, char* argv[]){
    int percent = 0;
    for (int i = 0; i < 100; i++) {
        AddPercent(&percent);
        /*printf("Current percent = %d\%\n", percent);*/
    }
    printf("Final percent = %d\%\n", percent);

    return 0;
}
