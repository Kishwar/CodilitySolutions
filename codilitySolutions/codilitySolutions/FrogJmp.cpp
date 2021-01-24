//
//  FrogJmp.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include "FrogJmp.hpp"

#include <math.h>

int FrogJmpsolution(int X, int Y, int D) {
    return ceil((Y-X)/double(D));
}
