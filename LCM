#include <iostream>

long long  gcd(long long a ,long long  b)
{
long long  r=0;
    if (b==0)
        return a;
    else {
   r=a%b;
    return gcd(b,r);
    }
}
long long  lcm (long long  a,long long  b)
{
  return (a*b)/gcd(a, b);
}

int main() {
long long  a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
