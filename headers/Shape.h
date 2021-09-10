//
// Created by Yannick Fumukani on 9/9/21.
//

#ifndef MODERN_CPP_SHAPE_H
#define MODERN_CPP_SHAPE_H
#include <iostream>
using namespace std;

class Shape {

private:

protected:
    int width;
    int height;


public:
    virtual double perimeter() const = 0;

    Shape(int w, int h);

    int getWidth() const;
    void setWidth(int width);
    int getHeight() const ;
    void setHeight(int height);
    ~Shape();

};


#endif //MODERN_CPP_SHAPE_H
