#include <iostream>
using namespace std;

struct punct{
	int x;
	int y;
};

struct dreptunghi{
	punct L;
	punct l;
};

void arie(dreptunghi dr);

void citire_puncte(){
	dreptunghi dr;
	cout << "Introduceti punctele pt a forma L" << endl;
	cout << " x " ;
	cin >> dr.L.x;
	cout << "y ";
	cin >> dr.L.y;

	cout << "Introduceti punctele pt a forma l" << endl;
	cout << " x ";
	cin >> dr.l.x;
	cout << " y ";
	cin >> dr.l.y;
	arie(dr);
}

double dist(punct p, punct t){
	double dist;

	dist= sqrt((double)((p.x-t.x)*(p.x-t.x))+((p.y-t.y)*(p.y-t.y)));
	
	return dist;
}

void arie(dreptunghi dr){
	double L,l;
	punct x={dr.l.x,dr.L.y};
	L=dist(dr.L,x);
	l=dist(x,dr.l);
	cout << "Aria dreptunghiului este " << l*L << endl;
}

int main(){
	citire_puncte();
	system("pause");
	return 0;
}