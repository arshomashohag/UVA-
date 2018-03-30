#include<cstdio>
#include<cstring>
#include<cctype>


char str[10000][10000],temp[104],check[10],out[104];
int i,len,j,k,save=0;
int main(void)
{
    for(i=0;i<=100000;i++)
    {
        scanf("%[^\n]",str[i]);
        len=strlen(str[i]);
        check[4]=str[i][len-1];
        check[3]=str[i][len-2];
        check[2]=str[i][len-3];
        check[1]=str[i][len-4];
        check[0]=str[i][len-5];
         check[5]='\0';

     for(j=0;str[i][j];j++)
     {
       k=0;
       while(isalpha(str[i][j]) || str[i][j]=='-')
       {
           temp[k]=str[i][j];
           j++;
           k++;
       }
       temp[k]='\0';

       if(save<k && strcmp(temp,"E-N-D"))
       {
           strcpy(out,temp);
           save=k;
       }
     }

        if(strcmp(check,"E-N-D")==0)
            break;

            getchar();
    }

     for(i=0;out[i];i++)
        printf("%c",tolower(out[i]));
     printf("\n");

    return 0;
}
