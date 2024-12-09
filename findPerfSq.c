#include <stdio.h>


int main() {

int start, end;

printf("Enter the range of numbers (start and end): ");

scanf("%d %d", &start, &end);


printf("\nPerfect squares in the range that end with digits other than 0, 1, 4, 5, 6, or 9:\n");

int found = 0;

for (int i = start; i <= end; i++) {

int square = i * i;

int lastDigit = square % 10;

if (lastDigit != 0 && lastDigit != 1 && lastDigit != 4 &&

lastDigit != 5 && lastDigit != 6 && lastDigit != 9) {

printf("%d (Square of %d)\n", square, i);

found = 1;

}

}


if (!found) {

printf("No such perfect squares found in the given range.\n");

}



return 0;
}
