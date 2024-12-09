#include <stdio.h>

#include <stdbool.h>


bool isPrime(int num) {

if (num <= 1) return false;

for (int i = 2; i * i <= num; i++) {

if (num % i == 0) return false;

}

return true;

}


int digitSum(int num) {

int sum = 0;

while (num > 0) {

sum += num % 10;

num /= 10;

}

return sum;

}


int main() {

printf("Searching for a prime number whose digit sum is odd...\n");

for (int i = 2; i <= 1000; i++) {

if (isPrime(i)) {

int sum = digitSum(i);

if (sum % 2 != 0) {

printf("Found a prime number %d whose digit sum %d is odd.\n", i, sum);

break; // Stop at the first found example

}

}

}

return 0;

}
