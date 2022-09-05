#include <iostream>
#include <string>
using namespace std;
void print(const string& i){
    cout << i << endl;
}
int main() {
    string find;
    string replace;
    string name;
    int index;
    print("Enter Name: ");
    cin>>name;
    print("Enter Letter to start: ");
    cin>>find;
    print("Enter index to end: ");
    cin>>index;
    print("Enter letter to replace: ");
    cin>>replace;
    name.replace(name.find(find),index,replace);
    print(name);
    print("Done");
    return 0;
}
