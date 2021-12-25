#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void primes(long long n) {
  long long i;
  long long j;
  bool *numbers = malloc((n+1) * sizeof(bool));
  
  numbers[2] = true;
  printf("%d ", 2);

  for(i = 3; i <= n; i+=2) {
    if (numbers[i]) { continue; }
    printf("%ld ", i);
    for(j = i*2; j <= n; j+=i) {
      numbers[j] = true;
    }
  }
  free(numbers);
  printf("\n");
}

int main(int argc, char **argv) {
  if(argc!=2) {
    return 1;
  }
  long long n = atoi(argv[1]);
  if(argc<=1) {
    return 1;
  }
  primes(n);
  return 0;
}
