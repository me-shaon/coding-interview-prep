## Balanced brackets / Parentheses balance

#### problem description

> A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].
Given an expression as string comprising of opening and closing characters of:
parentheses - ()
curly braces - {} and
square brackets - []
We need to check whether symbols are balanced or not.
Balanced brackets means that each opening symbol has a corresponding closing symbol and the pairs of brackets are properly nested.
For example, the program should print true for expressions = “[()]{}{[()()]()}” and false for expression = “[(])”


### Solution Method:
We can solve this problem easily by an **Stack**. The idea is:

> Starting with an empty stack, process the parenthesis strings from left to right. If a symbol is an opening parenthesis, push it on the stack as a signal that a corresponding closing symbol needs to appear later. If, on the other hand, a symbol is a closing parenthesis, pop the stack, and match the closing symbol with the popped element. If those elements are of the same parenthesis pair (e.g. popped element is '(' and the closing symbol is ')' ) then they matched and we proceed to the next element. As long as it is possible to pop the stack to match every closing symbol, the parentheses remain balanced. If at any time there is no opening symbol on the stack to match a closing symbol, the string is not balanced properly. At the end of the string, when all symbols have been processed, the stack should be empty. If the stack is empty we can say that the complete expression is 'balanced'.

You can try the correctness of your solution at the following links:
- [Hackerrank - Balanced Brackets](https://www.hackerrank.com/challenges/ctci-balanced-brackets)
- [UVa: 673 - Parentheses Balance](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614)

##### Solution:
- [Python Solution](./python-solution)
- [C++ Solution](./c++-solution)

##### Video Tutorial:
<a href="http://www.youtube.com/watch?feature=player_embedded&v=IhJGJG-9Dx8
" target="_blank"><img src="http://img.youtube.com/vi/IhJGJG-9Dx8/0.jpg"
alt="Data Structures: Balanced Parentheses in Expression (youtube)" width="640" height="480" border="10" /></a>
