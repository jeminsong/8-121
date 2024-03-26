// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "pet.h"

#include <iomanip>
#include <iostream>

Pet::Pet() : name_("Doug"), weight_(15.6) {}

Pet::Pet(const std::string& name, const Breed& breed, double weight)
    : name_(name), breed_(breed), weight_(weight) {}

Pet::Pet(const std::string& name, const std::string& species,
         const std::string& breed_name, const std::string& color, double weight)
    : name_(name), breed_(species, breed_name, color), weight_(weight) {}

std::string Pet::GetName() const { return name_; }

Breed Pet::GetBreed() const { return breed_; }

double Pet::GetWeight() const { return weight_; }

void Pet::SetName(const std::string& name) { name_ = name; }

void Pet::SetBreed(const Breed& breed) { breed_ = breed; }

void Pet::SetBreed(const std::string& species, const std::string& breed_name,
                   const std::string& color) {
  breed_.SetSpecies(species);
  breed_.SetBreedName(breed_name);
  breed_.SetColor(color);
}

void Pet::SetWeight(double weight) { weight_ = weight; }

void Pet::Print() const {
  std::cout << "Name: " << name_ << std::endl;
  std::cout << "Species: " << breed_.GetSpecies() << std::endl;
  std::cout << "Breed: " << breed_.GetBreedName() << std::endl;
  std::cout << "Color: " << breed_.GetColor() << std::endl;
  std::cout << "Weight: " << weight_ << " 1bs " << std::endl;
}
