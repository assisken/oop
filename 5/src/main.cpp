#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printchar(int code) {
    char ch = (char) code;
    switch(ch) {
        case '\n':
            cout << "\\n";
            break;
        case '\r':
            cout << "\\r";
            break;
        default:
            cout << ch;
    }
    cout << ":" << setw(5) << code << endl;
}

int main() {
    setlocale(LC_ALL, "");
    string line;
    ifstream file;
    file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        file.open("file.txt", ios::out | ios::binary | ios::ate);
    } catch (const ifstream::failure& e) {
        cerr << "Error while opening file...";
    }

    size_t len = (size_t) file.tellg();
    char *buf = new char[sizeof(char) * len];

    int tmp;
    file.seekg(0, ios::beg);
    try {
        for(size_t i = 0; i < len; i++) {
            tmp = file.get();
            printchar(tmp);
        }
    } catch (const ios_base::failure& e) {
        cout << "Error while handling file...";
    }

    file.close();
    delete[] buf;
    return 0;
}