#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int k = 0;

    cout << endl;
    cout << "Input Matrix (" << argv[1] << "):" << endl;
    ifstream mFile;
    mFile.open(argv[1]);
    for (string line; getline(mFile, line);)
    {
        k += 1;
        cout << line << endl;
    }
    mFile.close();

    cout << endl;

    cout << "Input Words (" << argv[2] << "):" << endl;
    int wCount = 0;
    ifstream wFile;
    wFile.open(argv[2]);
    for (string line; getline(wFile, line);)
    {
        wCount += 1;
        cout << line << endl;
    }
    wFile.close();
    cout << endl;

    int matrix;
    string words;
    cout << "k: " << k << endl;
    cout << "Total number of words: " << wCount << endl;

    return 0;
}