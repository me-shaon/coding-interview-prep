#include <iostream>
#include <vector>
#include <cstring>
#include <stack>
#include <iomanip>

using namespace std;

bool isOpen(char c)
{
    if(c == '(' || c == '{' || c == '[')
        return true;
    return false;
}

bool isBalanced(char popped, char now)
{
    if(popped == '(' && now ==')')
        return true;
    if(popped == '[' && now ==']')
        return true;
    if(popped == '{' && now =='}')
        return true;
    return false;
}

bool checkBalance(string expression)
{
    stack<char> s;
    bool balanced = true;

    for(int i = 0; i < expression.length(); i++)
    {
        char now = expression[i];
        if(isOpen(now))
            s.push(now);
        else
        {
            //If a closing symbol appears first of an expression or previous pairs already matched it will see the stack empty
            if(!s.empty() && isBalanced(s.top(), now))
            {
                s.pop();
            }
            else
            {
                balanced = false;
                break;
            }
        }
    }

    return (balanced && s.empty()); //if the stack is empty then all openingSymbols matches with closingSymbols
}

int main()
{
    std::cout << std::boolalpha;
    cout<<checkBalance("([)]")<<endl;
    cout<<checkBalance("{{([][])}()}")<<endl;
    cout<<checkBalance("}()")<<endl;
}
