/*
animationexample.cpp
version: 11/13/2012

This example defines a Truck class and uses Hortsmann's graphics library to draw a 
truck moving across the window.

*/
#include "../cccfiles/ccc_win.h"
#include "../cccfiles/ccc_animate.h"

using namespace std;

class Truck {

  public:
    Truck(const Point& location, unsigned int size);
	Truck();

	/** Draws the Truck on the window. */
    void draw() const;

    /** Move the truck to the given location. */
	void move(const Point& location);

  private:

	Point _location;
    unsigned int _size;

    void drawBackWheel() const;
	void drawFrontWheel() const;
	void drawBody() const;
};

Truck::Truck():_location(0,0), _size(2){
 

}
Truck::Truck(const Point& location, unsigned int size): _location(location.get_x(), location.get_y())
{
  _size = size;
}

void Truck::draw()const
{
   drawBackWheel();
   drawFrontWheel();
   drawBody();
}


void Truck::move(const Point& location)
{
   double dx = location.get_x() - _location.get_x();
   double dy = location.get_y() - _location.get_y();
   _location.move(dx, dy);
}


void Truck::drawBackWheel()const
{
   double x = _location.get_x() - _size;
   double y = _location.get_y() + _size/2;
   Point center(x,y);
   Circle back_wheel(center, _size/2);
   cwin << back_wheel;
}

void Truck::drawFrontWheel()const
{
   double x = _location.get_x() + _size;
   double y = _location.get_y() + _size/2;
   Point center(x,y);
   Circle front_wheel(center, _size/2);
   cwin << front_wheel;  
}

void Truck::drawBody()const
{
   double x1 = _location.get_x() - _size;
   double x2 = _location.get_x() + _size;
   double x3 = _location.get_x() + 2*_size;

   double y1 = _location.get_y() + 3*_size;
   double y2 = _location.get_y() + _size;
   double y3 = _location.get_y() + 2*_size;

   Line seg1(Point(x1, y1), Point(x2, y1));
   Line seg2(Point(x1, y1), Point(x1, y2));
   Line seg3(Point(x1, y2), Point(x2, y2));
   Line seg4(Point(x2, y1), Point(x2, y2));

   Line seg5(Point(x2, y2), Point(x3, y2));
   Line seg6(Point(x3, y2), Point(x3, y3));
   Line seg7(Point(x2, y3), Point(x3, y3));

   cwin << seg1 << seg2 << seg3 << seg4 << seg5 << seg6 << seg7;
}

class House {
private:
	Point lowerLeft;
	double size;
	
	void drawDoor() const;
	void drawRoof() const;
	void drawFrame() const;
	void drawChimney() const;

public:
	House(const Point& location);

	void draw() const;
	void move(const Point& newLoc);
}

House::House(const Point& location) : lowerLeft(location) {
	size = 5;
	//location = location; //doesn't work : need to call them something different
}

void House::move(const Point& newLoc) {
	lowerLeft = newLoc;
}

void draw() const {
	drawDoor();
	drawRoof();
	drawFrame();
	drawChimney();
}


void House::drawDoor() const {
	double x = lowerLeft.get_x() + .45*size;
	double y = lowerLeft.get_y();
	Point lowerLeft(x, y);
	Point lowerRight(x + .1*size, y);
	Point upperRight(x + .1*size, y + .25*size);
	Point upperLeft(x, y + .25*size);

	Line left(lowerLeft, upperLeft);
	Line right(lowerRight, upperRight);
	Line top(upperLeft, upperRight);
	Line bottom(lowerLeft, lowerRight);
	cwin << left << right << top << bottom;
}
void House::drawRoof() const {
}
void House::drawFrame() const {
	double x = lowerLeft.get_x();
	double y = lowerLeft.get_y();
	Point upperLeft(x, y + size);
	Point upperRight(x + size, y + size);
	Point lowerRight(x + size, y);

	Line left(lowerLeft, upperLeft);
	Line right(lowerRight, upperRight);
	Line top(upperLeft, upperRight);
	Line bottom(lowerLeft, lowerRight);
	cwin << left << right << top << bottom;
	/* or like so:
	cwin << Line(lowerLeft, upperLeft); //draw the left
	*/
}

void House::drawChimney() const {
}
/* 
  main for the window graphics application
*/
int ccc_win_main() {

  
   const double PI = 3.14159;
   
   // boundaries for the window
   const double XMIN = -40;
   const double XMAX = 40;
   const double YMIN = -40;
   const double YMAX = 40;

   // set the coordinate system of the window
   cwin.coord(XMIN, YMAX, XMAX, YMIN);

	House myHouse(Point(0,0));
	myHouse.draw();

   Truck t1(Point(0, 10),  2);
   Truck t2(Point(0, 0), 4);
   Truck t3(Point(0, 20), 6);
   
   Truck convoy[3];
   convoy[0] = t1;
   convoy[1] = t2;
   convoy[2] = t3;


   // animate the truck driving past the screen
   for( int i = 0; i < 30; i++) {
     
	 for(int j = 0; j < 3; j++ )  {
	 convoy[j].draw();
     convoy[j].move(Point(i, j*20));
	 }
	 pause(1000-i*33);
     cwin.clear();
   }

   cwin << Message(Point((XMIN + XMAX)/2, (YMIN + YMAX)/2), "THE END");
   return 0;
};
