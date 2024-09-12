#include<stdio.h>
#include<limits.h>
int main()
{
    printf("----------------------------------------------------------------------------------------------\n");
    printf("data Type%17cSize%8cFormat Specifier%15cRange\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("Char\t\t\b\b %lu\t\t\b\b %%c\t\t   %d  to %d  \n",sizeof(char),SCHAR_MIN,CHAR_MAX);
    printf("unsigned char %%c %lu  %d to %d  \n",sizeof(char),0,UCHAR_MAX);
    printf("short int%17c2%11c%%hd%28c-32768 to +32767\n");
    printf("unsigned short int%8c2%11c%%hu%28c0 to 65535\n");
    printf("int%23c2%11c%%d%29c-32768 to +32767\n");
    printf("unsigned int%14c2%11c%%u%29c0 to 65535\n");
    printf("long int%18c4%11c%%ld%28c–2,147,483,648 to 2,147,483,647\n");
    printf("unsigned long int%9c4%11c%%lu%28c0 to 4,294,967,295\n\n\n");

	}
   
   
  
