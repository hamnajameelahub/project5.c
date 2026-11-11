#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("data.txt","w");
    fprintf(fp,"C Programming is an interesting and useful language. It helps us improve our logical thinking and problem-solving skills. Initially, it may be difficult, but with regular practice, we can understand it easily. I enjoyed learning C programming and writing simple programs in Turbo C");
    fclose(fp);
    fp=fopen("data.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    fp=fopen("data.txt","a");
    fprintf(fp,"Our C Programming sir teaches the concepts clearly and patiently. He explains every program step by step and makes the class interesting. He encourages us to practise coding and clear our doubts. His teaching helps us understand C Programming easily.");
    fclose(fp);
    return 0;
}
