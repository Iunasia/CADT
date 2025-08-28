#include <fstream>
#include <iostream>

int main (){
    std::ofstream myfile;
    myfile.open("ren.txt");
    myfile << "Hello.";

    return 0;
}