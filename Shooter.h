#pragma once
#include <locale.h>
#include <iostream>

int shooter()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	int score = 0;
	int counter = 0;
	std::cout << "Your first shoot:" << std::endl;
	while (score < 50)
	{
		std::cin >> x, std::cin >> y;
		std::cout << "¬ведите координаты х и y" << std::endl;
		if (x <= 1 & x >= -1 & y <= 1 & y >= -1) score += 10;
		if ((x > 1 & x < 2) & (x < -1 & x > -2) | (y > 1 & y < 2) & (y < -1 & y > -2)) score += 5;
		std::cout << score << std::endl;
		counter++;
	}
	if (counter <= 5) std::cout << "Sniper" << std::endl;
	else if (counter <= 7) std::cout << "Shoter" << std::endl;
	else std::cout << "Novice" << std::endl;

	return 0;
}
