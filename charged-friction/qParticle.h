#pragma once
#include "RungeKutta.h"
class qParticle :
	public RungeKutta
{
private:
	double q;
	double E; 
	double B;
	double alpha;

public:
	qParticle(double q, double E, double B, double alpha);
	~qParticle();

	double get_x() { return Y[0]; };
	double get_y() { return Y[1]; };
	double get_z() { return Y[2]; };

	virtual std::vector<double> F(double t, std::vector<double>& Y) override;
};

