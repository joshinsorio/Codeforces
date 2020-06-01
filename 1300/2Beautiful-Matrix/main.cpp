//Solution written by Joshua Insorio

#include <iostream>

int main()
{
    int matrix[5][5];
    int operations = 0;
    int locationx = 0, locationy = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
        {
            std::cin >>  matrix[i][j];
        }

    //Loop searching for location of the non-zero integer
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
           if(matrix[i][j] == 1)
           {
               locationx = j;
               locationy = i;
           }
        }
    }
    locationy++;
    locationx++;
    //Loop calculating number of required of moves to make the matrix beautiful
    while(locationx != 3)
    {
        if(locationx > 3)
        {
            locationx--;
            operations++;
        }
        if(locationx < 3)
        {
            locationx++;
            operations++;
        }
    }
    while(locationy != 3)
    {
        if(locationy > 3)
        {
            locationy--;
            operations++;
        }
        if(locationy < 3)
        {
            locationy++;
            operations++;
        }
    }

    std::cout << operations << std::endl;
    return 0;
}