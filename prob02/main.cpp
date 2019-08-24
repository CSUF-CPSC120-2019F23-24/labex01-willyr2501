// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> 135;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> 0.45;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "Congratulations! You have earned $60.75 for the organization!" << pay << std::endl;

  return 0;
}
