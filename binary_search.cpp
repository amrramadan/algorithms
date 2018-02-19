#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a,const int &low,const int &high,int x) {
 if (high >= low)
   {
        int mid = low + (high - low)/2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return binary_search(a, low, mid-1, x);

        else
            return binary_search(a, mid+1, high, x);

   }
   return -1;
}


int main() {
  int n;

  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a,0,n-1,b[i]) << ' ';
  }
}
