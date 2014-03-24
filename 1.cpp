#include<iostream>
using namespace std;

void main()
{
	///////// 변수선언////////////
	double g1, g2, g3, g4, g5;
	double min, max,avg;

	/////// 변수에 값을 입력받음 ///////////
	cout << "Enter five numbers : "; 
	cin >> g1 >> g2 >> g3 >> g4 >> g5;
	
	/////////// 최소값을 찾아냄 ///////////
	g1>g2 ? min=g2 : min=g1;
	g3>min ? min : min=g3;
	g4>min ? min : min=g4;
	g5>min ? min : min=g5;

	////////// 최대값을 찾아냄 ///////////
	g1<g2 ? max=g2 : max=g1;
	g3<max ? max : max=g3;
	g4<max ? max : max=g4;
	g5<max ? max : max=g5;

	///////// 최소값과 최대값을 출력함 //////////
	cout << endl;
	cout << "MIN : " << min << endl;
	cout << "MAX : " << max << endl;

	/////////// 평균값을 계산하고 출력함 ////////////
	avg = (g1+g2+g3+g4+g5) / 5;
	cout << "AVG : " << avg << endl;

}