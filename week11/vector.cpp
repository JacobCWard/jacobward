//

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> squares;

    for(int i=0;i<=100;i++){
        squares.push_back(i*i);
    }

    for(int i=0;i<squares.size();i++){
        cout << squares[i] << endl;
    }
}
