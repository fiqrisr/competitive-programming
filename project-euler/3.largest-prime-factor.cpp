/* URL https://projecteuler.net/problem=3 */

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long n) {
  if (n == 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }

  return true;
}

long getLargestPrimeFactor(long num) {
  long max = 0;

  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0) {
      if (isPrime(i))
        max = i;
    }
  }

  return max;
}

int main() {
  long num = 600851475143;
  long max = getLargestPrimeFactor(num);

  cout << max << endl;
  return 0;
}
