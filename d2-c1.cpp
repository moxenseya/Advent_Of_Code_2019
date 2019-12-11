#include <bits/stdc++.h> 

using namespace std;

int main() {
    
    string input;
    getline(cin,input);


    vector <int> array; 
      
    stringstream check1(input); 
      
    string intermediate; 
      
    while(getline(check1, intermediate, ',')) 
    { 
        array.push_back(stoi(intermediate)); 
    } 
      
        
    int header =0;
    
    while(header<array.size())
    {
        if(array[header]==99)
        break;
        
        int addr1 =array[header+1];
        int addr2 = array[header+2];
        int val1= array[addr1];
        int val2 = array[addr2];
        
        int opaddr = array[header+3];
        
        if(array[header]==1)
        array[opaddr] = val1+val2;
        else if (array[header]==2)
        array[opaddr]=val1*val2;
    
    
    header+=4;    
    }
    cout << array[0] << endl;
    
}