   #include<bits/stdc++.h>

    using namespace std;
    int main()
    {
    int num;

    cin >> num;
    int ones_digit = num%10;
    int tens_digit = num/10;
    if ((num>=20) && (num<100))
    {
    switch (tens_digit)
    {
    case 2:
    cout << "twenty";
    break;
    case 3:
    cout << "thirty";
    break;
    case 4:
    cout << "forty";
    break;
    case 5:
    cout << "fifty";
    break;
    case 6:
    cout << "sixty";
    break;
    case 7:
    cout << "seventy";
    break;
    case 8:
    cout << "eighty";
    break;
    case 9:
    cout << "ninety";
    break;
    default:
    cout << "Error ";
    }
    switch (ones_digit)
    {
    case 0:
    cout << " ";
    break;
    case 1:
    cout << "-one";
    break;
    case 2:
    cout << "-two";
    break;
    case 3:
    cout << "-three";
    break;
    case 4:
    cout << "-four";
    break;
    case 5:
    cout << "-five";
    break;
    case 6:
    cout << "-six";
    break;
    case 7:
    cout << "-seven";
    break;
    case 8:
    cout << "-eight";
    break;
    case 9:
    cout << "-nine";
    break;
    default:
    cout << "Error ";
    }
    }



    else if ((num >= 10) && (num <= 19))
    {
    switch (num)
    {
    case 10:
    cout << "ten";
    break;
    case 11:
    cout << "eleven";
    break;
    case 12:
    cout << "twelve";
    break;
    case 13:
    cout << "thirteen";
    break;
    case 14:
    cout << "fourteen";
    break;
    case 15:
    cout << "fifteen";
    break;
    case 16:
    cout << "sixteen";
    break;
    case 17:
    cout << "seventeen";
    break;
    case 18:
    cout << "eighteen";
    break;
    case 19:
    cout << "nineteen";
    break;
    default:
    cout << " Error ";
    }
    }
    else if(num>=0 && num<=9)
    {
    switch (ones_digit)
    {
    case 0:
    cout <<"zero";
    break;
    case 1:
    cout << "one";
    break;
    case 2:
    cout << "two";
    break;
    case 3:
    cout << "three";
    break;
    case 4:
    cout << "four";
    break;
    case 5:
    cout << "five";
    break;
    case 6:
    cout << "six";
    break;
    case 7:
    cout << "seven";
    break;
    case 8:
    cout << "eight";
    break;
    case 9:
    cout << "nine";
    break;
    default:
    cout << "Error ";
    }
    }
    return 0;
    }
