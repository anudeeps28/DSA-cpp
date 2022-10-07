#include <iostream>
#include <vector>

using namespace std;

// displaying the first and second element of the pair
void print(pair<int,int> &obj) {
    cout << obj.first << " " << obj.second << endl;
}

int main() {

    // method-1 to make pair
    pair<int,int> obj(10,20);
    print(obj);

    // method-2 to make pair
    pair<int,int> obj2 = make_pair(10,20);
    print(obj2);

    // other practice examples of making a pair
    vector<pair<string, int>> list;
    list.push_back(make_pair("Elon", 28));
    list.push_back(make_pair("Jeff", 30));

    list.push_back(pair<string,int>("Tim", 40));
    
    list.push_back(pair<string,int>("Mark", 20));

    for (auto i:list) {
        cout << i.first << " " << i.second << endl;
    }

}