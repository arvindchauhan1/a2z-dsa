#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    if (strs.size() == 0)
        return "";
    if (strs.size() == 1)
        return strs[0];

    string res = "";

    for (int i = 0; i < strs[0].length(); i++)
    {

        char ch = strs[0][i];

        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[j].length() < i || strs[j][i] != ch)
            {
                return res;
            }
        }
        res = res + ch;
    }

    return res;
}

int main()
{
    // code here
    vector<string> strs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    string result = longestCommonPrefix(strs);
    cout << result << endl;
    return 0;
}