    #include<bits/stdc++.h>
    using namespace std;
    const int maxn = 1022, mod = 1e9 + 7;
    int fac[maxn];
    int mod_exp(int n, int p)
    {
        if(p==-1) p=mod-2;
        int ret = 1;
        while(p){
            if(p&1) ret = (ret*1LL*n)%mod;
            p>>=1;
            n=(n*1LL*n)%mod;
        }
        return ret;
    }
    void init()
    {
        fac[0] = 1;
        for(int i=1;i<maxn;i++) fac[i] = (fac[i-1]*1LL*i)%mod;
    }
    int nCr(int n, int r)
    {
        return ((fac[n]*1LL*mod_exp(fac[r], -1))%mod)*mod_exp(fac[n-r], -1)%mod;
    }
    int main()
    {
        int n, m;
        init();
        cin>>n>>m;
        cout << nCr(n+2*m-1, n-1);
        return 0;
    }
