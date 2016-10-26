#include <cmath>
#include <vector>

class Matrix
{
    public:
    int r, c;
    std::vector < std::vector <double> > elementAt;
    Matrix()
    {
        r = 0;
        c = 0;
    }
    Matrix(int a, int b)
    {
        r = a;
        c = b;
        elementAt.resize(r, std::vector <double>(c,0));
    }
    void init(int a, int b)
    {
        r = a;
        c = b;
        elementAt.clear();
        elementAt.resize(r, std::vector <double>(c,0));
    }
    Matrix operator+ (Matrix a)
    {
        Matrix result(r,c);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result.elementAt[i][j] = this->elementAt[i][j] + a.elementAt[i][j];
            }
        }
        return result;
    }
    Matrix operator*(Matrix a)
    {
        Matrix result(this->r,a.c);
        for (int i = 0; i < this->r; i++) {
            for (int j = 0; j < a.c; j++) {
                double curr = 0;
                for (int k = 0; k < this->c; k++) {
                    curr += this->elementAt[i][k] * a.elementAt[k][j];
                }
                result.elementAt[i][j] = curr;
            }
        }
        return result;
    }
};