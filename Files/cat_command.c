// cat filename
#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);


    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("file doesn't exist\n ");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }


    fclose(fp);

    return 0;
}

