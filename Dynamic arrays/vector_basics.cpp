#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	vector<int>numbers;

    // adding elements in the vector / add element at the back of the vector
    numbers.push_back(0);

	for (int i = 1; i <= 10; i++)
		numbers.push_back(i);

    
    //1. print vector elements
	for (int n : numbers) {
		cout << n << endl;
    }

    cout << "////////////" << endl;

	//2. print vector elements with iterators
	for (auto it = numbers.begin(); it != numbers.end(); it++) { // begin and end gives an iterator pointer
		//cout << it << endl; -> this will give error
		cout << *it << endl;
		cout << &it << endl;
		cout << &(*it) << endl;
	}

    cout << "////////////" << endl;

    auto it = numbers.begin();
	cout << "Element at index 5 is: " << *(it + 5) << endl;

    cout << "////////////" << endl;

    // important functionalities of std::vector

	cout << "Size: " << numbers.size() << endl;
	cout << "Max size: " << numbers.max_size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;
	numbers.resize(5);
	cout << "Size after resizing: " << numbers.size() << endl;
	
    if (numbers.empty())
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;
	
    cout << "Element[0] is: " << numbers[0] << endl;
	cout << "Element at(0) is: " << numbers.at(0) << endl;
	cout << "Front: " << numbers.front() << endl;
	cout << "Back: " << numbers.back() << endl;
    

    cout << "////////////" << endl;

    // insert element at specific position in vector
	numbers.insert(numbers.begin() + 2, 88);
    for (int n : numbers) {
		cout << n << endl;
    }
	// erase element from a specific position
	numbers.erase(numbers.begin() + 2);
    for (int n : numbers) {
            cout << n << endl;
    }
	// remove last element of vector
	numbers.pop_back();
    for (int n : numbers) {
            cout << n << endl;
    }
}
