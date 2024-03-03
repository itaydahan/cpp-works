#include <ostream>
class Point {
	int x;
	int y;
public:
	Point(int x1, int y1);
	int GetX() const;
	int GetY() const;
	bool operator==(const Point& p1) const;
	bool operator!=(const Point& p1) const;
	Point& operator=(const Point& p1);
	friend std::ostream& operator<<(std::ostream& os, const Point& p);


};
