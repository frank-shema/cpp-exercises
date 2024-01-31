#include <iostream>
#include <cstring>

class ZooAnimal  
{
private:
  char *name;
  int cageNumber;
  int weightDate;
  int weight;
public:
  void Destroy (); // destroy function
  char* reptName ();
  int daysSinceLastWeighed (int today);
  void Create(const char* animalName, int animalCageNumber, int animalWeightDate, int animalWeight);
};

void ZooAnimal::Destroy()
{
    delete [] name;
}

char* ZooAnimal::reptName()
{
    return name;
}

int ZooAnimal::daysSinceLastWeighed(int today)
{
    // Calculate and return the number of days since the animal was last weighed
    return today - weightDate;
}

void ZooAnimal::Create(const char* animalName, int animalCageNumber, int animalWeightDate, int animalWeight)
{
    // Allocate memory for the name and copy the provided animalName
    name = new char[strlen(animalName) + 1];
    strcpy(name, animalName);

    // Set the other member variables
    cageNumber = animalCageNumber;
    weightDate = animalWeightDate;
    weight = animalWeight;
}

int main()
{
    // Create an instance of ZooAnimal
    ZooAnimal animal;

    // Create the animal with the provided details
    animal.Create("Lion", 1, 20220101, 200);

    // Access and display the animal's name
    std::cout << "Animal Name: " << animal.reptName() << std::endl;

    // Calculate and display the number of days since the animal was last weighed
    int today = 20220110;
    int daysSinceWeighed = animal.daysSinceLastWeighed(today);
    std::cout << "Days Since Last Weighed: " << daysSinceWeighed << std::endl;

    // Clean up memory
    animal.Destroy();

    return 0;
}