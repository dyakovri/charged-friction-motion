#include "qParticle.h"



qParticle::qParticle(double q, double E, double B, double alpha) : RungeKutta(6)
{
	this->q = q;
	this->B = B;
	this->E = E;
	this->alpha = alpha;
}

std::vector<double> qParticle::F(double t, std::vector<double>& Y)
{
	FY[0] = Y[3]; // x' = Vx
	FY[1] = Y[4]; // y' = Vy
	FY[2] = Y[5]; // z' = Vz

	FY[3] = q * E - q * Y[5] * B*sin(alpha);
	FY[4] = q * Y[5] * B*cos(alpha);
	FY[5] = q * Y[3] * B*sin(alpha) - q * Y[4] * B*cos(alpha);

	return FY;
}
