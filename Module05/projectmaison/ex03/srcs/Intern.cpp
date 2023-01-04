
#include "../include/Intern.hpp"
#include "../include/SignException.hpp"

int indexOf(const std::string names[], const std::string &name) {
  for (int i = 0; i < 3; i++) {
    if (names[i] == name)
      return (i);
  }
  return -1;
}

Intern::Intern() {}

Intern::Intern(const Intern &intern) { (void)intern; }

Intern &Intern::operator=(const Intern &intern) {
  (void)intern;
  return (*this);
}

Intern::~Intern() {}

Form *findForm(const std::string &name, const std::string &target) {
  std::string names[] = {"presidential pardon", "robotomy request",
                         "shrubbery creation"};
  Form *forms[3];
  forms[0] = new PresidentialPardonForm(target);
  forms[1] = new RobotomyRequestForm(target);
  forms[2] = new ShrubberyCreationForm(target);
  int index = indexOf(names, name);
  if (index != -1) {
    for (int i = 0; i < 3; i++) {
      if (i != index)
        delete forms[i];
    }
    std::cout << "Intern create " << forms[index]->getName() << std::endl;
    return forms[index];
  }
  for (int i = 0; i < 3; i++) {
    delete forms[i];
  }
  FormNotFound nf;
  throw nf;
}

Form *Intern::makeForm(const std::string &name, const std::string &target) {

  Form *form;

  try {
    form = findForm(name, target);
    return form;
  } catch (std::exception &e) {

    std::cout << "Intern couldnt create form because " << e.what() << std::endl;
  }
  return (nullptr);
}
