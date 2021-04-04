#include<bits/stdc++.h>
#define pi acos(-1.0)
#define read(i) scanf("%d", &i)
#define mem(a, b) memset(a, b, sizeof(a))
using namespace std;
typedef long long ll;
typedef long double ld;

ld distnc(ld x1, ld y1, ld x2, ld y2){
      return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

ld area(ld a, ld r){
      ld ar1, ar2;
      ar1=0.5*r*r*sin(a);
      ar2=0.5*a*r*r;
      return ar2-ar1;
}

ld func(ld x1, ld y1, ld r1, ld x2, ld y2, ld r2, ld d){
      ld a1, a2;
      a1=2.0*acos((r1*r1+d*d-r2*r2)/(2.0*r1*d));
      a2=2.0*acos((r2*r2+d*d-r1*r1)/(2.0*r2*d));
      return area(a1, r1)+area(a2, r2);
}

int main(){
      int i, j, k;
      ld x1, y1, r1;
      ld x2, y2, r2;
      ld d;
      cin >> x1 >> y1 >> r1;
      cin >> x2 >> y2 >> r2;
      cout << setprecision(10) << fixed;
      d=distnc(x1, y1, x2, y2);
      if(d>=(r1+r2)) cout << 0 << endl;
      else if(d+min(r1, r2)<=max(r1, r2)) cout << min(pi*r1*r1, pi*r2*r2) << endl;
      else{
            cout << func(x1, y1, r1, x2, y2, r2, d) << endl;
      }
      return 0;
}

