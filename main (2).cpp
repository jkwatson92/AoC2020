/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

//Day 2 Part 1
bool checkPassword(string range, char charCheck, string pw){
    string delim="-";
    string v1, v2;
    char checkFor;
    int begRange=stoi(range.substr(0,range.find(delim)));
    int endRange=stoi(range.substr(range.find(delim)+1,range.length()));
    int counted=count(pw.begin(),pw.end(),charCheck);
    if(counted>=begRange && counted <= endRange){
        
        return true;
    }
    else{
        return false;
    }
    
}


int main()
{
    vector<string> range, passwords;
    vector<char> chars;
    char chartmp,skip;
    string rangetmp,pwtmp;
    string line;
    int counter=0;
    ifstream myFile("input.txt");
    if(myFile.is_open()){
    while(myFile>>rangetmp>>chartmp>>skip>>pwtmp){
        range.push_back(rangetmp);
        chars.push_back(chartmp);
        passwords.push_back(pwtmp);

        
    }
    myFile.close();
    }
    for(int i=0; i<range.size();i++){
        if(checkPassword(range.at(i),chars.at(i),passwords.at(i))){
           counter++;
        }
    }
    cout<<"Matching: "<<counter<<endl;
    
    return 0;
}


