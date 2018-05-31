#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double ax, bx, ay, by, tx, ty;
    int i, n, tocke;

/* initial information */    
    cout << "Vnesi a: ";
  cin >> ax; //left endpoint
    cout << "Vnesi b: ";
  cin >> bx; //right endpoint
    cout << "Please enter stevilo tock: ";
  cin >> tocke; //number of rectangles
 
 ay = log(ax);	// meja na y osti
 cout << "ay: "<<ay << "  ";
 by =log(bx);  // meja na y osi  
 cout << "by:" << by << endl;
 
    srand((int)time(0));
		double povrsina_pravokotnika = by*(bx-ax);
		
		cout << "P:" << povrsina_pravokotnika << endl;
    int stevec =0;
		
	for(int i=0; i<tocke; i++){
		double random = fmod(rand(),bx)+ax;
		tx=random;
		cout <<"tx:"<< tx << "  ";
		double random2 = fmod(rand(),by);
		ty=random2;
		cout << "ty:" << ty << endl;
	
	if(ty<log(tx))
		stevec++;
	
}
cout << "stevec: " << stevec << endl;
double procent_tock = (stevec*100)/tocke;
double pov = (povrsina_pravokotnika*procent_tock)/100;
cout << "Povrsina lika: " << pov << endl;
    return 0;
}

