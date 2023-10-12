//
// Created by Jacob Yeung on 10/11/23.
//

#ifndef UNTITLED_RECTANGLETYPE_H
#define UNTITLED_RECTANGLETYPE_H

class rectangleType {
protected:
    double height, width;
public:
    rectangleType(double h = 0, double w = 0);
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;

//    rectangleType& operator++() const;
//    rectangleType operator++(const int number) const;
//    rectangleType operator*(const rectangleType& other) const;
//    bool operator==(const rectangleType& other) const;
//    bool operator!=(const rectangleType& other) const;
//    bool operator>>(const rectangleType& other) const;
//    bool operator<<(const rectangleType& other) const;
};


#endif //UNTITLED_RECTANGLETYPE_H
