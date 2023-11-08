// Monica soliman
// msoliman14@csu.fullerton.edu
// @monica-ss1
// Partners: @ryankossick

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // done: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() <= 1) {
    std::cout << "Error: At least one command line argument is required.\n";
    return 1;
  }
  // done: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum = 0;
  for (int i = 1; i < argc; ++i) {
    sum += std::stod(arguments[i]);
  }
  double average = sum / (argc - 1);
  std::cout << "average = " << average << "\n";
  // done: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // done: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
