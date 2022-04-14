#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string text;
    fstream inputStream;
    string hate = "hate";

    inputStream.open("textfile.txt");

    while (inputStream >> text)
    {
        if (text == "hate")
        {
            cout << "love" << " ";
        }
        else
        {
            cout << text << " ";
        }
    }

    inputStream.close();


    return 0;
}