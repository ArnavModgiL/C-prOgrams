// Removing the extra spaces :

#include <stdio.h>

int main()
{
    char str[1000];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
    printf("After removing spaces: %s\n", str);
    return 0;
}