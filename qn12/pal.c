#include<stdio.h>
int main()
{
  int num, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num != 0) {
        digit = num % 10;  
        reverse = reverse * 10 + digit; 
        num /= 10;  
    }
    printf("Reversed number: %d\n", reverse);
    
    if(reverse=num)
    {
    printf("It is not a Palindrome.\n");
    }
    else
    {
     printf("It is a Palindrome.\n");
    }
    

    return 0;
}
