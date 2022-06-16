// @file      main.cpp
// @author    Ignacio Vizzo     [ivizzo@uni-bonn.de]
//
// Copyright (c) 2019 Ignacio Vizzo, all rights reserved
#include <iostream>

#include "ipb_arithmetic.hpp"

using std::cout;
using std::endl;

int main()
{
  cout << "The sum is "
       << " = " << MySum(1.0, 1.0) << endl
       << "The sub is " << MySubtract(1.0, 1.0) << endl;

  return 0;
}
