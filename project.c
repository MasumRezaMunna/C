#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert string to lowercase (for better matching)
void toLowerCase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Split sentence into words
int splitWords(char str[], char words[][20]) {
    int i = 0, j = 0, k = 0;

    while(1) {
        if(str[i] == ' ' || str[i] == '\0') {
            words[k][j] = '\0';
            k++;
            j = 0;
            if(str[i] == '\0') break;
        } else {
            words[k][j++] = str[i];
        }
        i++;
    }

    return k; // total words
}

int main() {
    char str1[200], str2[200];
    char words1[50][20], words2[50][20];

    int count1, count2;
    int match = 0;

    printf("Enter first sentence:\n");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second sentence:\n");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Convert both to lowercase
    toLowerCase(str1);
    toLowerCase(str2);

    // Split into words
    count1 = splitWords(str1, words1);
    count2 = splitWords(str2, words2);

    // Compare words
    for(int i = 0; i < count1; i++) {
        for(int j = 0; j < count2; j++) {
            if(strcmp(words1[i], words2[j]) == 0) {
                match++;
                break; // avoid double counting
            }
        }
    }

    // Calculate similarity
    float similarity = (2.0 * match) / (count1 + count2) * 100;

    // Output
    printf("\nMatched words: %d\n", match);
    printf("Total words: %d\n", count1 + count2);
    printf("Similarity: %.2f%%\n", similarity);

    return 0;
}