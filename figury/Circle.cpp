#include "Circle.h"
#include "math.h"

const float PI = 3.14;
Circle::Circle(string name, float r) : Figure(name)
{
    m_r = r;
    m_area = PI * m_r * m_r;
    m_perimeter = 2 * PI * m_r;
}

float Circle::Area() const
{
    return m_area;
}

float Circle::Perimeter() const
{
    return m_perimeter;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Dimension: (radius) " << m_r << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}
