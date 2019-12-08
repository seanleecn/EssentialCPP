#include<iostream>
#include<string>
using namespace std;

int main()
{
    string user_name;

    cout << "Please enter your name: ";
    // noskipws 不忽略空白字符
    cin >> noskipws >> user_name;
    
    switch ( user_name.size() )
    {
        case 0:
            cout << "Ah,the user with no name." << "Well, ok, hi, user with no name.\n";
            break;
        case 1:
            cout << "A 1-character name? " << "Hello, " << user_name << endl;
            break;
        default:
            cout << "Nice to meet you," << user_name << "--happy to make your acquaintance!\n";
            break;
    }
    return 0;
}