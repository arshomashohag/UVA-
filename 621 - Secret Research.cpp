#include<cstdio>
#include<cstring>

int main(void)
{
    char s[500];
    int n,len,i;

    scanf("%d",&n);
     getchar();
    while(n--)
    {
         gets(s);
        len=strlen(s) -1;
        if(s[len]=='5' && s[len-1]=='3')
            printf("-\n");
        else if(s[0]=='9' && s[len]=='4')
            printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            printf("?\n");
        else if( ((s[0]=='1' || s[0]=='4' ) && s[1]=='\0' ) || (s[0]=='7' && s[1]=='8'))
            printf("+\n");
    }
    return 0;
}
