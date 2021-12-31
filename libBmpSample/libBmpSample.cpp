#include "libBmp.h"
#include <iostream>

int main()
{
	unsigned char* data;
	int width;
	int height;
	auto r = bmpLoad("sample.bmp", &data, &width, &height);
	bmpSave("sample2.bmp", data, width, height);
	delete[] data;
	std::cout << "bmpLoad() result : " << r << std::endl;
	return 0;
}
