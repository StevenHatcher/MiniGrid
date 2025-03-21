#pragma once
ref class Generators
{
	public:
		double size;
		int kwhYearly;
		int fuelPerHour;
		double cost;
		Generators(int kwhYearly, int fuelPerHour, double cost, double size) {
			this->size = size;
			this->kwhYearly = kwhYearly;
			this->fuelPerHour = fuelPerHour;
			this->cost = cost;
		}
};


