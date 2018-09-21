#include <iostream>
using namespace std;
int gcd(int a ,int b)
{
int r=0;
    if (b==0)
        return a;
    else {
   r=a%b;
    return gcd(b,r);
    }
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a,b) << endl;
  return 0;
}
