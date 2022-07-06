#include "../lib/directory.hpp"

void Contact::setdata(std::string content, std::string name) {
  if (name == "firstname") {
    this->_firstname = content;
  }
  if (name == "lastname") {
    this->_lastname = content;
  }
  if (name == "nickname") {
    this->_nickname = content;
  }
  if (name == "phonenumber") {
    this->_phonenumber = content;
  }
  if (name == "secret") {
    this->_secret = content;
  }
    // return (this->_firstname);
}

std::string Contact::showdata(std::string name) {
  if (name == "firstname")
    return (this->_firstname);
  else if (name == "lastname")
    return (this->_lastname);
  else if (name == "nickname")
    return (this->_nickname);
  else if (name == "phonenumber")
    return (this->_phonenumber);
  else if (name == "secret")
    return (this->_secret);
  else
    return (NULL);
}
