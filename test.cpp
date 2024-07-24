#include "extra.cpp"
#include <iostream>

using namespace std;

int main() {
    string original;
    string path;
    cout << "Enter a string: ";
    getline(cin, original);
    cout << original;
    cout << "\nReversed: " << reverse_string(original) << "\nWords:\n";
    for (string& item : split(original, ' ')) {
        cout << "   " << item << '\n';
    }
    cout << "Enter a file path to write the string to: ";
    getline(cin, path);
    write_file(path, original);
    cout << "\nEnter a file path to read a string from: ";
    getline(cin, path);
    cout << '\n' << read_file(path) << '\n';
}