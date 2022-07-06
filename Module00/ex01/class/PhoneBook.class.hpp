#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {

public:
    size_t nbr_contact;
    Contact contact[8];
    void print_data(std::string str);
    int search(void);
    int add(int id);
};
#endif
