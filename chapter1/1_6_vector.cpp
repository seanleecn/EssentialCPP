#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int ival;
    int num = 0;
    cout << "输入整数数列并以任意的字母结尾"
    while (cin >> num){
        ivec.push_back(num);//添加元素num到vector的末尾
    }
  
    int i = 0;
    int sum =0;
    for (i = 0; i < ivec.size(); i++){
        sum = sum+ivec[i];
    }
    cout << "sum = " << sum << '\n'
         << "average = "  << sum / ivec.size() 
         << endl;
    return 0;
}