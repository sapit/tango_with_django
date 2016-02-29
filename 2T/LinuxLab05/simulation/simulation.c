#include "simulation.h"

/**
 * Returns the relitivistic mass of an object given its rest mass and velocity
 */
double rel_mass(double rest_mass, double velocity)
{
	return rest_mass / ( sqrt( 1 - ( (velocity * velocity) / (C * C) ) ) );
}


/**
 * Returns the kintetic energy of an object given its mass and velocity
 */
double kinetic_energy(double mass, double velocity) 
{
    /*
     * E_k = 1/2 * m * v^2
     */

     return 0.0;
}

