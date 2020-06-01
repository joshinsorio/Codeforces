//Solution written by Joshua Insorio

#include <iostream>

int main()
{
    int choice = 0;
    int x(0), y(0), z(0), xsum(0), ysum(0), zsum(0);

    std::cin >> choice;
    while(choice--)
    {
        std::cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;

    return 0;
}