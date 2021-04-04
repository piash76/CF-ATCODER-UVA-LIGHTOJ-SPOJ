    #include<bits/stdc++.h>
   #define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   #define ll long long
    using namespace std;

    int main()
    {
        godspeed()

        ll a[1001],t,n,x,y,q;

        char ch;

        cin >> t;

        for (int ts= 1; ts <= t; ts++)
            {
            cin >>n>>q;


            for (int i = 0; i < n; i++)
                {
                cin >> a[i];
               }

            for (int k = 0; k < q; k++)
                {

                cin >> ch;
                switch(ch)
                {
                    case 'S':
                        cin >> x;
                        for (int i = 0; i < n; i++)
                            {
                            a[i] += x;
                            }

                        break;

                    case 'M':
                        cin >> x;
                        for (int i = 0; i < n; i++)
                        {
                            a[i] *= x;
                        }

                        break;

                    case 'D':
                        cin >> x;
                        for (int i = 0; i < n; i++)
                        {
                            a[i] /= x;
                        }

                        break;

                    case 'R':
                        for (int i = 0, j = n-1; i < j; i++, j--)
                        {
                            swap(a[i], a[j]);
                        }
                        break;

                    case 'P':
                        cin >> x;
                        cin >> y;
                        swap(a[x], a[y]);
                        break;

                }



            }

             printf("Case %d:\n", ts);

        for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";

           }
           cout<<endl;


    }
    }
