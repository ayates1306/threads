
class Cat {  // struct can be the same as class if the members are declared public and private correctly (struct has public default, class is private default
public:  // member variables and methods which follow are public
  Cat(unsigned int initialAge) {itsAge = initialAge;} // a constructor
  Cat(void) {};
  ~Cat() { std::cout << "cat destroyed\n";} // destructor
  unsigned int GetAge() const {return itsAge;} // const means that the method won't change any variables in the class
  void SetAge(unsigned int Age) {itsAge = Age;}

  unsigned int GetWeight() const {return itsWeight;}
  void SetWeight(unsigned int Weight) {itsWeight=Weight;}

  void Meow() const {std::cout << "meow\n";}

private:
  unsigned int itsAge; // the word 'its' here can differentiate member variables from non member variables 
  unsigned int itsWeight;
  void SomeFn(void);
};
