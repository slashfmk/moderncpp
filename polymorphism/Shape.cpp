//
// Created by Yannick Fumukani on 9/9/21.
//

#include "../headers/Shape.h"

Shape::Shape(int w, int h){
    this->height = h;
    this->width = w;
}

int Shape::getWidth() const {
    return width;
}

void Shape::setWidth(int width) {
    // Shape::width = width;
    this->width = width;
}

int Shape::getHeight() const {
    return height;
}

void Shape::setHeight(int height) {
    this->height = height;
}

Shape::~Shape() {
    delete(this);
    std::cout<<"Object deleted!!"<<endl;
}
