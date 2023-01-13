#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> numbers;
    numbers.push("zero");
    numbers.push("one");
    numbers.push("two");
    numbers.push("three");
    numbers.push("four");
    numbers.push("five");
    numbers.push("six");
    numbers.push("seven");
    numbers.push("eight");
    numbers.push("nine");

    // cout << "This is the size of stack: " << numbers.size() << endl;
    // cout << "This is the number on the stack: " << numbers.top() << endl;

    // numbers.pop();

    // cout << "This is the size of stack: " << numbers.size() << endl;
    // cout << "This is the number on the stack: " << numbers.top() << endl;

    while(!numbers.empty())
    {
    cout << "This is the size of stack: " << numbers.size() << endl;
    cout << "This is the number on the stack: " << numbers.top() << endl;

    numbers.pop();
    }
    cout << "This is the size of stack: " << numbers.size() << endl;
    cout << "Teste realizado..."<< endl;

    return 0;
}