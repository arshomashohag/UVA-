#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>

using namespace std;
char ar[50],ch;
int ispal,ismir,ck=0;
map<char , char > mirror;
map<char , char >::iterator iter;



int is_palindrome(void)
{
  int i,len;
  len=strlen(ar)-1;

  for(i=0;i<=len;i++,len--)
    if(ar[i]!=ar[len])
     return 0;

  return 1;

}

int is_mirror(void)
{
 int i,len;
  len=strlen(ar)-1;


  for(i=0;i<=len;i++,len--)
  {
    iter=mirror.find(ar[i]);
    if((iter->second)!=ar[len])
        return 0;
  }
  return 1;
}

int main(void)
{
    mirror['A']='A';
    mirror['E']='3';
    mirror['H']='H';
    mirror['I']='I';
    mirror['J']='L';
    mirror['L']='J';
    mirror['M']='M';
    mirror['O']='O';
    mirror['S']='2';
    mirror['T']='T';
    mirror['U']='U';
    mirror['V']='V';
    mirror['W']='W';
    mirror['X']='X';
    mirror['Y']='Y';
    mirror['Z']='5';
    mirror['1']='1';
    mirror['2']='S';
    mirror['3']='E';
    mirror['5']='Z';
    mirror['8']='8';

   while(scanf("%[^\n]",ar)==1)
   {
      ispal=is_palindrome();
      ismir=is_mirror();

      if(ispal && ismir)
        printf("%s -- is a mirrored palindrome.\n\n",ar);
      else if(ispal && !ismir)
        printf("%s -- is a regular palindrome.\n\n",ar);
      else if(!ispal && ismir)
      printf("%s -- is a mirrored string.\n\n",ar);
      else
        printf("%s -- is not a palindrome.\n\n",ar);

        getchar();
   }

    return 0;
}
