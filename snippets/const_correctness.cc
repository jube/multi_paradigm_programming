class Person {
public:
  const std::string& getName() const; // OK!
  std::string& getNameEvil() const;   // KO!
  int getAge() const;                 // OK!

  std::string& getName();             // OK!
  // ...
};

void kaboom(const Person& p) {
  p.getNameEvil() = "Igor";           // KO!
}
