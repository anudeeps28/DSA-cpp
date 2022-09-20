#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    struct cityRecord
    {
        string name;
        int population;
    };

    map<string, cityRecord> cityMap;

    cityMap["West Layafette"] = cityRecord {"West Lafayette", 484890 };
    cityMap["lol-town"] = cityRecord {"West Lafayette", 329472 };
    cityMap["Paris"] = cityRecord {"Paris", 545432939 };

    cityRecord Parisdata = cityMap["Paris"];
    cout << Parisdata.population << endl;

    
}