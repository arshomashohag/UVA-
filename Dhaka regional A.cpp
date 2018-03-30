#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>


using namespace std;

int t,chk[27];
long long int r,i,j;
char arr[1000003],a,b;



int main(void)
{
    cin>>t;
    getchar();

    while(t--)
    {
        scanf("%[^\n]",arr);
        cin>>r;
        getchar();
        memset(chk,0,sizeof(chk));
        while(r--)
        {
            scanf("%c %c",&a,&b);
            chk[b-65]=a;
            j=0;
            while(j<26)
            {
                if(chk[j]==b)
                    chk[j]=a;
                j++;
            }

            getchar();
        }

        for(i=0; arr[i]; i++)
        {
            if(isalpha(arr[i]) && chk[arr[i]-65]!=0)
                printf("%c",chk[arr[i]-65]);
            else
                printf("%c",arr[i]);
        }
        printf("\n");
    }




    return 0;
}
