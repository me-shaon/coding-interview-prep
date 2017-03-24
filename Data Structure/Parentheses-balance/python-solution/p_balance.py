from stack import Stack

def matches(top, symbol):
    """ checks if the last found symbol matches with the stack top element """
    openingSymbols = "({["
    closingSymbols = ")}]"

    return openingSymbols.index(top) == closingSymbols.index(symbol)


def checkBalance(expression):
    """ checks each symbols to match with its closing symbol using stack """
    symbolstack = Stack()
    balanced = True

    for symbol in expression:
        if symbol in ["(","{","["]:
            symbolstack.push(symbol)
        else:
            #If a closing symbol appears first of an expression or previous pairs already matched it will see the stack empty
            if not symbolstack.isEmpty() and matches(symbolstack.peek(), symbol):
                symbolstack.pop()
            else:
                balanced = False
                break;
    
    return balanced and symbolstack.isEmpty() #if the stack is empty then all openingSymbols matches with closingSymbols

#Testing the code with some data
if __name__ == '__main__':
    print(checkBalance("([)]"))
    print(checkBalance("{{([][])}()}"))
