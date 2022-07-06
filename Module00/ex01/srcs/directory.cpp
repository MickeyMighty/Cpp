#include "../lib/directory.hpp"

#include <iostream>
#include <string.h>
#include <stdio.h>

// static void exit(void)
// {
//   ;
// }

static void aff_welcome(void) {
  std::cout << "\x1B[2J\x1B[H";
  std::cout << "\n\n  ** ** Hey Welcome to  Directory program ** **\n\n";
  std::cout << "====================================================\n";
  std::cout << "=\033[1;32m PLease enter one of the three command you have : \033[0m=\n";
  std::cout << "=\033[1;32m with uppercase.\033[0m                                  =\n";
  std::cout << "====================================================\n";
  std::cout << "====================================================\n";
  std::cout << "=\033[1;34m ADD \033[0m====\033[1;33m For register a new contact.\033[0m             =\n";
  std::cout << "====================================================\n";
  std::cout << "====================================================\n";
  std::cout << "=\033[1;34m SEARCH \033[0m=\033[1;33m For displays the requested contact.\033[0m     =\n";
  std::cout << "====================================================\n";
  std::cout << "====================================================\n";
  std::cout << "=\033[1;34m EXIT \033[0m==\033[1;33m For exit the program.\033[0m                    =\n";
  std::cout << "=========\033[1;33m Attention contacts will be lost forever.\033[0m =\n";
  std::cout << "====================================================\n";
  std::cout << "====================================================\n\n";
  std::cout << "Enter a command :\n";
}

int  main()
{
  int ret = 0;
  int index = -1;
  std::string str;
  Phonebook phonebk;

  aff_welcome();
  phonebk.nbr_contact = 0;
  do {
    std::cout << "$> ";
    if (!(std::getline(std::cin, str)))
      return (0);
    if (str == "ADD")
    {
      index++;
      ret = phonebk.add(index);
      if (ret == 0)
        index = index - 1;
      else if (ret == 2) {
        index = index - 1;
        std::cout << "\033[1;31mEmptydata doesn't work\nPlease try again\n\033[0m";
      }
      if (index > 8)
        index = 1;
    }
    else if (str == "SEARCH")
      phonebk.search();
    else if (str != "EXIT")
      std::cout << "\033[1;31mBad command\n\033[0m";
  } while (str != "EXIT");
}
