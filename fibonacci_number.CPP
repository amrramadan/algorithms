#include <iostream>
#include <cassert>
#include <math.h>
using namespace std;

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {

    int x=0 ;

    x=(1/sqrt(5))*((pow((1+sqrt(5))/2,n))-(pow((1-sqrt(5))/2,n)));
    if(n==2)
    return x=1;
    else return x;
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    cin >> n;
   // cout << fibonacci_naive(n) << '\n';
  // test_solution();
   cout << fibonacci_fast(n) << '\n';
    return 0;
}
