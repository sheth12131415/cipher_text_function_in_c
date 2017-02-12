#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

char* cipher(char s[])
{    
  char temp[200];
  int i;
  for(i=0;i<=sterlen(s);i++)
     {   
        if(isalpha(s[i]))
             { 
               s[i]=toascii(s[i])+1;
               }
      }         
               return s;
               
 }
 
 
 int isalpha(char c)
 {  
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
      return 1;
    else
      return 0;
  
 }
 
 int main()
  {
      char text[200]="I AM an programmmmmmer     "
      printf("%s",cipher(text));
      getch();
      return 0;
  }    
