#include<iostream>
using namespace std;

class LowerTri
{
private:
    int i, j, x;
    int n; // dimension of the matrix
    int *A; // a pointer to dynamically create an array
public:
    LowerTri() // constructor (non parametrized) = that means if size is not given, there needs to be a standard size of which the matrix should be formed
    {
        n = 2;
        A = new int [2*(2+1)/2];
    }

    LowerTri(int n) // constructor (parametrized)
    {
        this -> n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x); // to set the value of the matrix

    int get(int i, int j); // to get the value from the matrix

    void display(); // display function to display all the contents of the matrix

    int getDimension(){return n;}

    ~LowerTri() {delete []A;} // destructor of the class for destroying the dynamically created array
};

// now we will implement these functions outside the class using scope resolution

void LowerTri::set(int i, int j, int x)
{
    if (i >= j)
        A[i*(i-1)/2+j-1] = x; // i-1 because math matrix start from 1, while programming matrix start from 0
        /*
        for column major formula, just replace the formula with [n(j-1) - ((j-2)(j-1))/2 + (i-j)] 
        and put them in get and display functions also
        */
}

int LowerTri::get(int i, int j)
{
    if (i >= j) return A[i*(i-1)/2+j-1];
    else return 0;
}

void LowerTri:: display()
{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j) 
                cout << A[i*(i-1)/2+j-1] << " ";
            else 
                cout << "0" << " ";
        }
        cout << endl; // after each row we have to change the line
    }
}

int main()
{
    int d;
    cout << "Enter dimensions";
    cin >> d;

    LowerTri lm(d);

    int x;
    cout << "Enter all elements";
    for  (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lm.set(i,j,x);
        }
    }

    lm.display();
    
}

