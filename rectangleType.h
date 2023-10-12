//
// Created by Jacob Yeung on 10/11/23.
//

#ifndef UNTITLED_RECTANGLETYPE_H
#define UNTITLED_RECTANGLETYPE_H

class rectangleType {
protected:
    int height, width;
public:
    rectangleType(int h = 0, int w = 0);
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;

    rectangleType& operator++(); //is correct. It is a prefix increment operator,
    const rectangleType operator++(int number);
    rectangleType& operator--(); //is correct. It is a prefix increment operator,
    const rectangleType operator--(int number);

    rectangleType operator+(const rectangleType& other) const;
    rectangleType operator-(const rectangleType& other) const;
};


#endif //UNTITLED_RECTANGLETYPE_H
