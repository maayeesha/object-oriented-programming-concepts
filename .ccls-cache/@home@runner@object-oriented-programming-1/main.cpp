#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee {
  virtual void
  askForPromotion() = 0; // whoever signs for the abstractemployee contract will
                         // have to provide impmentation for this method hence
                         // "virtual"
};

class Employee : AbstractEmployee {
  // private:
  string Name;
  string Company;
  int Age;

public:
  // setter
  void setName(string name) { Name = name; }
  // getter
  string getName() { return Name; }
  // setter
  void setCompany(string company) { Company = company; }
  // getter
  string getCompany() { return Company; }
  // setter
  void setAge(int age) {
    if (age >= 18)
      Age = age;
  }
  // getter
  int getAge() { return Age; }

  void Introduceyourself() {
    cout << "Name: " << Name << endl;
    cout << "Company: " << Company << endl;
    cout << "Age: " << Age << endl;
  }

  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  }
  void askForPromotion() {
    if (Age > 30) {
      cout << Name << " got promoted" << endl;
    }
      else cout << Name << " ,Sorry, no promotion for you" << endl;
    }
};

class Developer: Employee{
 string favouriteProgrammingLanguage;
};
int main() {
  Employee employee1 = Employee("Maayeesha", "ABC", 24);
  // employee1.Introduceyourself();
  // employee1.Name = "Maayeesha";
  // employee1.Company = "ABC";
  // employee1.Age = 24;
  // employee1.Introduceyourself();
  Employee employee2 = Employee("Farzana", "XYZ", 35);
  // employee2.Introduceyourself();

  // Encapsulation
  //  employee1.setAge(12);
  //  cout << employee1.getName() << " is " << employee1.getAge() << " years
  //  old."
  //       << endl;

  // Abstraction
  //employee1.askForPromotion();
  employee2.askForPromotion();
}