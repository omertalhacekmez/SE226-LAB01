#include <complex>
#include <iostream>

using namespace std;

int Gn(int n, int r) {
   int sum = 0;

   if (n == 0) r++;

   return pow(r, n) + Gn(n - 1, r);
}

int main() {
   int n;
   cout << "Enter number: " << endl;
   cin >> n;
   cout << Gn(3,n);
}