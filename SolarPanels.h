#pragma once

//namespace MiniGrid {
	ref class SolarPanels
	{
	public:
		double size;
		int surfaceArea;
		int kwhYearly;
		int weight;
		double cost;
		SolarPanels(double surfaceArea, int weight, double cost, int kwhYearly) {
			this->surfaceArea = surfaceArea;
			this->weight = weight;
			this->cost = cost;
			this->kwhYearly = kwhYearly;
		}
	};
//}
