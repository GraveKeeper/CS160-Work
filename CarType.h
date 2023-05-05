#include <fstream>
using namespace std;

class CarType
{
	private:
		char name[101], origin[101];
		double mpg,displacement,horsepower,weight,acceleration;
		int cylinders,model;
	public:
	    CarType();
		CarType(ifstream inFile,char iname[]);
		char * getName();
		double getMpg();
		int getCylinders();
		double getDisplacement();
		double getHorsepower();
		double getWeight();
		double getAcceleration();
		int getModel();
		char * getOrigin();
		void display();
};
