#pragma once
#include "PreProcessing.h"
#include <string>
#include <math.h>
#include "IntensityImage.h" 
#include "IntensityImageStudent.h" 
class Mask
{
public:
	Mask(std::vector<int> maskValues, int maskWidth);
	~Mask();

	IntensityImageStudent *useMaskOn(const IntensityImage &image);

private:
	int currentRow;
	std::vector<int> maskValues;
	int maskWidth;

};

