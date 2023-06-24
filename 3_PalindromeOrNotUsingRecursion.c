#include <stdio.h>

int isPalindrome(int num, int reverseNum) {
    if (num == 0) {
        return reverseNum;
    }
    reverseNum = (reverseNum * 10) + (num % 10);
    return isPalindrome(num / 10, reverseNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reverseNum = isPalindrome(num, 0);

    if (num == reverseNum) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
