#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}