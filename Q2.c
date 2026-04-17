// OnlY vOwels are in upperCASE :

#include<stdio.h>
int main() {
    char str[1000];

    printf("ENTER A STRING: ");
    fgets(str, sizeof(str),stdin);

    for(int i = 0; str[i] != '\0'; i++) {

        if (str[i] == 'a') str[i] = 'A';
        else if (str[i] == 'e') str[i] = 'E';
        else if (str[i] == 'i') str[i] = 'I';
        else if (str[i] == 'o') str[i] = 'O';
        else if (str[i] == 'u') str[i] = 'U';
    }
    printf("Updated String : %s",str);
    return 0;
}