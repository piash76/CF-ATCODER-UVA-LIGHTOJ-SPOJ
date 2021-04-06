string tobase(long long  n, long long base){
    string d;
    if(!n)d.push_back('0');
    while(n){d=(char)('0'+n%base)+d;n=n/base;}
    return d;
}
long long todec(string d, long long base){
    long long res=1,ans=0;
    for(int i=d.size()-1; i>=0; i--){
        ans=ans+(d[i]-'0')*res;
        res*=base;
    }
    return ans;
}
