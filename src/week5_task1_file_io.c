// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char filename[100] = "data.txt";
    char line[256];
    int lineCount = 0;
    printf("Enter filename (default: data.txt): ");
    if (fgets(filename, sizeof(filename), stdin) == NULL || filename[0] == '\n') {
        snprintf(filename, sizeof(filename), "data.txt");
    } else {
        filename[strcspn(filename, "\n")] = '\0';
    }
    fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fprintf(fp, "This is the first line.\n");
    fprintf(fp, "This is the second line.\n");
    fprintf(fp, "This is the third line.\n");
    fclose(fp);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
     printf("\n--- Contents of %s ---\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        lineCount++;
    }
    printf("\n--- %d line(s) read from file ---\n", lineCount);
    fclose(fp);
    // TODO: 1. Open file for writing (mode = "w") 
    // TODO: 2. Check if file opened successfully 
    // TODO: 3. Write 2–3 lines of text to the file using fprintf() 
    // TODO: 4. Close the file // TODO: 5. Open file again for reading (mode = "r") 
    // TODO: 6. Use fgets() in a loop to read and print each line to the console 
    // TODO: 7. Close the file 
    
    // BONUS: ask user for filename instead of using default "data.txt" 
    // BONUS: count number of lines read
    return 0;
}
