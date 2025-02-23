#include <iostream>
#include <string>

namespace std { // Normal standard namespace
class ActionLawsuit {
public:
  std::string caseName;
  ActionLawsuit(std::string name) : caseName(name) {}

  void process() {
    std::cout << "[Standard Court] Processing lawsuit: " << caseName
              << std::endl;
  }
};
} // namespace std

namespace super {
namespace std { // Shadowing the std namespace with a new legal system
class ActionLawsuit {
public:
  std::string caseName;
  int priorityLevel;

  ActionLawsuit(std::string name, int priority)
      : caseName(name), priorityLevel(priority) {}

  void process() {
    std::cout << "[Supreme Court] Processing lawsuit: " << caseName
              << " with priority level " << priorityLevel << std::endl;
  }
};
} // namespace std
} // namespace super

int main() {
  // Using the normal standard namespace
  std::ActionLawsuit civilCase("Copyright Infringement");
  civilCase.process();

  // Using the nested shadowed std inside super
  super::std::ActionLawsuit highPriorityCase("Patent Dispute", 10);
  highPriorityCase.process();

  return 0;
