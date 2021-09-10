//
// Created by Yannick Fumukani on 9/9/21.
//

#include "../headers/Square.h"

Square::Square(int w, int h) : Shape(w, h) {

};

double Square::perimeter() const {
    return this->width * this->height;
}