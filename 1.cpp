#include<iostream>
using namespace std;

void main()
{
	///////// ��������////////////
	double g1, g2, g3, g4, g5;
	double min, max,avg;

	/////// ������ ���� �Է¹��� ///////////
	cout << "Enter five numbers : "; 
	cin >> g1 >> g2 >> g3 >> g4 >> g5;
	
	/////////// �ּҰ��� ã�Ƴ� ///////////
	g1>g2 ? min=g2 : min=g1;
	g3>min ? min : min=g3;
	g4>min ? min : min=g4;
	g5>min ? min : min=g5;

	////////// �ִ밪�� ã�Ƴ� ///////////
	g1<g2 ? max=g2 : max=g1;
	g3<max ? max : max=g3;
	g4<max ? max : max=g4;
	g5<max ? max : max=g5;

	///////// �ּҰ��� �ִ밪�� ����� //////////
	cout << endl;
	cout << "MIN : " << min << endl;
	cout << "MAX : " << max << endl;

	/////////// ��հ��� ����ϰ� ����� ////////////
	avg = (g1+g2+g3+g4+g5) / 5;
	cout << "AVG : " << avg << endl;

}