//
// Created by Yannick Fumukani on 9/9/21.
//

#include "../headers/Rectangle.h"

Rectangle::Rectangle(int w, int h) : Shape(w, h) {
}

double Rectangle::perimeter() const {
    return (this->width + this->height) * 2;
}


