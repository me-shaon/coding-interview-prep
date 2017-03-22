from stack import Stack

def matches(top, symbol):
    """ checks if the last found symbol matches with the stack top element """
    openingSymbols = "({["
    closingSymbols = ")}]"

    return openingSymbols.index(top) == closingSymbols.index(symbol)


def checkBalance(input):
    """ checks each symbols to match with its closing symbol using stack """
    symbolstack = Stack()

    for symbol in input:
        if symbol in ["(","{","["]:
            symbolstack.push(symbol)
        else:
            if matches(symbolstack.peek(), symbol):
                symbolstack.pop()
            else: break;

    return symbolstack.isEmpty() #if the stack is empty then all openingSymbols matches with closingSymbols

#Testing the code with some data
if __name__ == '__main__':
    print(checkBalance("([)]"))
    print(checkBalance("{{([][])}()}"))
