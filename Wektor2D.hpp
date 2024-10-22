class Wektor2D
{
    // najpierw atrybuty prywatne
private:
    double x;
    double y;

    // potem atrybuty publiczne
public:
    // Konstruktor domyślny o wsp. (0,0)
    Wektor2D() : x(0.0), y(0.0) {}

    // Konstruktor z argumentami
    Wektor2D(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Getter dla x
    double getX() const
    {
        return x;
    }

    // Setter dla x
    void setX(double xVal)
    {
        x = xVal;
    }

    // Getter dla y
    double getY() const
    {
        return y;
    }

    // Setter dla y
    void setY(double yVal)
    {
        y = yVal;
    }

    // Operator dodawania
    Wektor2D operator+(const Wektor2D& other) const
    {
        return Wektor2D(x + other.x, y + other.y);
    }

    // Operator iloczynu skalarnego
    double operator*(const Wektor2D& other) const
    {
        return (x * other.x) + (y * other.y);
    }
};
