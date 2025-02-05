// Copyright 2025 Landon Davidson
// landond@uw.edu

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace vector333 {
class Vector {
 public:
  // Construct vector with coords all at zero
  Vector();
  // Construct vector with each coord as the given value
  Vector(double x, double y, double z);
  // Copy each value from src.coords to this.coords
  Vector(const Vector& src);
  // Deallocate the coords array
  ~Vector();

  // Copy each value from src.coords to this.coords
  Vector& operator=(const Vector &src);
  // Set each value of this.coords to this.coords[i] + src.coords[i]
  Vector& operator+=(const Vector &src);
  // Set each value of this.coords to this.coords[i] - src.coords[i]
  Vector& operator-=(const Vector &src);

  // Print the coords of src in the format "(x,y,z)"
  friend std::ostream& operator<<(std::ostream &out, const Vector &src);
  // Scale each coord of the vector by the given double
  friend Vector operator*(const Vector &a, double b);
  friend Vector operator*(double a, const Vector &b);
  // Return the dot product of a * b
  friend double operator*(const Vector &a, const Vector &b);

 private:
  double *coords_ = nullptr;
};  // Vector

  // Return a new vector with coords[i] = a.coords[i] + b.coords[i]
  Vector operator+(const Vector &a, const Vector &b);
  // Return a new vector with coords[i] = a.coords[i] - b.coords[i]
  Vector operator-(const Vector &a, const Vector &b);


}  // namespace vector333

#endif  // VECTOR_H_
