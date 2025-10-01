#include <stdio.h>
#include <stdlib.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("Error opening file!\n");
        return;
    }

    char current, previous;
    int count = 0;

    previous = fgetc(in);
    if (previous == EOF) {
        printf("Input file is empty.\n");
        fclose(in);
        fclose(out);
        return;
    }
    count = 1;

    while ((current = fgetc(in)) != EOF) {
        if (current == previous) {
            count++;
        } else {
            fprintf(out, "%c%d", previous, count);
            previous = current;
            count = 1;
        }
    }
    fprintf(out, "%c%d", previous, count);
    fclose(in);
    fclose(out);
    printf("File compressed successfully!\n");
}

int main() {
    char input[50], output[50];
    printf("Enter input file name: ");
    scanf("%s", input);
    printf("Enter output file name: ");
    scanf("%s", output);

    compressFile(input, output);
    return 0;
}
