//

#include <iostream>
#include <queue>
using namespace std;

int main () {
    char s[] = "ABCDEFGHIJ";
    cout << endl;
    for (int i = 0;i<4;i++){
        random_shuffle(s,s+9);
        cout<<s<<endl;
    }
}
