//
// Created by Yannick Fumukani on 9/9/21.
//

#ifndef MODERN_CPP_SQUARE_H
#define MODERN_CPP_SQUARE_H
#include "Shape.h"

class Square :  public Shape {

public:
    Square(int w, int h);
    double perimeter()  const override;

};


#endif //MODERN_CPP_SQUARE_H
