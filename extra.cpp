#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

/*
# `C += 10;`

## Introduction
We all know that C++ is `C ++;`, right?  
But we want C++ to be easier to learn! 
Some repititive tasks can take long lines, right?  
Python keeps that in mind, while C++, did not do it right.  

## Use Cases
- If you're a beginner, you can use this to learn C++ and start using it.
- If you're a pro, you can use it to save your time.
*/

string read_file(string filename) {
    ifstream inputFile(filename);
    string content;

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            content += line + '\n';
        }

        if (!content.empty()) {
            content.pop_back();
        }
        inputFile.close();
    } else {
        cout << "Error opening file " << filename << endl;
        return "FILE NOT FOUND ERROR";
    }

    return content;
}

string write_file(string filename, string content) {
    ofstream outputFile(filename);

    if (outputFile.is_open()) {
        outputFile << content;
        outputFile.close();
    } else {
        cout << "Error opening file " << filename << endl;
        return "FILE NOT FOUND ERROR";
    }

    return "OPERATION DONE";
}

vector<string> split_internal(const string& s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

vector<string> split(string str, char delim) {
    vector<string> result = split_internal(str, delim);

    return result;
}

string reverse_string(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}