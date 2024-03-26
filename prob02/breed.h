// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
#ifndef BREED_H
#define BREED_H

#include <string>

class Breed {
 private:
  std::string species_;
  std::string breed_name_;
  std::string color_;

 public:
  Breed() : species_("Dog"), breed_name_("Pug"), color_("Fawn") {}

  Breed(const std::string& species, const std::string& breed_name,
        const std::string& color)
      : species_(species), breed_name_(breed_name), color_(color) {}

  std::string GetSpecies() const { return species_; }

  std::string GetBreedName() const { return breed_name_; }

  std::string GetColor() const { return color_; }

  void SetSpecies(const std::string& species) { species_ = species; }

  void SetBreedName(const std::string& breed_name) { breed_name_ = breed_name; }

  void SetColor(const std::string& color) { color_ = color; }
};

#endif