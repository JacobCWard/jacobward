//

#include <iostream>
#include <queue>
using namespace std;

typedef list<string> List;
typedef List::iterator it;
void print(List & Lst);

int main () {
    List myList;
    myList.push_back("one");
    myList.push_back("two");
    myList.push_back("three");
    print(myList);
}

void print(List & Lst){
    cout << endl;
    for (it iter = Lst.begin();iter != Lst.and(); iter++){
        cout << *iter << endl;
    }
}
