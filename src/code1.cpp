// Utilizando busqueda secuencial
//

#include <array>
#include <iostream>
#include <stdio.h>
#include "basicStat.hpp"
//#include<ramdon>

int main(int args, char* argc[])
{
	
	int presicion = 2;
	basicStat stat;
// Se lee la información y se carga a la lista ligada 
	if(stat.readData(argc[1])){
	      std::cout << "Faltal error opening file, it's empty or contain non-numeric data:  " << argc[1] << std::endl;
	      return 1;
	}
	
	std::cout << "mean :"<< std::fixed << std::setprecision(presicion) << stat.getMean() << std::endl;
	std::cout << "Std. Dev :" << std::fixed << std::setprecision(presicion) << stat.getStdDevi() << std::endl;

	
	return 0;

}

