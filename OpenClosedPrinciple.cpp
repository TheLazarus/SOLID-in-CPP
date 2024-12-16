class Shape {
    public:
        virtual double area() const = 0;
};


class Square : public Shape {
    double side;

    public:
        Square(double s): side(s) {};

        double area() const override {
            return side * side;
        }
};

class Circle : public Shape {
    double radius;

    public:
        Circle(double r): radius(r) {};

        double area() const override {
            return 3.14 * radius * radius;
        }

};

