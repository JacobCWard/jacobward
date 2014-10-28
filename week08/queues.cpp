//

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main () {
	priority_queue<string> pq;
	
	pq.push("one");
	pq.push("two");
	pq.push("three");
	pq.push("four");
	pq.push("five");

	while (!pq.empty()){
		cout << pq.top() << endl;
		pq.pop();
	}
	
}