// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a vector Pet objects called `pets`.
  //    Don't forget to #include <vector> and "pet.h"
  // ======================================================
  std::string name;
  std::string breed_name;
  std::string species;
  std::string color;
  double weight = 0.0;

  do {
    std::cout << "Please enter the pet's name (q to quit): ";
    std::getline(std::cin, name);
    if (name != "q") {
      std::cout << "Please enter the pet's species: ";
      std::getline(std::cin, species);
      std::cout << "Please enter the pet's breed: ";
      std::getline(std::cin, breed_name);
      std::cout << "Please enter the pet's color: ";
      std::getline(std::cin, color);
      std::cout << "Please enter the pet's weight (lbs): ";
      std::cin >> weight;
      std::cin.ignore();

      // =================== YOUR CODE HERE ===================
      // 2. Create a Pet object using the input from the user
      //    Store the newly-created Pet object into the vector.
      // ======================================================
    }
  } while (name != "q");

  std::cout << "Printing Pets:\n";
  // =================== YOUR CODE HERE ===================
  // 3.  Print information about each pet in the `pets`
  //     vector by writing a loop to access each Pet object.
  // ======================================================
  return 0;
}