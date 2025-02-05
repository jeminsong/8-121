// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#ifndef CAR_H
#define CAR_H

#include "date.h"
#include "vehicleid.h"

class Car {
 private:
  VehicleId id_;
  Date release_date_;

 public:
  Car();

  Car(const VehicleId& id);

  Car(const Date& release_date);

  Car(const VehicleId& id, const Date& release_date);

  VehicleId GetId() const;

  void SetId(const VehicleId& id);

  Date GetReleaseDate() const;

  void SetReleaseDate(const Date& release_date);

  void Print() const;
};

#endif  // CAR_H
