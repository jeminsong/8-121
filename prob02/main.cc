// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <vector>

#include "pet.h"

int main() {
  std::vector<Pet> pets;

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

      Pet new_pet(name, species, breed_name, color, weight);

      pets.push_back(new_pet);
    }
  } while (name != "q");

  std::cout << "Printing Pets:\n";
  for (const auto& pet : pets) {
    pet.Print();
    std::cout << std::endl;
  }
  return 0;
}