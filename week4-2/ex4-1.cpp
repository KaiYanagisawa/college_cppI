// S202148 柳澤快
#include <iostream>
#include <vector>
#include <string>
int main()
{
    int i{1}, v_i{0};
    std::vector<double> data;
    double sum, mean, variance, v_sum;
    std::string d;
    std::cout << "Input some numbers:";
    while (i <= 10)
    {
        std::cin >> d;
        if (std::cin.eof())
        {
            break;
        }
        else
        {
            data.push_back(std::stod(d));
            sum += data[i - 1];
        }
        ++i;
    }
    mean = sum / data.size();
    while (v_i < data.size())
    {
        v_sum += (data[v_i] - mean) * (data[v_i] - mean);
        v_i++;
    }
    variance = v_sum / data.size();
    std::cout << "Mean : " << mean << std::endl;
    std::cout << "Variance : " << variance << std::endl;
}