#include <iostream>
#include <cmath>

double Weight(double mass_kg, double rad_angle) {
    return mass_kg * 9.8;
}

double Normal(double weight_N, double rad_angle) {
    return weight_N * std::cos(rad_angle);
}

double maxFriction(double weight_N, double rad_angle) {
    return weight_N * std::sin(rad_angle);
}

double angleToRad(double angle_deg) {
    const double PI = 3.1416;
    return angle_deg * PI / 180.0;
}

int main() {
    double mass_kg, angle_deg;
    
    std::cout << "Inclined Plane - Physics\n"
              << "by Prof. Pablo Vaz\n";

    std::cout << "Enter mass (in kg): ";
    std::cin >> mass_kg;

    std::cout << "Enter the angle of the plane (in degrees): ";
    std::cin >> angle_deg;

    double rad_angle = angleToRad(angle_deg);
    double weight_N = Weight(mass_kg, rad_angle);
    double normal_N = Normal(weight_N, rad_angle);
    double max_friction_N = maxFriction(weight_N, rad_angle);
    double friction_coefficient = std::tan(rad_angle);

    std::cout.precision(3);
    std::cout << "The weight of the mass is " << weight_N << " N\n"
              << "The normal force is " << normal_N << " N\n"
              << "The minimum friction force required to prevent slipping is "
              << max_friction_N << " N\n"
              << "The minimum friction coefficient is " << friction_coefficient << std::endl;

    return 0;
}

