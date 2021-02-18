/**************************
No.14
题目描述
    给定n个字符串，请对n个字符串按照字典序排列。
输入描述:
    输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
输出描述:
    数据输出n行，输出结果为按照字典序排列的字符串。
****************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n;
    vector<string> str;
    string tmp;
    
    cin >> n;
    cin.sync();
    for (int i = 0; i < n; i++) {
        cin >> tmp;
//         使用getline的时候会在i=0的时候多出一个空行
//         getline(cin, tmp);
//         cout << i << endl;
//         cout << tmp << endl;
        str.push_back(tmp);
    }
    
    sort(str.begin(), str.end());
    
    for (auto a:str) {
        cout << a << endl;
    }
    
    return 0;
}