    ///Bismillahir Rahmanir Rahim
    #include<bits/stdc++.h>
    using namespace std;
    char s[1009][1009];
    int cnt[35],tmp;
    int a[100009];
    main()
    {
        int n,m,mx=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            scanf("%s",s[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        int ans=0;
        for(int j=0;j<m;j++)
        {   memset(cnt,0,sizeof(cnt));
            mx=0;
            for(int i=0;i<n;i++)
            {
                 tmp=s[i][j]-'A';
                cnt[tmp]++;
                mx=max(mx,cnt[tmp]);
            }
            ans+=mx*a[j];

        }
        cout<<ans<<endl;
        return 0;
    }
