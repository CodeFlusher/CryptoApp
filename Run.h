#include <string>
#include <fstream>

int doTestCrypt(std::string inFile, std::string outFile) {
    std::fstream file(inFile);
    std::fstream fileOut(outFile);

    char g;

    while (!file.fail()) {
        file.get(g);
        g += 2;
        fileOut << g;
    }

    return 0;
}