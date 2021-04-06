
///https://codeforces.com/blog/entry/18169
///https://www.youtube.com/watch?v=efL86JCONH0&list=PL2q4fbVm1Ik7ip1VkWwe5U_CEb93vw6Iu
///https://www.youtube.com/watch?v=mT8NAhIL3xQ&list=PLX0iyO9CrCF37xH1TjkmlHs5VMA5MWjme&index=2

///ith bit is set or not
bool  checking_ith_bit(ll n,ll i)
{
    //if(n&1<<i) true;
    //else return false;
    return n&(1<<i);

}

void getting_ith_bit(ll n)
{
    ll bit=(n>>i)&1;

}

///counting set bit
ll counting_set_bit(ll n)  ///log(n)
{
    ll f=1,cnt=0;
    while(n>0)
    {
        if(n&f) cnt++;
        n=n>>1;   ///cz n is everytime divided n/2^1
    }
    ///if(cnt==1) it is power of two cz power of two has only one set bit
    return cnt;
}

bool even(ll n)
{
    if(n&1) return false;///it is odd
    else return true;
}

ll no_of_element_which_comes_only_once()
{
    ///simply xor over the array
}

ll minimum_bit_to_flips_to_equal_a_and_b(ll a,ll b)
{
    ///simply x=a^b
    /// counting the set bits of x
}

bool is_power_of_two(ll n)
{
    ll x=n&(n-1);
    if(x==0) return true;
    else return false;
}
ll swaping(ll a,ll b)
{
    a=a^b;
    b=b^a;
    a=a^b;
}

///precedence
NOT ( ~ ) highest
AND ( & )
XOR ( ^ )
OR ( | ) lowest

///basic operation
X & 1 =  X; X & 0 =  0
X | 1 =  1; X | 0 =  X
X ^ 1 = ~X; X ^ 0 =  X







///for dp
ll to_set(ll n,ll i) ///set the ith bit
{
    return n|=(1<<i);
}
ll to_reset(ll n,ll i)
{
    return n&=~(1<<i);
}
///ith bit is set or not
bool is_on(ll n,ll i)
{
    return n&(1<<i);

}



ll to_toggle(ll n,ll i)
{
    return n^=(1<<i);
}
ll reset_the_last_set_bit(ll n)
{
    return n&(n-1);
}

///





///properties of xor

1.0^a=a
2.a^a=0
3.ordering of xor doesnot matter


4. Add the jth object to the subset (set the jth bit from 0 to 1):
     use the bitwise OR operation A |= (1 << j).

     For example:     A = 34 (base 10) = 100010 (base 2)
                      j = 3, 1 << j    = 001000 <- bit ‘1’ is shifted to the left 3 times
                                        -------- OR (true if either of the bits is true)
                      A = 42 (base 10) = 101010 (base 2) /// update A to this new value 42


ll to_set(ll n,ll i) ///set the ith bit
{
    return n|=(1<<i)
}





5. Remove the jth object from the subset (set the jth bit from 1 to 0):
     use the bitwise AND operation A &= ~(1 << j).

     For example:         A = 42 (base 10) = 101010 (base 2)
                          j = 1, ~(1 << j) = 111101 <- ‘~’ is the bitwise NOT operation
                                             -------- AND
                          A = 40 (base 10) = 101000 (base 2) // update A to this new value 40

ll to_reset(ll n,ll i)
{
    return n&=~(1<<i);
}



6. To toggle (flip the status of) the j-th item of the set:
   use the bitwise XOR operation A ∧ = (1 << j).

   For example:       A = 40 (base 10) = 101000 (base 2)
                      j = 2, (1 << j)  = 000100 <- bit ‘1’ is shifted to the left 2 times
                                        -------- XOR <- true if both bits are different
                      A = 44 (base 10) = 101100 (base 2) /// update A to this new value 44


ll to_toggle(ll n,ll i)
{
    return n^=(1<<i);
}


8. To turn on all bits in a set of size n: (be careful with overflows)
   use A = (1 << n) - 1 ;

9. Iterate through all subsets of a set of size n:
           `for ( x = 0; x < (1 << n); ++x )`

