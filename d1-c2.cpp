#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int sum  =0;
  for (std::string line; std::getline(std::cin, line);) {
        
        
        int mass = std::stoi(line);
        int fuelneeded = round(mass/3)-2;
        
        int fuelsum=0;
        while(fuelneeded>=0)
        {
            fuelsum +=fuelneeded;
            fuelneeded = round(fuelneeded/3)-2;
        }
        sum+=fuelsum;
        
    }
            std::cout << sum << endl;

    return 0;
}