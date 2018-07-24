
 /*program  to print the sum of the following series for a given number N
S = 1 + 2^1 + 2^2 + 2^3... 2^N.*/
#include<stdio.h>
#include<math.h>
/*function so it returns 2^x*/
long long int power (long long int x)
{
  return pow (2, x);
}

/*Function so it returns S*/

long long int sum_of_series (long long int N)
{
  long long int S = 0;
  int i;
  for (i = 0; i <= N; i++)
  S = S + pow (2, i);
  return S;
}

int main ()
{
  long long int N, S;
  scanf ("%lld", &N);
  S = sum_of_series (N);
  /*Printing the given series */
  printf ("%lld", S);
  return 0;
}
