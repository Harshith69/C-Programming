//2. Write a program that returns the max occured character in the given line of input 
   ascii for space is 32

input : every example is unique
output: every example is unique //

/*********************************************************************************
//
#include <stdio.h>
#include <string.h>
int main()
{
     
    char mystr[30] = "every example is unique";
    char ch;
    int count[255]={0};
    int ascii;
    int i=0;
    while (mystr[i]!='\0')
    {
       ascii=(int) mystr[i];
       count[ascii]= count[ascii]+1;
       i++;
    }
    int max=0;
    for(i=0;i<255;i++)
    {
        if (count[i]>max)
        {
             max=count[i];
             ch=(char)i;
        }
      
    }
    printf("Max count of %c is %d", ch, max);
    return 0;
}
