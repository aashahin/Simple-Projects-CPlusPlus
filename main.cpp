#include <iostream>
#include <string>
using namespace std;
void print(const string& i){
    cout << i << endl;
}
int main() {
    int choice;
    print("// 1. Replace Word Enter 1 :\n// 2. Insert Words Enter 2 :\n// 3. Erase Words Enter 3 :\n// 4. Exit Enter 4 :\n**Index Start From 0\n**Spaces not Allowed\n");
    cin >> choice;
    if(choice == 1){
        string find;
        string replace;
        string name;
        int index;
        print("Enter Words: ");
        cin>>name;
        print("Enter Letter to start: ");
        cin>>find;
        print("Enter index to end: ");
        cin>>index;
        print("Enter words to replace: ");
        cin>>replace;
        name.replace(name.find(find),index,replace);
        print(name);
    }else if(choice == 2){
        string name;
        string insert;
        int index;
        print("Enter Name: ");
        cin>>name;
        print("Enter index to insert: ");
        cin>>index;
        print("Enter words to insert: ");
        cin>>insert;
        name.insert(index,insert);
        print(name);
        print("Done");}else if(choice == 3){
        string name;
        int index;
        print("Enter Name: ");
        cin>>name;
        print("Enter index to erase: ");
        cin>>index;
        name.erase(index);
        print(name);
        print("Done");
    }else if(choice == 4){
        print("canceled.");}else{print("Invalid Input");}
    return 0;
}
