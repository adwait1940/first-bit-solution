//uppercase
#include<stdio.h>


int main()
{
    char ch;

  printf("enter a charater : ");
  scanf("%c", &ch);

       if (ch > 'A' && ch < 'Z')
       printf("UPPERCASE LETTER");
       
       else if (ch > 'a' && ch < 'z')
      printf("lowercase letter");

      else printf("not an alphabet");

       return 0;
  
}
