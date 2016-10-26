#include "Matrix.h"

class Point : public Matrix
{
    public:
    double &x, &y, &z;
    Point(int a=0, int b=0, int c=0) : Matrix(3,1), x(elementAt[0][0]), y(elementAt[1][0]), z(elementAt[2][0])
    {
        //std::cout << r << c << " "<< std::endl;
        elementAt[0][0]= a;
        elementAt[1][0]= b;
        elementAt[2][0]= c;
    }
};