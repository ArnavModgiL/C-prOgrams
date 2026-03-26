// Palindrome number = number jo reverse karne par same rahe |

#include<stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;
    int remainder;

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num /10;
    }

    if(original == reverse) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(isPalindrome(number)) {
        printf("The number is a Palindrome.");
    } else {
        printf("The number is not a Palindrome.");
    }
    return 0;
}