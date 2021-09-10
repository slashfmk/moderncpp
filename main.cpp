

#include <iostream>
#include <vector>
#include "headers/Shape.h"
#include "headers/Square.h"
#include "headers/Rectangle.h"

using namespace std;

double getPerim(const Shape &shape);

int main() {

    vector<Shape> myShapes;

    Rectangle rect{10, 30};
    Square square (10, 30);

    auto *rect2 = new Rectangle(10, 25);

    cout<<"Value: "<<getPerim(square)<<endl;
    cout<<"Value: "<<getPerim(rect)<<endl;
    cout<<"Value: "<<getPerim(*rect2)<<endl;

    return 0;
}

double getPerim(const Shape &shape) {
    return shape.perimeter();
}
