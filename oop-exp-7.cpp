// Author : Dinesh Shankar Rathod
// Roll No : SA73
// Batch : C
// Assignment no. 7

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    typedef map<string, int> mapType;
    mapType populationMap;
    populationMap.insert(pair<string, int>("Maharashtra", 7026357));
    populationMap.insert(pair<string, int>("Rajasthan", 6578936));
    populationMap.insert(pair<string, int>("Karanataka", 6678993));
    populationMap.insert(pair<string, int>("Punjab", 5789032));
    populationMap.insert(pair<string, int>("West Bengal", 6676291));
    mapType::iterator iter;
    cout << "Total state and UT of India with Size of populationMap: " << populationMap.size() << '\n';
    for (iter = populationMap.begin(); iter != populationMap.end(); iter++)
    {
        cout << iter->first << " : " << iter->second << " million\n";
    }
    cout << "\nSize of populationMap: " << populationMap.size() << "\n";
    string state_name;
    cout << "\nEnter name of the state :";
    cin >> state_name;
    iter = populationMap.find(state_name);
    if (iter != populationMap.end())
    {
        cout << state_name << "'s population is "
             << iter->second;
    }
    else
    {
        cout << "Key is not populationMap---"
             << "\n";
    }
    populationMap.clear();
    cout << "\nTHANKYOU!!";
    return 0;
}
