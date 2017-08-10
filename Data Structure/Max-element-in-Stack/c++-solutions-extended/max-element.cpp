#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
using namespace std;

int main() {
    stack< pair<int, int> > elem; //We will store the (value, max_value) pair in the stack

    int t,a,type;
    int maxim = 0;g

    cin>>t;

    while(t--)
    {
        cin>>type; //Query type

        if(type == 1)
        {
            int val;
            cin>>val;
            if(elem.size() == 0)
                elem.push(make_pair(val, val));
            else
                elem.push(make_pair(val, max(val, elem.top().second))); //storing the 'value', 'max value' pair in the stack
        }
        else if(type == 2)
        {
            elem.pop();
        }
        else if(type == 3)
        {
            cout<<elem.top().second<<endl;
            //elem.top().first holds the 'actual given value', you can use it easily if you need
        }
    }

    return 0;
}
