// Jemin Song
// CPSC 121L-02
// 3/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "car.h"

#include <iostream>

Car::Car() {}

Car::Car(const VehicleId& id) : id_(id) {}

Car::Car(const Date& release_date) : release_date_(release_date) {}

Car::Car(const VehicleId& id, const Date& release_date)
    : id_(id), release_date_(release_date) {}

VehicleId Car::GetId() const { return id_; }

Date Car::GetReleaseDate() const { return release_date_; }

void Car::SetId(const VehicleId& id) { id_ = id; }

void Car::SetReleaseDate(const Date& release_date) {
  release_date_ = release_date;
}

void Car::Print() const {
  std::cout << "The model of the car is: " << id_.GetModel() << std::endl;
  std::cout << "The VIN of the car is: " << id_.GetVin() << std::endl;
  std::cout << "The license plate of the car is: " << id_.GetLicensePlate()
            << std::endl;
  std::cout << "The release date of the car is: " << release_date_.GetMonth()
            << "/" << release_date_.GetDay() << "/" << release_date_.GetYear()
            << std::endl;
}
