// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>

#include "Vector.h"

namespace vector333 {
  Vector::Vector() {
    // Allocate the array on the heap and initialize to 0
    coords_ = new double[3];
    coords_[0] = 0;
    coords_[1] = 0;
    coords_[2] = 0;
  }

  Vector::Vector(double x, double y, double z) {
    // Allocate the array on the heap and initialize to the given values
    coords_ = new double[3];
    coords_[0] = x;
    coords_[1] = y;
    coords_[2] = z;
  }

  Vector::Vector(const Vector &src) {
    // Allocate the array on the heap and copy each value from src
    coords_ = new double[3];
    coords_[0] = src.coords_[0];
    coords_[1] = src.coords_[1];
    coords_[2] = src.coords_[2];
  }

  Vector::~Vector() {
    // Deallocate the coords_ array from heap
    delete[] coords_;
  }

  Vector& Vector::operator=(const Vector &src) {
    // If src is this then return early
    if (this == &src) {
      return *this;
    }
    // Copy each value from src to this
    coords_[0] = src.coords_[0];
    coords_[1] = src.coords_[1];
    coords_[2] = src.coords_[2];
    return *this;
  }

  Vector& Vector::operator+=(const Vector &src) {
    // Add each value from src to this
    coords_[0] += src.coords_[0];
    coords_[1] += src.coords_[1];
    coords_[2] += src.coords_[2];
    return *this;
  }

  Vector& Vector::operator-=(const Vector &src) {
    // Subtract each value from src from this
    coords_[0] -= src.coords_[0];
    coords_[1] -= src.coords_[1];
    coords_[2] -= src.coords_[2];
    return *this;
  }

  std::ostream& operator<<(std::ostream &out, const Vector &src) {
    // Print in the format "(x,y,z)"
    out << "(" << src.coords_[0] << ","
        << src.coords_[1] << "," << src.coords_[2] << ")";
    return out;
  }

  Vector operator*(const Vector &a, double b) {
    // Store each coord of a multiplied by b and
    // return them inside a Vector object tmp
    double x = a.coords_[0] * b;
    double y = a.coords_[1] * b;
    double z = a.coords_[2] * b;
    Vector tmp(x, y, z);
    return tmp;
  }

  Vector operator*(double a, const Vector &b) {
    // Store each coord of b multiplied by a and
    // return them inside a Vector object tmp
    double x = b.coords_[0] * a;
    double y = b.coords_[1] * a;
    double z = b.coords_[2] * a;
    Vector tmp(x, y, z);
    return tmp;
  }

  double operator*(const Vector &a, const Vector &b) {
    double product = a.coords_[0] * b.coords_[0];
    product += a.coords_[1] * b.coords_[1];
    product += a.coords_[2] * b.coords_[2];
    return product;
  }

  Vector operator+(const Vector &a, const Vector &b) {
    // Copy a to tmp, add b to tmp, and return tmp
    Vector tmp = a;
    tmp += b;
    return tmp;
  }

  Vector operator-(const Vector &a, const Vector &b) {
    // Copy a to tmp, subtract b from tmp, and return tmp
    Vector tmp = a;
    tmp -= b;
    return tmp;
  }

}  // namespace vector333
