    #include<iostream>
    using namespace std;
    int a[3000],n,p,i,j;
    int main(){
       cin>>n;
       for(i=2;i<=n;i++){
           for(j=2;j<i;j++){
               if(a[j]==0 && i%j==0){
                   a[i]++;
               }
           }
           if(a[i]==2){
               p++;
           }
       }
       cout<<p;
        return 0;
    }
