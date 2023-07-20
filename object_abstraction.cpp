#include <iostream>
using namespace std;
class abstractPerson
{
  virtual void askPhoneNumber()=0; //movement
};

class animal:abstractPerson //associate "abstractPerson"
{
  public:
  void askPhoneNumber()
  {
    std::cout << "bau\n";
  }
};

class person:abstractPerson
{
  private:
    string Name;
    int Age;
  public:
    void setName(string name)
    {
      Name = name;
    }
    string getName()
    {
      return(Name);
    }
    void setAge(int age)
    {
      Age = age;
    }
    int getAge()
    {
      return(Age);
    }
  void printPerson()
  {
    std::cout << Name << " "  << Age << ".\n";
  }
  person(string name, int age)
  {
    setName(name);
    setAge(age);
  }
  void askPhoneNumber()
  {
    std::cout << "I don't have a number, Sorry.\n";
  }
  
};
int main()
{
  person person1("gianni", 18);
  person1.printPerson();
  person1.askPhoneNumber();
  animal animal1;
  animal1.askPhoneNumber();
}
