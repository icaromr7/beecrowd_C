#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int soma=0;
for(int i=n; i>0; i--)
{
if(i>=100000) soma+=6;
else if(i>=10000) soma+=5;
else if(i>=1000) soma+=4;
else if(i>=100) soma+=3;
else if(i>=10) soma+=2;
else soma++;
}
cout<<soma<<endl;
}
