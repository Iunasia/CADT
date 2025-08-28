#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    getline(cin, filename);

    // 1. Write initial entries
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cerr << "Cannot open file for writing\n";
        return 1;
    }
    // TODO: write 5 lines "Name score"
    outFile << "NAME: Darren | SCORE: 100\n";
    outFile << "NAME: Mengly | SCORE: 69\n";
    outFile << "NAME: Rath | SCORE: 100\n";
    outFile << "NAME: Sslen | SCORE: 99\n";
    outFile << "NAME: Jork | SCORE: 15\n";


    outFile.close();

    // 2. Read and display
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cerr << "Cannot open file for reading\n";
        return 1;
    }
    // TODO: read loop and print

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    };
    
    inFile.close();

    return 0;
}
