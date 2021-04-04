   #include<bits/stdc++.h>
   #define godspeed() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   #define ll long long
    using namespace std;

    int main()
    {

        godspeed()
        ll a[1001],t,n,x,y,q,i,j,k;
        char ch;

        cin >> t;

        for (int l = 1; l<= t; l++)
            {
            cin >>n>>q;


            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
            }

            for (int k = 0; k < q; k++)
                {

                cin >> ch;

                    if(ch=='S')
                    {

                    cin >> x;
                    for (int i = 0;i< n; i++)
                    {
                            a[i] += x;
                    }
                    }



                     else if(ch=='M')
                     {

                        cin >> x;
                        for (int i = 0; i < n; i++)
                            {
                            a[i] *= x;
                           }

                     }

                        else if(ch=='D')
                        {


                        cin >> x;
                        for (int i = 0; i < n; i++)
                        {
                            a[i] /= x;
                        }

                        }

                   else if(ch=='R')
                        {


                        for (int i = 0, j = n-1; i < j; i++, j--)
                        {
                            swap(a[i], a[j]);
                        }
                        }

                    else if(ch=='P')
                    {

                      cin >> x>>y;

                        swap(a[x], a[y]);
                    }

                }



       for (int i = 0; i < n; i++)
        {
            printf("%lld", a[i]);
            if(i != n-1) {
                printf(" ");
            }

            else {
                printf("\n");
            }

        }

    }
    }
