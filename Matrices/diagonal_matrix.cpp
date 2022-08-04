#include<iostream>
using namespace std;

class diagonal
{
private:
    int i, j, x;
    int n; // dimension of the matrix
    int *A; // a pointer to dynamically create an array
public:
    diagonal(int n) // constructor
    {
        A = new int[n];
    }
    void set(int i, int j, int x); // to set the value of the matrix
    int get(int i, int j); // to get the value from the matrix
    void display(); // display function to display all the contents of the matrix

    ~diagonal() {delete []A;} // destructor of the class for destroying the dynamically created array
};

// now we will implement these functions outside the class using scope resolution

void diagonal::set(int i, int j, int x)
{
    if (i == j)
        A[i-1] = x;
}

int diagonal::get(int i, int j)
{
    if (i == j) return A[i-1];
    else return 0;
}

void diagonal:: display()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j) cout << A[i-1];
            else cout << "0";
        }
        cout << endl; // after each row we have to change the line
    }
}


