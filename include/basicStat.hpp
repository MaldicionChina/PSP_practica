#ifndef BASICSTAT_H
#define BASICSTAT_H

#include <fstream>
#include <list>
#include <math.h>  
#include <iostream>  // std::cout, std::fixed
#include <iomanip>   // std::setprecision

#include <stdlib.h>
#include <ctype.h>

#define LIMIT_BUCLE 1000000

class basicStat
{
  
public:
      basicStat();
      double getMean();
      double getStdDevi();
      int readData(char* fileName);
        
private:
      int totalNumbers;
// Variable para recorrer la lista ligada
      std::list<double>::iterator it; 
      double mean = 0.0;
      double stdDevi = 0.0;
      double sumTotal = 0.0;
      double sumDesvi = 0.0;
// variable para abrir y leer el archivo de entrada
      std::fstream dataFile;  
// Lista ligada para almacenar los datos leidos desde el archivo
      std::list<double> data;

};

#endif
