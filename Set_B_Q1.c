#include<stdio.h>
#include<string.h>
void removeCharacter(int i,char str[])
{
    for(;str[i]!='\0';)
    {
        str[i]=str[i+2];
        str[i+1]=str[i+3];
        i+=2;
    }
}
void main()
{
    char in[100];
    int i,len,j;
    printf("Enter A string:- ");
    gets(in);
    len = strlen(in);
    i=0;
    while(in[i] != '\0')
    {
        if((in[i] == in[i+1]) && (i>=0))
        {
            removeCharacter(i,in);
            i--;
        }
        else
        {
            i++;
        }

    }
    if(in[0]== '\0')
    {
        printf("Empty String\n");

    }
    else
    {
        puts(in);
    }
}
