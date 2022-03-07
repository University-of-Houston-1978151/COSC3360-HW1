#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "This program has " << argc << " arguments:" << endl;
    for (int i = 0; i < argc; ++i)
    {
        cout << argv[i] << endl;

        ifstream infile;
        infile.open(argv[i]);

        
    }

    return 0;
}