
#include <iostream>
#include <cstdlib> 

int main()
{
    //task1

    /*
    int massiv[5];

    for(int i = 0; i <=4; ++i)
    {
        std::cout << "Print number: ";
        std::cin >> massiv[i];
    }

    for (int i = 4; i >= 0; --i)
    {
        std::cout << massiv[i] << " ";
    }
    */

    //task2

    /*
    int massiv[20];

    for (int i = 0; i <= 19; ++i)
    {
        massiv[i] = rand() % 100 + 1;
    }
    for (int i = 0; i <= 19; ++i)
    {
        if(massiv[i] % 2 == 0)
        {
            std::cout << massiv[i];
        }
    }
    */

    //task3
    
    /*
    int massiv[10];
    int sun = 0;
    int numberCount = 0;
    int posetivNum = 0;

    for (int i = 0; i <= 9; ++i)
    {
        massiv[i] = rand() % 40 - 20;
    }
    for (int i = 0; i <= 9; ++i)
    {
        sun += massiv[i];
    }
    std::cout << sun << "Sum" << " ";

    for (int i = 0; i <= 9; ++i)
    {
        if(massiv[i] >= 0)
        {
            posetivNum += massiv[i];
            ++numberCount;
        }
    }

    std::cout << posetivNum/numberCount << "Mid";
    */

    //task5

    /*
    int massiv[100];
    int geasANumber = 0;
    int countNumber = 0;

    for (int i = 0; i <= 99; ++i)
    {
        massiv[i] = rand() % 100 + 1;
    }

    std::cout << "Print a number: ";
    std::cin >> geasANumber;

    for (int i = 0; i <= 99; ++i)
    {
        if (massiv[i] == geasANumber)
        {
            ++countNumber;
        }
    }
    std::cout << countNumber;
    */

        //task5

    /*
    int massiv[100];
    int geasANumber = 0;
    int countNumber = 0;

    for (int i = 0; i <= 99; ++i)
    {
        massiv[i] = rand() % 100 + 1;
    }

    std::cout << "Print a number: ";
    std::cin >> geasANumber;

    for (int i = 0; i <= 99; ++i)
    {
        if (massiv[i] == geasANumber)
        {
            ++countNumber;
        }
    }
    std::cout << countNumber;
    */

    //task6

    /*
    int massiv[20];
    int geasANumber = 0;
    int sum = 0;

    for (int i = 0; i <= 19; ++i)
    {
        massiv[i] = rand() % 40 - 10;
    }

    for (int i = 0; i <= 19; ++i)
    {
        if (massiv[i] >= -1)
        {
            for (;i <= 19; ++i)
            {
                sum += massiv[i];
                break;
            }
        }
    }
    std::cout << sum;
    */

    //task7
    
    /*
    int massiv[20];
    int geasANumber = 0;
    int sum = 0;

    for (int i = 0; i <= 19; ++i)
    {
        massiv[i] = rand() % 40 - 30;
    }

    for (int i = 0; i <= 19; ++i)
    {
        if (massiv[i] >= 1)
        {
            break;
        }
        sum += massiv[i];
    }
    std::cout << sum;
    */
}

