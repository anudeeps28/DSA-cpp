#include <iostream>
#include <cstdlib> //if not using online compiler (running locally)
#include <stdio.h> //can now mix C language code as well

using namespace std;

int main() {
  int A[5]; //creates an array of 5 elements; each element can be accesed using index
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;

  int B[] = {2,4,6,8,10,12,15}; //another way of initializing array

  cout << sizeof(A) << endl; //each integer takes 4 bytes
  cout << A[1]<<endl; //endl = end line (moves the cursor to the next line)
  printf("%d\n",A[2]); //can also use printf just like C, cout of for c++
  cout << "---\n";

  // -----------------------------------------------------------------

  cout << sizeof(B) << endl; // sizeof gives the size in the memory
  cout << B[1]<<endl;
  printf("%d\n",B[2]);
  cout << "---\n";

  // -----------------------------------------------------------------

  int C[10] = {1,2,3,4,5,6,7};
  cout << sizeof(C) << endl;
  cout << C[8]<<endl; //rest of the values of the array is 0
  printf("%d\n",C[9]);
  cout << "---\n";

  // -----------------------------------------------------------------

  int D[10] = {0}; //initializing an array of all elements 0
  for (int i=0; i<10; i++) { //displayiing all values of an array
    cout << D[i] << endl;
  }
  cout << "---\n";

  // -----------------------------------------------------------------

  int n; // initializing n
  cout << "Enter array size"; 
  cin >> n; // taking input 
  int E[n]; // Variable sized array = can create; cannot initialize initializing array of size n
  
  // thus it will have all garbage values
  
  //giving values to elements of the array
  E[0] = 2; // first element of array = 0

  for (int x:E){
    cout << x << endl;
  }
  
  //apart from 2 (first value), all will be garbage values

  return 0;

}

//this is going to be fun!  