#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _secret;

public:
    int index;
    void setdata(std::string content, std::string name);
    std::string showdata(std::string name);
};
#endif
