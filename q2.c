#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    FILE *fp;
    int i,j,len,k;
    char ch;
    char a[20][10] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
    char buf[10],in[10],child[10];
    fp=fopen("Q2_text.txt","r");
    i = 0;
    j=0;
    ch = getc(fp);
    while (ch !=EOF)
    {
        if(ch == ' ' || ch == '\n')
        {
            j=0;
            i++;
            ch = getc(fp);
            continue;
        }
        a[i][j] = ch;
        j++;
        ch = getc(fp);
    }
    len = i;
    for(i=0;i<=len;i++)
    {
        strcpy(buf,a[i]);
        printf("%s ", buf);
        printf("\n");
    }
    printf("Enter a string:- ");
    gets(in);
    for(i=1;i<=len;i=i+2)
    {
        if(strcmp(a[i], in) == 0)
        {
            strcpy(child,a[i-1]);
            break;
        }
    }
    if(i>len)
    {
        printf("Not Found \n");
    }
    k = 0;
    printf("Grand child of %s are:- \n",in);
    for(i=1;i<=len;i=i+2)
    {
        if(strcmp(a[i], child) == 0)
        {
            k++;
            puts(a[i-1]);

        }
    }
    printf("\n");
    if(k==0)
    {
        printf("No Grandchild \n");
    }
    else
    {
        printf("Number of grandchild is %d\n",k);
    }
    fclose(fp);
}

