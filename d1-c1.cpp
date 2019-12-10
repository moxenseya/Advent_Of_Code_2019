#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int sum  =0;
  for (std::string line; std::getline(std::cin, line);) {
        int mass = std::stoi(line);
        int fuelneeded = round(mass/3)-2;
        sum+=fuelneeded;
    }
            std::cout << sum << endl;

    return 0;
}