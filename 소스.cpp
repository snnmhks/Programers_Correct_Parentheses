#include<string>
#include <iostream>

using namespace std;

// 올바른 괄호를 찾는 문제이다. 예로 ())()이런 식이면 올바른 괄호가 아니다.
// 우선 입구와 마개의 갯수가 똑같아야한다. 갯수가 다르면 열려있다는 뜻이다.
// 시작이 입구가 아니거나 마지막이 마개가 아니면 올바른 괄호가 아니다.
// 중간에 연속적인 부분에서 입구 갯수가 마개 갯수보다 적으면 올바른 괄호가 아니다. -> ((())))(() 이런 경우 입구는
// 3개가 연속인데 마개는 4개가 연속되므로 올바른 괄호가 아니다.
// 참고로 입구의 연속 갯수가 마개의 연속갯수보다 많다고 올바른 괄호가 아닌건 아니다. -> (((()))()) 이 경우 올바른 괄호다.

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
