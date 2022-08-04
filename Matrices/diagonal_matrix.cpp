#include<iostream>
using namespace std;

class diagonal
{
private:
    int i, j, x;
    int n; // dimension of the matrix
    int *A; // a pointer to dynamically create an array
public:
    diagonal() // constructor (non parametrized) = that means if size is not given, there needs to be a standard size of which the matrix should be formed
    {
        n = 2;
        A = new int [2];
    }

    diagonal(int n) // constructor (parametrized)
    {
        this -> n = n;
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
        A[i-1] = x; // i-1 because math matrix start from 1, while programming matrix start from 0
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
            if (i == j) 
                cout << A[i] << " ";
            else 
                cout << "0" << " ";
        }
        cout << endl; // after each row we have to change the line
    }
}

int main()
{
    diagonal d(4); // creating object d of class diagonal

    // calling class methods
    d.set(1,1,5);
    d.set(2,2,8);
    d.set(3,3,9);
    d.set(4,4,12);
    d.display();
    
}

