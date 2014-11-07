//

#include <iostream>
#include <queue>
using namespace std;

void cube(int n);

int main () {
    int a[] = {0,1,2,3,4,5,6,7,8,9,10};
    for_each(a, a+10, cube);
}

void cube (int n){
    cout << n*n*n << endl;
}
