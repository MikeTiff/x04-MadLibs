///Authors: 
#include <iostream>
#include <string>

int main()
{ std::string name;
  std::string car;
  std::string gend;
  char letter;
  int wholnum;
  double decnumber;
  std::cout << "What name would you like to give this character?"<< std::endl;
  std::cin >> name;
  std::cout << "Is "<<name<<" a he or she?";
  std::cin >> gend;
  std::cout << "What kind of car should "<<name<<" be driving?"<< std::endl;
  std::cin >> car;
  std::cout << "Pick a model letter from a-z"<<std::endl;
  std::cin >> letter;
  std::cout << "Pick a whole number greater than 30"<< std::endl;
  std::cin >> wholnum;
  std::cout << "Pick a number with a decimal";
  std::cin >> decnumber;
  std::cout <<name<<" was driving a "<<car<<" model "<<letter<<std::endl;
  std::cout << "to school, when "<<name<<" got to the parking structure\n";
  std::cout <<gend <<" spent "<<wholnum<<" minutes driving around.  Out of\n";
  std::cout <<"anger "<<name<<" ran over "<<decnumber<< " people on the way out\n";
  return 0;
}
