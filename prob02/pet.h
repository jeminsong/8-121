// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#ifndef PET_H
#define PET_H

#include <string>

#include "breed.h"

class Pet {
 private:
  std::string name_;
  Breed breed_;
  double weight_;

 public:
  Pet();

  Pet(const std::string& name, const Breed& breed, double weight);

  Pet(const std::string& name, const std::string& species,
      const std::string& breed_name, const std::string& color, double weight);

  std::string GetName() const;
  Breed GetBreed() const;
  double GetWeight() const;

  void SetName(const std::string& name);
  void SetBreed(const Breed& breed);
  void SetBreed(const std::string& species, const std::string& breed_name,
                const std::string& color);
  void SetWeight(double weight);

  void Print() const;
};

#endif