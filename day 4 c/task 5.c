#include <stdio.h>

int main() {
  float principal, rate, time, simple_interest;

  // Get the principal amount, rate of interest, and time period from the user.
  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  printf("Enter the rate of interest: ");
  scanf("%f", &rate);

  printf("Enter the time period in years: ");
  scanf("%f", &time);

  // Calculate the simple interest.
  simple_interest = (principal * rate * time) / 100;

  // Print the simple interest.
  printf("Simple interest: %f\n", simple_interest);

  return 0;
}