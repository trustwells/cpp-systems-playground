#include <iostream>


class Point {
    public:
        constexpr Point(double xVal = 0, double yVal = 0) noexcept
            :
            x{xVal},
            y{yVal}
        { }

        constexpr double getX() const noexcept { return x; }
        constexpr double getY() const noexcept { return y; }

        //C++14, but doesn't work in C++11
        constexpr void setX(double newX) { x = newX; }
        constexpr void setY(double newY) { y = newY; }

    private:
        double x, y;
};

constexpr Point reflection(const Point& p) noexcept
{
    Point result;

    result.setX(-p.getX());
    result.setY(-p.getY());
    return result;
}

constexpr Point midpoint(const Point& p1, const Point& p2) 
{
    return {((p1.getX() + p2.getX()) / 2), ((p1.getY() + p2.getY()) / 2) };
}


int main() {

    constexpr Point p1(9.2, 27.3);
    constexpr Point p2(5.1, 12.7);

    constexpr auto mid = midpoint(p1, p2);
    constexpr auto reflectedMid = reflection(mid);
    std::cout << "Midpoint: " << mid.getX() << ", " << mid.getY() << "\n";


    return 0;


}
