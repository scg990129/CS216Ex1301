//
// Created by Jacob Yeung on 10/11/23.
//

#include "rectangleType.h"
#include <iostream>

rectangleType::rectangleType(int h, int w) {
    this->height = h;
    this->width = w;
}

bool rectangleType::operator==(const rectangleType& other) const{
    return this->height * this->width ==
           other.height * other.width;
}

bool rectangleType::operator!=(const rectangleType& other) const{
    return this->height * this->width !=
           other.height * other.width;
}

bool rectangleType::operator>=(const rectangleType& other) const{
    return this->height * this->width >=
           other.height * other.width;
}
bool rectangleType::operator<=(const rectangleType& other) const{
    return this->height * this->width <=
           other.height * other.width;
}
bool rectangleType::operator>(const rectangleType& other) const{
    return this->height * this->width >
           other.height * other.width;
}
bool rectangleType::operator<(const rectangleType& other) const{
    return this->height * this->width <
           other.height * other.width;
}

rectangleType& rectangleType::operator++(){ //is correct. It is a prefix increment operator,
    ++this->height;
    ++this->width;
    return *this;
}

const rectangleType rectangleType::operator++(int number) {
    rectangleType temp(this->height, this->width);
    ++this->height;
    ++this->width;
    return temp;
}

rectangleType& rectangleType::operator--(){ //is correct. It is a prefix increment operator,
    if(this->height == 0 || this->width == 0){
        std::cout << "Error: height or width is 0" << std::endl;
    }

    this->height -= this->height == 0 ? 0 : 1;
    this->width -= this->width == 0 ? 0 : 1;
    return *this;
}

const rectangleType rectangleType::operator--(int number) {
    rectangleType temp(this->height, this->width);


    if(this->height == 0 || this->width == 0){
        std::cout << "Error: height or width is 0" << std::endl;
    }

    this->height -= this->height == 0 ? 0 : 1;
    this->width -= this->width == 0 ? 0 : 1;

    return temp;
}
