#include <iostream>
#include <cmath>

int main() {
	float ProductionCost(1.5 * 100);
	float PreProductionCost(2.0 * 60);
	float ProducersCost(3.0 * 40);
	float TotalCost(ProductionCost + PreProductionCost + ProducersCost);

	std::cout << TotalCost;
}