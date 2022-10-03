#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    list<int> myList = {1,3,4,5,65,6};

    vector<int> myVector;

    // range based loop
    for (int i: myList) {
        myVector.push_back(i);
    }

    for (int j: myVector) {
        cout << j << endl;
    }




}