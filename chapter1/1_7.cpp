#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile("test_for_1_7.txt");
    if (! infile)
        cerr << "Unable to open the file";
    ofstream outfile("sort_for_1_7.txt");
    if (! outfile)
        cerr << "Unable to save the file";

    string word;
    vector<string> text;
    while (infile >> word)
        text.push_back(word);
    
    int i;
    cout << "unsorted text:\n";
    for (i=0; i < text.size(); i++)
        cout << text[i] << ' ';
    cout << endl;
    
    sort (text.begin(),text.end());
    outfile << "sorted texe:\n";
    for (i=0; i < text.size();i++)
        outfile << text[i] << ' ';
    outfile << endl;
    
    return 0;
}