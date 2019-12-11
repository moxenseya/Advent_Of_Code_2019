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
      
        
    vector<int> arraycopyoriginal = array;
    
    
    for(int i =0;i<100;i++)
    {
        for (int j = 0;j<100;j++)
        {
        int header =0;
        array = arraycopyoriginal;
        
        array[1] = i;
        array[2] = j;
        
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
    
     if(array[0]==19690720)
        {
            cout << 100 * i + j << endl;
            return 0;
        }
        
    }
        
    }
    

}