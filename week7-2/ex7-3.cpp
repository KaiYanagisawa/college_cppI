// S202148 柳澤快
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
int main()
{
    std::ifstream fin{"carlist.dat"};
    std::vector<std::string> name, maker, type, fKw, eKw;
    if (!fin)
    {
        std::cerr << "cannot open\n";
        return 1;
    }
    fin.seekg(44, fin.beg);
    int i{0};
    for (std::string x{}; fin >> x;)
    {
        if (i % 5 == 0)
            name.push_back(x);
        else if (i % 5 == 1)
            maker.push_back(x);
        else if (i % 5 == 2)
            type.push_back(x);
        else if (i % 5 == 3)
            fKw.push_back(x);
        else if (i % 5 == 4)
            eKw.push_back(x);
        ++i;
    }
    int electric_sum{0}, engin_sum{0}, hybrid_sum{0};
    int elec_num{0}, engin_num{0}, hybrid_num{0};
    int electric_ave{0}, engin_ave{0}, hybrid_ave{0};
    for (int i = 0; i < name.size(); ++i)
    {
        std::cout << std::setw(10) << name[i] << " " << std::setw(11) << maker[i] << " " << std::setw(8) << type[i] << " " << std::setw(3) << fKw[i] << " " << std::setw(3) << eKw[i] << std::endl;
        if (type[i] == "Electric")
        {
            electric_sum += atoi(eKw[i].c_str());
            elec_num++;
        }
        else if (type[i] == "Engine")
        {
            engin_sum += atoi(fKw[i].c_str());
            engin_num++;
        }
        else if (type[i] == "Hybrid")
        {
            hybrid_sum += atoi(fKw[i].c_str());
            hybrid_sum += atoi(eKw[i].c_str());
            hybrid_num++;
        }
    }
    electric_ave = electric_sum / elec_num;
    engin_ave = engin_sum / engin_num;
    hybrid_ave = hybrid_sum / hybrid_num;
    std::cout << std::endl
              << "Average of ElectricCar Power is " << electric_ave << "Kw\n"
              << "Average of EngineCar Power is " << engin_ave << "Kw\n"
              << "Average of HybridCar Power is " << hybrid_ave << "Kw\n";
    return 0;
}