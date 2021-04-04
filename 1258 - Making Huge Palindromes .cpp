#include<bits/stdc++.h>

using namespace std;

int f[1000002];

void kmp_preprocess(string pattern)
{
    int m=pattern.size();
    f[0]=0;

    int j=0;

    for(int i=1;i<m;i++)
    {
        if(pattern[i]==pattern[j])
        {
            f[i]=j+1;
            j++;
        }
        else
        {
            while(j!=0)
            {
                j=f[j-1];
                if(pattern[i]==pattern[j])
                {
                    f[i]=j+1;
                    j++;
                    break;
                }
            }
        }
    }
}

int kmp(string text,string pattern)
{
    int j=0;

    int n=text.size();
    int m=pattern.size();

    for(int i=0;i<n;i++)
    {
        if(text[i]==pattern[j])
        {

            j++;
        }
        else
        {
            while(j!=0)
            {
                j=f[j-1];

                if(text[i]==pattern[j])
                {
                    j++;
                    break;
                }
            }
        }
    }
    return j;
}


int main()
{

string text,pattern;

 int n,p,q;
 scanf("%d",&n);

 for(int ca=1;ca<=n;ca++)
 {
     cin>>text;

     pattern=text;
     reverse(pattern.begin(),pattern.end());
     memset(f,0,sizeof(f));
    kmp_preprocess(pattern);

     p=kmp(text,pattern);
     q=pattern.size();
     q=2*q - p ;
     printf("Case %d: %d\n",ca,q);
 }


}
