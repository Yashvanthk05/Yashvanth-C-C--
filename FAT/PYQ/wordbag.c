#include <stdio.h>
#include <string.h>

int main(){
    char wordbag[5][20];
    int length[5];

    // Input words and calculate lengths
    for(int i = 0; i < 5; i++){
        printf("Enter a word: ");
        scanf("%s", wordbag[i]);
        length[i] = strlen(wordbag[i]);
    }

    // Find the shortest word
    int minlen = length[0];
    int minindex = 0;
    for(int i = 1; i < 5; i++){
        if(minlen > length[i]){
            minlen = length[i];
            minindex = i;
        }
    }

    // Store the stem word
    char stem[20];
    strcpy(stem, wordbag[minindex]);

    // Check if the stem word is a substring of all other words
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(strstr(wordbag[i], stem) != NULL){
            count++;
        }
    }

    // If the stem word is a substring of all other words, print it
    if(count == 5){
        printf("The Stem Word is: %s\n", stem);
    }

    return 0;
}
