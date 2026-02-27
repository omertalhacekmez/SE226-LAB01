#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    long long ID;
    cout << "What is your name? " << endl;
    cin >> name;
    cout << "Hello " << name << endl << "What is your student ID?" << endl;
    cin >> ID;
    cout << "Your ID is " << ID;
    return 0;
}