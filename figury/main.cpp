#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Square S1("S1", 5.0);
    Triangle T1("T1", 5 , 5 , 5);
    Circle C1("C1", 3);

    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    T1.Info();
    C1.Info();

    std::cout << "Wykorzystanie wskaźnika" << std::endl;


    Figure* figures[] = { &S1, &R1, &T1, &C1 };

    int size = sizeof(figures) / sizeof(figures[0]);

    for (int i = 0; i < size; i++) {
        figures[i]->Info();
        std::cout << std::endl;
    }


    for (int i = 0; i < size; i++) {
        figures[i]->Info();
        std::cout << std::endl;
    }


    std::cout << "Wykorzystanie referencji" << std::endl;
    Figure& ref_s = S1;
    Figure& ref_r = R1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();

}
