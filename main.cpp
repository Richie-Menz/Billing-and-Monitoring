#include <string>
#include <iostream>
#include <vector>
#include <iomanip> // For better decimal formatting

using namespace std;

class Appliance {
private:
    string name;
    double powerRating;
    double usageHours;

public:
    Appliance(string n, double p, double h) : name(n), powerRating(p), usageHours(h) {}

    string getName() const { return name; }
    double getPower() const { return powerRating; }
    double getHours() const { return usageHours; }

    double calculateEnergy() const {
        return (powerRating * usageHours) / 1000.0;
    }
};

vector<Appliance> appliances;