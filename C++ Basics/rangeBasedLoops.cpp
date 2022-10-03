#include<iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    
    // itereating over the whole array
    vector<int> v = {0,1,2,3,4,5};
    for(auto i:v) {
        cout << i << endl;
    }

    cout << "/////////////////" << endl;

    // another way
    for (int n: {0,1,2,3,4,5}) {
        cout << n << endl;
    }

    cout << "/////////////////" << endl;

    // another way
    int A[] = {1,3,4,4,5};
    for(int n: A) {
        cout << n << endl;
    }

    cout << "/////////////////" << endl;

    // running a loop until an element is present 
    // in the array

    for(int n: A) {
        cout << "In Loop" << endl;
    }
    cout << "Now outside the Loop" << endl;

    cout << "/////////////////" << endl;

    // printing string characters
    string str = "Tech";
    for(char c:str) {
        cout << c << " ";
    }

    cout << endl;
    cout << "/////////////////" << endl;

    // printing keys and map values of a map
    map<int,int> myMap ({{1,1}, {2,2}, {3,3}});

    for (auto i: myMap) {
        cout << i.first << ", " << i.second << endl;
    }


}