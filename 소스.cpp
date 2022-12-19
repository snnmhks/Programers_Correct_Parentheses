#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    if (s[0] == ')' || s[s.length() - 1] == '(')
    {
        return false;
    }

    int galhoNum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            galhoNum++;
        }
        else if (s[i] == ')')
        {
            galhoNum--;
        }
        if (galhoNum < 0)
        {
            return false;
        }
    }
    if (galhoNum == 0)
    {
        answer = true;
    }
    else if (galhoNum != 0)
    {
        answer = false;
    }

    return answer;
}