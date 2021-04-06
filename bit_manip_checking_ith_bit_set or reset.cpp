


bool  checking_ith_bit(ll n,ll i)
{
    /// bit start with 0;
    ll f=1;
    f=f<<i;
    if(f&n) true;
    else return false;

}
