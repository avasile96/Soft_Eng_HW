#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;
 
class ZooAnimal
{
private:
    char const *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother; // ZOO_ANIMAL #2 - exercise 3

public:

    ~ZooAnimal();

    void SetName(char const* name){this->name = name;}
    char const* reptName (){return name;}  // ZOO_ANIMAL #1 - exercise 3

    int reptWeightDate(){return weightDate;}  // ZOO_ANIMAL #2 - exercise 1
    void SetweightDate(int weightDate){this->weightDate = weightDate;}
    void changeWeightDate(int today){this->weightDate = today;} // ZOO_ANIMAL #2 - exercise 2

    void isMotherof(ZooAnimal& child){child.mother = this;} // ZOO_ANIMAL #2 - exercise 3
    ZooAnimal GetMother(){return *mother;} // ZOO_ANIMAL #2 - exercise 3

    // Constructor
    void Create(char const *name, int cageNumber, int weightDate, int weight);  // ZOO_ANIMAL #1 - exercise 1

    // Animal weighing days function
    int daysSinceLastWeighed (int today)  // ZOO_ANIMAL #1 - exercise 2
    {
        int startday, thisday;
        thisday = today/100*30 + today - today/100*100;
        startday = weightDate/100*30 + weightDate - weightDate/100*100;
        if (thisday < startday) 
            thisday += 360;
        return (thisday-startday);
    }
    
};

// Defining the constructor - ZOO_ANIMAL #1 - exercise 1
void ZooAnimal::Create(char const *name, int cageNumber, int weightDate, int weight)
{
    this->name = name;
    this->weight = weight;
    this->cageNumber = cageNumber;
    this->weightDate = weightDate;
}

// Defining the destroyer
ZooAnimal::~ZooAnimal()
{	
    // cout << "Animal " << this -> name << " destroyed\n";
}

int main ()
{
    ZooAnimal Harambe;

    Harambe.Create ("Harambe", 200, 9000, 400);  // ZOO_ANIMAL #1 - exercise 1

    ZooAnimal Bozo;

    Bozo.Create ("Bozo", 300, 200, 500);  // ZOO_ANIMAL #1 - exercise 1

    cout << "This animal's name is " << Bozo.reptName() << endl;  // ZOO_ANIMAL #1 - exercise 3
    cout << "There have been " << Bozo.daysSinceLastWeighed(300) << " days since this animal has been weighed."<< endl;  // ZOO_ANIMAL #1 - exercise 2

    cout << "The old weight date was " << Bozo.reptWeightDate() << endl;
    Bozo.changeWeightDate(300);
    cout << "The new weight date is " << Bozo.reptWeightDate() << endl;

    Bozo.isMotherof(Harambe);

    cout <<"The mother of Harambe is " << Harambe.GetMother().reptName() << "." << endl; // ZOO_ANIMAL #2 - exercise 3

    Bozo.~ZooAnimal();

    return 0;
}
