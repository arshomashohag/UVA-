#include<bits/stdc++.h>
#define lld long long

using namespace std;


int  n, i, j;

double arr[1004], avg, outp, outn, tot, d;

int main(void)
{

while(scanf("%d",&n) && n){
        tot=0;
    for(i=0; i<n; i++){
        scanf("%lf", &arr[i]);
        tot+= arr[i];
    }

  avg=tot/n;

   outp=0;
   outn=0;

  for(i=0; i<n; i++){

        d = (long)((avg - arr[i])*100.0) /100.00;
       if(d>0)
        outp += d;
       else
        outn += d;

  }
outn = -outn;

  printf("$%0.2lf\n", (outn>outp ? outn : outp));

}



    return 0;
}
