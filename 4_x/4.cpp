#include <iostream>
#include "constants.h"

double getHeight() {
	double x;
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> x;
	return x;
}

double calculateHeight(double initial_height,int time) {
	double distance_fallen = myConstants::gravity * time * time / 2;
	double current_height = initial_height - distance_fallen;
	if (current_height < 0)
		return 0;
	else
		return current_height;
}

void printHeightAtTime(double initial_height, int time) {
	std::cout << "At " << time << " seconds, the ball is at height " << calculateHeight(initial_height, time) << " meters\n";
}
int main()
{
	double height{ getHeight() };
	for (int i = 0; i < 5; ++i) {
		printHeightAtTime(height, i);
	}
	std::cout << "At 5 seconds, the ball is on the ground.\n";
}