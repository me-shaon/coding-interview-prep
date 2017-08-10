#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack<int> elem;

    int t,a,type;
    int maxim = 0;

    cin>>t;

    while(t--)
    {
        cin>>type; //Query type

        if(type == 1)
        {
            int val;
            cin>>val;
            if(elem.size() == 0)
                elem.push(val);
            else
                elem.push(max(val, elem.top())); //storing the 'max value' in the stack, rather than the actual value
        }
        else if(type == 2)
        {
            elem.pop();
        }
        else if(type == 3)
        {
            cout<<elem.top()<<endl;
        }
    }

    return 0;
}
