// Check if a given character is present in a string or not

#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character is Present\n");
            return;
        }
    }

    printf("character is Not Present ");
}

int main() {
   char str[100];
   char ch;

   printf("Enter a String: ");
   fgets(str, 100, stdin);

   printf("Enter a character to serach : ");
   scanf("%c", &ch);

   checkChar(str, ch);
    return 0;
}