#include <iostream>
#include <cmath>

using namespace std;

double mass, weight, normal, max_friction, angle, rad_angle;
const double PI = 3.1416;

double Weight (double mass, double rad_angle){
    return weight = mass*9.8;
}

double Normal (double weight){
    
    return weight * cos (rad_angle);
}

double maxFriction (double weight){
    return weight * sin(rad_angle);
    
}

double angleToRad (double angle){
    
    return (angle) * PI/180;
}

int main() {
    // insert code here...
    cout << "Inclined Plane - Physics \n" << "by Prof. Pablo Vaz\n";
    cout << "Enter mass m (in Kg) = ";
    cin >> mass;
    cout << "Enter the angle of the plane θ = ";
    cin >> angle;
    rad_angle = angleToRad(angle);
    cout.precision(3);
    cout << "The Weight of the mass is " << Weight(mass, rad_angle)
         << " N\n The Normal force is " << Normal(weight) << " N\n The minimum Friction to not slide down is " 
         << maxFriction(weight) << "N\n and the min friction coeficient is "<< tan(rad_angle) <<endl;
    
    return 0;
}
