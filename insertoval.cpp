#include <iostream>
#include <string>

using namespace std; // Using the std namespace

int main()
{
    string input; // No need to use std::string because of the "using namespace std;"
    cout << "Enter a string: ";
    getline(cin, input); // No need to use std::cin because of the "using namespace std;"

    string result;

    for (char c : input)
    {
        result += c; // Add the current character to the result

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            result += 'a'; // Add 'a' after a vowel
        }
    }

    cout << "Result: " << result << endl; // No need to use std::cout and std::endl
    return 0;
}
