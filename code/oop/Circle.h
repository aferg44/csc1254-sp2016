#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

  public:
    // Coordinates and radius
    float x, y, r;

    float area();
    float circumference();
    void  describe();

};

#endif
