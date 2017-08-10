## Find Maximum element in a Stack

#### problem description

> You have an empty sequence, and you will be given some queries. Each query is one of these three types:
1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.


### Solution Method:
A very naive approach can be taken, like:

> In addition to the stack, we can handle another hash table or map which will store the count value of the numbers.
When a value is deleted from the stack, we will decrease the counter of that number in the hash table. When the query
is given to find the maximum value from the stack, we will simply traverse through the hash table and search for the maximum
value whose counter is not 0.

But this approach will not work for large input data. We will need to find a better, elegant approach. Like this:

> As we will only be asked for the maximum value of the stack at a time, we can just simply store the maximum value at the time
a new input value is given and store it in the stack rather than the 'given value'.
Let's see an example:
we are given a number 10. As the stack is empty we will just add the value to the stack.
Then say a number 5 given. As the maximum value in the stack is '10' and the given value '5' is less than that,
we will push max(10,5) = 10 to the stack. why? because at a certain position of the stack we would just need to know what is
the largest value in stack when this value was pushed to the stack. we don't need the real value. Now, if the next value to be pushed
to the stack is 16, we will see that current top value in the stack is 10 and the given value is 16, so we will now push 16 to the stack.
Got the point? we are just storing the max value for a certain time to the stack, and we can answer the 3rd query given in the problem
easily just checking the top value of the stack.

##### Solution:
- [C++ Solution](./c++-solution)

Now if we needed to store the real value too, what can we do then?
Simple. We would then store the real value and the max value pair in the stack.

##### Extended Solution:
- [C++ Solution](./c++-solution-extended)


You can try the correctness of your solution at the following links:
- [Hackerrank - Maximum Element](https://www.hackerrank.com/challenges/maximum-element/problem)
