#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main()
{
    // hashmaps are created using unordered_map stl
    // Declared as:
    unordered_map<int, int> map1;
    // Now this map will have key, value both as ints
    // We create a pair and then insert that pair into
    // this unordered_map (hashmap)
    pair<int, int> p(0,1);
    // Note that in the above declaration we called upon
    // the constructor of the pair and gave it the 
    // necessary values.
    // Now let's insert this pair into our hashmap.
    map1.insert(p);
    // Another way to insert would be use the array notation:
    map1[1] = 2;
    // Accessing an element also works like arrays:
    cout << map1[0] << "\n";
    cout << map1.at(0) << "\n";

    // If element not present map_name.at(key) will return exception:
    // cout << map1.at(2) << "\n";

    // If used array notation, then 0 is inserted as the value if
    // the key is not present
    cout << map1[2] << "\n";

    // To check the presence of an element(value) in the map, we use
    //  map_name.count(key)  .  Any key is only allowed to exist once in
    // map.  So  map_name.count(key)  will either return 0 or 1.
    cout << "Key 2 exists " << map1.count(2) << " times \n";
    cout << "Key 3 exists " << map1.count(3) << " times \n";
    return 0;
}