#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("ekra1.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fprintf(fp, "\nThis line is appended.");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}
