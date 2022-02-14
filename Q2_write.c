#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;


    fp=fopen("Q2_text.txt","w");
    fputs("luke shaw\n",fp);
    fputs("wayne rooney\n",fp);
    fputs("rooney ronaldo\n",fp);
    fputs("shaw rooney\n",fp);
    fputs("mike wayne\n",fp);
    fclose(fp);
}
