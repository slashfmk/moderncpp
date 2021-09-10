//
// Created by Yannick Fumukani on 9/9/21.
//

#ifndef MODERN_CPP_RECTANGLE_H
#define MODERN_CPP_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {

public:
    Rectangle( int w, int h);
    double perimeter() const override;

};


#endif //MODERN_CPP_RECTANGLE_H
