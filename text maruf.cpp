#include<stdio.h>

int main()
{
        int i,count=1;
        char ch[200];
        while(gets(ch))
        {
                i=0;
                while(1)
                {
                        if(ch[i]!='"')
                        {
                                printf("%c",ch[i]);
                                i++;
                        }
                        else
                        {
                                if(count==1)
                                {
                                        printf("``");
                                        count++;
                                        i++;
                                }
                                else
                                {
                                        printf("''");
                                        count=1;
                                        i++;
                                }
                        }
                        if(ch[i]=='\0')
                        break;
                }
                printf("\n");
        }
        return 0;
}
