#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], username[100];
    printf("First name: ");
    scanf("%s", first);
    printf("Last name: ");
    scanf("%s", last);

    strcpy(username, first);
    strcat(username, last);

    for(int i = 0; username[i]; i++) {
        username[i] = tolower(username[i]);
    }

    printf("Your username: %s\n", username);
    return 0;
}