#include <stdio.h>
#include <string.h>

int main() {
    char str[10];  

    printf("Enter String Here: ");
    scanf("%s", str);

    int length = strlen(str);
    char reversed[length + 1];

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';


    if(strcmp(str, reversed) == 0) {
        printf("It Is a palindrome\n");
    } else {
        printf("It Is Not a palindrome\n");
    }

    return 0;
}
