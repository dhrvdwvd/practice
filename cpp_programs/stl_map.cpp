#include<iostream>
#include<map>
#include<string>
using namespace std;
// Maps are used to store Key: Value pairs.
int main(){
	map<string, int> MarksMap;
	MarksMap["Dhruv"] = 99;
	MarksMap["Ratnesh"] = 60;
	MarksMap["Anshul"] = 98;
	MarksMap.insert({{"Manjhi",88},{"Patel", 78}});
	map<string, int> :: iterator itr;
	for(itr=MarksMap.begin(); itr!=MarksMap.end(); itr++){
		cout << itr->first << ": " << itr->second << "\n";
	}
	return 0;
}