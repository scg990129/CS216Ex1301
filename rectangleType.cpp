//
// Created by Jacob Yeung on 10/11/23.
//

#include "rectangleType.h"

rectangleType::rectangleType(double h, double w) {
    height = h;
    width = w;
}

bool rectangleType::operator==(const rectangleType& other) const{
    return this->height * this->width ==
           other.height * other.width;
}

bool rectangleType::operator!=(const rectangleType& other) const{
    return this->height * this->width !=
           other.height * other.width;
}

