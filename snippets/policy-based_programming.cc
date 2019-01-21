template <typename LanguagePolicy>
class HelloWorld : private LanguagePolicy {
  using LanguagePolicy::message;
public:
  void run() const { std::cout << message(); }
};
class LanguagePolicyEnglish {
protected:
  std::string message() const { return "Hello, World!"; }
};
class LanguagePolicyFrench {
protected:
  std::string message() const { return "Bonjour, Monde !"; }
};
int main() {
  using HelloWorldEnglish = HelloWorld<LanguagePolicyEnglish>;
  HelloWorldEnglish hello_world;
  hello_world.run(); // prints "Hello, World!"
}
