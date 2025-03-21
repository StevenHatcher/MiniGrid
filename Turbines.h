#pragma once

//namespace MiniGrid {

	ref class Turbines {
	public:
		double size;
		int kwhYearly;
		double cost;
		Turbines(int kwhYearly, double cost, double size) {
			this->size = size;
			this->kwhYearly = kwhYearly;
			this->cost = cost;
		}
	};
//}