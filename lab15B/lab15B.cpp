/******************
*Cheyenne Buchert
*CIS 1202
*Lab 15 B
*4/15/2025
*******************/

#include <iostream>
#include <cmath>

using namespace std;

//Template function
template <typename T>
T half(T value) {
	return value / 2;
}

//Overload for int type
int half(int value) {
	return static_cast<int>(round(static_cast<float>(value) / 2));
}