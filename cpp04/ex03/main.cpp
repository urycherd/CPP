#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    Point a(0.0f, 0.0f);
    Point b(1.0f, 0.0f);
    Point c(0.0f, 1.0f);

    Point point(0.5f, 0.49f);

    // Check if the point is inside the triangle
    if (bsp(a, b, c, point)) {
        std::cout << "Success\n";
    } else {
        std::cout << "Failure\n";
    }

    Point edgePoint(0.5f, 0.5f);

    // Check if the point is on the boundary of the triangle
    if (bsp(a, b, c, edgePoint)) {
        std::cout << "Failure\n";
    } else {
        std::cout << "Success\n";
    }

    Point outsidePoint(0.5f, 0.51f);

    // Check if the point is outside the triangle
    if (bsp(a, b, c, outsidePoint)) {
        std::cout << "Failure\n";
    } else {
        std::cout << "Success\n";
    }

    return 0;
}