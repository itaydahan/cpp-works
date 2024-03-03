#include "Point.h"
#include <ostream>

Point::Point(int x1, int y1){
        this->x = x1;
        this->y = y1;
    }

    int Point::GetX() const {
        return this->x;
    }

    int Point::GetY() const {
        return this->y;
    }

    bool Point::operator==(const Point& p) const {
        return (this->x == p.x) && (this->y == p.y);
    }

    bool Point::operator!=(const Point& p) const {
        return !(*this == p);
    }

    Point& Point::operator=(const Point& p) {
        if (this != &p) {
            this->x = p.x;
            this->y = p.y;
        }
        return *this;
    }

    std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "x: " << p.x << ", y: " << p.y;
        return os;
    }




