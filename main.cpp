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
using namespace std;


vector<int> findPair(vector<int> inputValues){
    vector<int> returnPairs;
    int value1, value2;
    vector<int>::iterator it;
    for(int i=0; i <inputValues.size(); i++){
        value1=inputValues.at(i);
        value2=2020-value1;
        it=find(inputValues.begin(), inputValues.end(), value2);
        if(it!=inputValues.end()){
            cout<<"found at: "<< it-inputValues.begin()<<endl;
            returnPairs.push_back(value1);
            returnPairs.push_back(value2);
            return returnPairs;
        }
}
}



int main()
{
    //vector<int> inputValues={1721, 979, 366, 299, 675, 1456};
    vector<int> inputValues;
    int count, tmp;
    ifstream myFile("input.txt");
    if(myFile.is_open()){
    myFile>> count;
    for(int i=0; i<count; i++){
        myFile>>tmp;
        inputValues.push_back(tmp);
    }
    }
    vector<int> results = findPair(inputValues);
    cout<<"value 1: " << results.at(0) <<" value 2: "<< results.at(1)<<" multiplied: " << results.at(0)*results.at(1)<<endl;
    return 0;
}

