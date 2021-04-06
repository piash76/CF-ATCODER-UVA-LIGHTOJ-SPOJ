
bool chek(string s)
{
    ll l = s.size();
    stack<char> ch;
    for (char i : s)
    {
        if (i == '(')
            ch.push('(');
        else if (!ch.empty() and i == ')')
            ch.pop();
        else
            return 0;
    }
    return (ch.empty());
}
