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
// this is the appropriate fucntion for the zoo function 
