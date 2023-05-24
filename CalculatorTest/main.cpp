#include "pch.h"
#include "calculator.h"
#include <iostream>
int main(){
	Calculator cal;
	std::cout << "1+3="<<cal.Add(1,3)<<"   1*3="<<cal.Multiply(1,3)<<std::endl;
	return 0;

}
