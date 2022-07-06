 #include <iostream>
 using namespace std;

 int main() {

    string s;
    cout << "Enter a string";

    getline(cin,s);
    cout << "You have entered: ";

    cout << s <<endl;
    
    // push_back inserts element to the last of the vector
    s.push_back('Y');
    cout << "After using push back function" << s << endl;

    // removes the last element from the vector
    s.pop_back();
    cout << "After using pop back function" << s << endl;

    return 0;

 }