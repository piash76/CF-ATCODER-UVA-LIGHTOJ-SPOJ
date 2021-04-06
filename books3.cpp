    #include<bits/stdc++.h>
    using namespace std;
    main()
    {
     long n,t, nbr=0;
     cin>>n>>t;
     int a[n+1];
     a[0]=0;
     for(long i=1,j=0;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
        while(a[i]-a[j]>t) j++;
        nbr=max(nbr,i-j);
    }

     cout<<nbr;
     return 0;
    }
