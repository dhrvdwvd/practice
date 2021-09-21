#include<iostream>
#include<list>
using namespace std;
// Lists are bidirectional linear list which has efficient
// insertion and deletion.  LINKED LIST !!!
void display(list<int> &lst){
	list<int> :: iterator it;
	for(it=lst.begin(); it!=lst.end(); it++){
		cout << *it << " ";
	}
	cout << "\n";
}
int main(){
	list<int> list1;  // List of 0 elements
	list1.push_back(2);
	list1.push_back(1);
	list1.push_back(10);
	list1.push_back(3);
	list1.push_back(5);
	display(list1);
	//cout << "Removing 10:\n";
	//list1.remove(10);
	//list1.pop_back();
	//list1.pop_front();
	//display(list1);
	
	list<int> list2(3); // List of 3 empty integer elements
	list<int> :: iterator iter;
	iter = list2.begin();
	*iter = 22;
	iter++;
	*iter = 9;
	iter++;
	*iter = 15;
	display(list2);
	list1.sort();
	display(list1);
	list2.sort();
	display(list2);
	list1.merge(list2);
	display(list1);
	return 0;
}