#include<iostream>
#define PI 3.14
using namespace std;

int main() {
    /** ----------------------------------------------
     * Q1. Input the side of the square and print the area
     ---------------------------------------------- */ 
    int sideOfSquare;
    cout << "Enter the side of the square: ";
    cin >> sideOfSquare;

    int areaOfSquare = sideOfSquare*sideOfSquare;
    cout << "The area of the square is: " << areaOfSquare << endl;

    /** ----------------------------------------------
    * Q2. Enter 3 items, output the total cost of those items
    * with tax included in the bill
    ---------------------------------------------- */

    float costOfPencil;
    float costOfEraser;
    float costOfPen;

    cout << "Enter the cost of pencil, eraser and pen: ";
    cin >> costOfPencil >> costOfEraser >> costOfPen;

    // final cost with 18% tax
    float finalCost = (costOfPencil*1.18) + (costOfEraser*1.18) + (costOfPen*1.18);
    cout << "The total cost is: " << finalCost << endl;

    /** ----------------------------------------------
    * Q3. Build a simple interest calculator
    ---------------------------------------------- */
    float P,R,T;
    cout << "Enter the Principal, Rate of Interest and Time Period: ";
    cin >> P >> R >> T;
    float I = (P*R*T)/100;
    cout << "Interest = " << I << endl;

    /** ----------------------------------------------
    * Q4. Calculate the area of a circle
    ---------------------------------------------- */

    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float areaOfCircle = 2*PI*radius;
    cout << "Area of the circle is: " << areaOfCircle << endl;
}