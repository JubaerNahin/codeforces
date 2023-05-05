#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   long long int n,m,o,q;
   double a;
   scanf("%lld %lld %lf",&n,&m,&a);
   o=ceil(n/a);
   q=ceil(m/a);
   printf("%lld",q*o);
   return 0;
}