    #include <stdio.h>
     
    int main()
    {
       int n, r = 0, t;
     
       printf("Enter an integer to check if it is palindrome or not\n");
       scanf("%d", &n);
     
       t = n;
     
       while (t != 0)
       {
          r = r * 10;
          r = r + t%10;
          t = t/10;
       }
     
       if (n == r)
          printf("%d is a palindrome number.\n", n);
       else
          printf("%d isn't a palindrome number.\n", n);
     
       return 0;
    }