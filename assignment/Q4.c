#include <stdio.h>
#include <stdlib.h>

void main() {
    char c[5][40], d[5][40];
    int i = 0;
    
    
    FILE *f = fopen("stringc.txt", "w");
    if (f == NULL) {
        printf("File cannot be created\n");
        exit(1);
    }
    
    
    printf("Enter 5 strings, each of length 40 characters:\n");
    for (i = 0; i < 5; i++) {
        
        fgets(c[i], sizeof(c[i]), stdin);
        
        c[i][strcspn(c[i], "\n")] = '\0'; 
        fputs(c[i], f); 
        fputc('\n', f);   
    }
    fclose(f);  
    FILE *fr = fopen("stringc.txt", "r");
    if (fr == NULL) {
        printf("Error opening file for reading\n");
        exit(1);
    }
    
    
    printf("\nStrings read from file:\n");
    while (fgets(d[i], sizeof(d[i]), fr)) {

        printf("The string is: %s\n", d[i]);
    }
    
    fclose(fr);  
}

