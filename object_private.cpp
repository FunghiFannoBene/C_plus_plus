#include <iostream>
using namespace std;
class person
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
};
int main()
{
  person person1("gianni", 18);
  person1.printPerson();
}
