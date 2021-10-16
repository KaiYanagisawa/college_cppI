// S202148 柳澤快
#include <iostream>
#include <vector>
int main()
{
    int i{1}, v_i{0};
    std::vector<double> data;
    double sum, mean, variance, v_sum, d;
    std::cout << "Input some numbers:";
    for (int i = 1; i <= 10; i++)
    {
        std::cin >> d;
        if (std::cin.eof())
        {
            break;
        }
        else
        {
            data.push_back(d);
            sum += data[i - 1];
        }
    }
    mean = sum / data.size();
    for (int v_i = 0; v_i < data.size(); v_i++)
    {
        v_sum += (data[v_i] - mean) * (data[v_i] - mean);
    }
    variance = v_sum / data.size();
    std::cout << "Mean : " << mean << std::endl;
    std::cout << "Variance : " << variance << std::endl;
}