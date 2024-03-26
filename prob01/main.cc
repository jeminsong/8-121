// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "car.h"

int main() {
  Car c1;
  c1.Print();
  std::cout << "\n";

  VehicleId honda_id("Honda", 3, "7B319X4");
  Car c2(honda_id);
  c2.Print();
  std::cout << "\n";

  Date date(4, 11, 2018);
  Car c3(date);
  c3.Print();
  std::cout << "\n";

  Car c4(honda_id, date);
  c4.Print();
  std::cout << "\n";

  VehicleId default_id;
  Date default_date;
  c4.SetId(default_id);
  c4.SetReleaseDate(default_date);
  c4.Print();
  return 0;
}
