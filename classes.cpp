#include <iostream> 
 
 
class Tricycle{ 
public: 
	int getSpeed(); 
 	void setSpeed(int speed); 
 	void pedal(); 
 	void brake(); 
 private: 
 	int speed; 
 }; 
 
 
 
 
 int Tricycle::getSpeed(){ 
 	return speed; 
 } 
 
 
 // apply the brake on the trike 
 void Tricycle::brake(){ 
 	setSpeed(speed - 1); 
 	std::cout << "\nBreaking; tricycle speed " << speed << " mph\n"; 
 } 
 
 
 
 
 void Tricycle::setSpeed(int newSpeed){ 
 	if (newSpeed >= 0){ 
 		speed = newSpeed; 
 	} 
 } 
 
 
// pedal the trike 
 void Tricycle::pedal(){ 
 	setSpeed(speed + 1); 
 	std::cout <<"\nPedaling; tricycle speed " << speed << " mph\n"; 
 } 
 
 
 // create a trike and ride it 
 
 
 int main(){ 
 	Tricycle trike; 
 	trike.setSpeed(0); 
 	trike.pedal(); 
 	trike.pedal(); 
 	trike.brake(); 
 	trike.brake(); 
 	trike.brake(); 
 
 
 	system("pause>NULL"); 
 	return 0; 
 } 

