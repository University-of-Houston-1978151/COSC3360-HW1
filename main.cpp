#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(int argc, char **argv)
{
    cout << endl;

    cout << "Input Matrix (" << argv[1] << "):" << endl;
    int k = 0;
    ifstream mFile;
    mFile.open(argv[1]);
    for (string line; getline(mFile, line);)
    {
        k += 1;
    }
    mFile.close();

    mFile.open(argv[1]);
    int tNum;
    int matrix[k][k];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            mFile >> tNum;
            matrix[i][j] = tNum;
        }
    }
    mFile.close();
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Input Words (" << argv[2] << "):" << endl;
    int wCount = 0;
    ifstream wFile;
    wFile.open(argv[2]);
    for (string line; getline(wFile, line);)
    {
        wCount += 1;
    }
    wFile.close();

    wFile.open(argv[2]);
    string tWord;
    string words[wCount];
    for (int i = 0; i < wCount; i++)
    {
        wFile >> tWord;
        words[i] = tWord;
    }
    wFile.close();
    for (int i = 0; i < wCount; i++)
    {
        cout << words[i] << endl;
    }

    cout << endl;
    cout << "k: " << k << endl;
    cout << "Total number of words: " << wCount << endl;
    cout << endl;

    return 0;
}