/*

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> temp;

        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {

                temp.push(s[i]);
            }
            else
            {
                if (temp.empty())
                    return false;

                if (s[i] == ')' && temp.top() == '(')
                {
                    temp.pop();
                    continue;
                }
                else
                    return false;

                if (s[i] == ']' && temp.top() == '[')
                {
                    temp.pop();
                    continue;
                }
                else
                    return false;

                if (s[i] == '}' && temp.top() == '{')
                {
                    temp.pop();
                    continue;
                }
                else
                    return false;
            }
        }

        if (temp.empty())
            return true;

        return false;
    }
};

*/