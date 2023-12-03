#pragma once
#include <iostream>
#include <fstream>


struct computer
{
    int ram[8];

    static void ram_write()
    {
        std::ofstream ram(R"(C:\develop\Skillboxcpp\25-practical\ComputerSimulatorProject\include\ram.bin)", std::ios::binary);

        std::cout << "Input 8 integers:" << std::endl;

        for (int i = 0; i < 8; i++)
        {
            int tmp;
            std::cin >> tmp;
            ram << tmp << " ";
        }

        ram.close();
    }

    void ram_read()
    {
        std::ifstream ramFile(R"(C:\develop\Skillboxcpp\25-practical\ComputerSimulatorProject\include\ram.bin)", std::ios::binary);

        for (int & i : ram)
        {
            ramFile >> i;
        }

        ramFile.close();
    }

    void compute()
    {
        int sum = 0;

        for (int i : ram)
        {
            sum += i;
        }

        std::cout << sum << std::endl;
    }

    void gpu()
    {
        for (int i : ram)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    void kbd()
    {
        std::cout << "Please, input 8 integers: " << std::endl;

        for (int & i : ram)
        {
            std::cin >> i;
        }
    }

    void save()
    {
        std::ofstream diskFile(R"(C:\develop\Skillboxcpp\25-practical\ComputerSimulatorProject\include\data.txt)",
                               std::ios::app);

        for (int i : ram)
        {
            diskFile << i << " ";
        }

        diskFile.close();
    }

    void load()
    {
        std::ifstream diskFile(R"(C:\develop\Skillboxcpp\25-practical\ComputerSimulatorProject\include\data.txt)");

        for (int & i : ram)
        {
            diskFile >> i;
        }

        diskFile.close();
    }
};
