/*************************************************************************
    > File Name: exam2.cpp
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 二 12/31 17:11:21 2019
 ************************************************************************/

#include <iostream>

int main()
{
	using namespace std;
	const float meterPerInch = 0.0254;
	const float kiloPerPond = 2.2;
	const int inchPerFoot = 12;

	float heightInch,heightFoot,weightPond;
	float height,weight;
	float BMI;

	cout << "Enter your Height in Foot and Inch, Foot:__\b\b";
	cin >> heightFoot;
	cout << ", and Inch:__\b\b";
	cin >> heightInch;
	height = heightFoot * inchPerFoot + heightInch;
	height = height * meterPerInch;
	cout << "\nEnter your Weight in pond:____\b\b\b\b";
	cin >> weightPond;
	weight = weightPond/kiloPerPond;
	BMI = weight/height/height;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << "\n Your BMI is " << BMI << endl;
	return 0;
}
