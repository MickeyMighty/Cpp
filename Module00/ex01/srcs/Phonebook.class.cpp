#include "../lib/directory.hpp"

int Phonebook::add(int id)
{
  int pos = 0;
  std::string firstname, lastname, nickname, phonenumber, secret;

  std::cout << "What is your first name ?" << std::endl;
  if (!(std::getline(std::cin, firstname)))
    return (0);
  else if (firstname.length() == 0)
    return (2);
  this->contact[id].setdata(firstname, "firstname");
  std::cout << "What is your last name ?" << std::endl;
  if (!(std::getline(std::cin, lastname)))
    return (0);
  if (lastname.length() == 0)
    return (2);
  this->contact[id].setdata(lastname, "lastname");
  std::cout << "What is your nickname ?" << std::endl;
  if (!(std::getline(std::cin, nickname)))
    return (0);
  if (nickname.length() == 0)
    return (2);
  this->contact[id].setdata(nickname, "nickname");
  std::cout << "What is your phone number ?" << std::endl;
  if (!(std::getline(std::cin, phonenumber)))
    return (0);
  if (phonenumber.length() == 0)
    return (2);
  while (phonenumber[pos] != '\0') {
    if (isdigit(phonenumber[pos]) == 0) {
      std::cout << "\033[1;31mPlease enter only numbers\033[0m" << std::endl;
      return (0);
    }
    pos++;
  }
  this->contact[id].setdata(phonenumber, "phonenumber");
  std::cout << "What is your secret ?" << std::endl;
  if (!(std::getline(std::cin, secret)))
    return (0);
  if (secret.length() == 0)
    return (2);
  this->contact[id].setdata(secret, "secret");
  this->contact[id].index = id;
  if (this->nbr_contact < 8)
    this->nbr_contact++;
  return (1);
}

void  Phonebook::print_data(std::string str) {
  if (str.size() > 10) {
    str.resize(9);
    std::cout << str;
    std::cout << ".";
  }
  else {
    std::cout << std::setw(10);
    std::cout << str;
  }
}

int Phonebook::search(void) {
  std::string str;
  size_t nbr = 0;
  size_t pos = 1;
  int i = 0;

  if (this->nbr_contact == 0)
    std::cout << "\033[1;31mEmpty\nPlease add contact with the command \"ADD\"\033[0m" << std::endl;
  else {
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
    std::cout << "|-------------------------------------------|\n";
    while (pos <= this->nbr_contact) {
      std::cout << "|";
      std::cout << std::setw(10);
      std::cout << pos;
      std::cout << "|";
      print_data(this->contact[pos - 1].showdata("firstname"));
      std::cout << "|";
      print_data(this->contact[pos - 1].showdata("lastname"));
      std::cout << "|";
      print_data(this->contact[pos - 1].showdata("nickname"));
      std::cout << "|" << std::endl;
      std::cout << "|-------------------------------------------|\n";
      pos++;
    }
    std::cout << "Please enter the number of the contact who you want to see the information.\n";
    if (!(std::getline(std::cin, str)))
      return (0);
    while (str[i] != '\0') {
      if (isdigit(str[i]) == 0) {
        std::cout << "\033[1;31mPlease enter the number of the index\033[0m" << std::endl;
        return (0);
      }
      i++;
    }
    std::istringstream(str) >> nbr;
    if ((nbr <= nbr_contact) && nbr > 0) {
      std::cout << "Firstname : " << this->contact[nbr - 1].showdata("firstname") << std::endl;
      std::cout << "Lastname : " << this->contact[nbr - 1].showdata("lastname") << std::endl;
      std::cout << "Nickname : " << this->contact[nbr - 1].showdata("nickname") << std::endl;
      std::cout << "Phonenumber : " << this->contact[nbr - 1].showdata("phonenumber") << std::endl;
      std::cout << "Darkest Secret : " << this->contact[nbr - 1].showdata("secret") << std::endl;
    }
    else
      std::cout << "\033[1;31mWrong contact\nPlease try again\033[0m" << std::endl;
  }
  return (1);
}
