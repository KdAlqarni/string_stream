#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream mystream(str);
    char ch;
    int number;
    vector<int> pardedInts;

    while (!mystream.eof()){
        if(mystream.peek() != ','){
            mystream >> number >> ch;
            pardedInts .push_back(number);
        }
        else { mystream.get(); }
    }
    return pardedInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


