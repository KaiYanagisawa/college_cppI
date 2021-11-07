// S202148 –öàV‰õ
#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::vector;
int main()
{

	/*
	‚QŸŒ³”z—ñ‚ğéŒ¾‚µ‚È‚³‚¢
	*/
	vector<vector<double> > setOfPoints{6, vector<double>(3, 0)};

	vector<double> point1{0.0, 0.3, 1.8}, point2{1.0, 1.0, 1.0},
		point3{5.5, 6.2, 8.4}, point4{5.9, 2.0, 8.0},
		point5{3.6, 8.2, 9.7}, point6{14.3, 12.9, 15.0};

	/*
	point1`point6‚ğéŒ¾‚µ‚½‚QŸŒ³”z—ñ‚É’Ç‰Á‚µ‚È‚³‚¢
	*/
	for (int i = 0; i < setOfPoints.size(); i++)
	{
		for (int j = 0; j < setOfPoints[i].size(); j++)
		{
			vector<double> p;
			if (i == 0)
				p = point1;
			else if (i == 1)
				p = point2;
			else if (i == 2)
				p = point3;
			else if (i == 3)
				p = point4;
			else if (i == 4)
				p = point5;
			else if (i == 5)
				p = point6;

			setOfPoints[i][j] = p[j];
		}
	}

	/*
	“Y‚¦š(1`6)‚ª˜A‘±‚Å‚ ‚é“ñ‚Â‚Ì“_‚ÌŠÔ‚Ì‹——£‚ğ‹‚ß‚ÄAo—Í‚µ‚È‚³‚¢
	*/

	for (int i = 0; i < setOfPoints.size() - 1; i++)
	{
		double len{0};
		len = std::sqrt(std::pow((setOfPoints[i][0] - setOfPoints[i + 1][0]), 2) + std::pow((setOfPoints[i][1] - setOfPoints[i + 1][1]), 2) + std::pow((setOfPoints[i][2] - setOfPoints[i + 1][2]), 2));
		cout << "The distance between point" << i + 1 << " and " << i + 2 << " is " << len << std::endl;
	}

	return 0;
}
