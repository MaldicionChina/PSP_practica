#include "basicStat.hpp"

basicStat::basicStat(){
 
}

int basicStat::readData(char* pathFile){
	double number = 0.0;
	totalNumbers = 0;
	int controlBucle = 0;
	dataFile.open(pathFile,std::fstream::in);
	
	if(!dataFile){
		std::cerr << "Failed to open file :" << pathFile << std::endl;
		return 0;
	}
	
	while(!dataFile.eof()){
	        dataFile>>number;
		std::cout << "Number " << number << std::endl;
		if(number != 0){
			data.push_back(number);
			totalNumbers++;
		}else{
			controlBucle++;
			// Control de bucle infinito o lectura de caracter no valido
			if(controlBucle < LIMIT_BUCLE) return 0;
		}
		
	}
// No hay números en el archivo	
	if(totalNumbers == 0) return 0; 

	dataFile.close();
	return 1;
}

int basicStat::putData(double insertNumber){
	data.push_front(insertNumber);
}

double basicStat::getStdDevi(){
  
  	for (it = data.begin(); it != data.end(); ++it){
		sumDesvi += pow((*it - mean),2);
	}
	
	stdDevi = sqrt(sumDesvi/(totalNumbers-1));
	
	return stdDevi;
}

double basicStat::getMean(){	
        
	for (it = data.begin(); it != data.end(); ++it){
		sumTotal += *it;
	}
	mean = sumTotal/totalNumbers;
	return (sumTotal/totalNumbers);
}