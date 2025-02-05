// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>

#include "Vector.h"

int main(int argc, char** argv) {
  // Initialize three vectors
  vector333::Vector v1(1, 2, 3);
  vector333::Vector v2(4, 5, 6);
  vector333::Vector v3;

  // Print initial values
  std::cout << "(1, 2, 3) = " << v1 << "\n";
  std::cout << "(4, 5, 6) = " << v2 << "\n";
  std::cout << "(0, 0, 0) = " << v3 << "\n";

  // Add + vectors
  std::cout << "(1, 2, 3) + (4, 5, 6) = " << v1 + v2 << "\n";
  std::cout << "(4, 5, 6) + (1, 2, 3) = " << v2 + v1 << "\n";

  // Subtract - vectors
  std::cout << "(4, 5, 6) - (1, 2, 3) = " << v2 - v1 << "\n";
  std::cout << "(1, 2, 3) - (4, 5, 6) = " << v1 - v2 << "\n";

  // Scalar multiplication
  std::cout << "(1, 2, 3) * 2 = " << v1 * 2 << "\n";
  std::cout << "5 * (1, 2, 3) = " << 5 * v1 << "\n";

  // Dot product Vector * Vector
  std::cout << "(1, 2, 3) * (0, 0, 0) = " << v1 * v3 << "\n";
  std::cout << "(4, 5, 6) * (1, 2, 3) = " << v2 * v1 << "\n";

  // Copy and initialize new Vectors
  vector333::Vector v4 = v1 + v2;
  vector333::Vector v5;
  v5 = v1 * 4;

  // Print initial values
  std::cout << "(1, 2, 3) + (4, 5, 6) = " << v4 << "\n";
  std::cout << "(1, 2, 3) * 4 = " << v5 << "\n";

  // Increment += Vectors
  v1 += v5;
  std::cout << "(1, 2, 3) += (4, 8, 12): " << v1 << "\n";

  // Decrement -= Vectors
  v2 -= v4;
  std::cout << "(4, 5, 6) -= (5, 7, 9): " << v2 << "\n";
}
