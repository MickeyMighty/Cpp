/*
 * c++98
 * std -> bibliotheque standard , namespace de std
 * cout -> sortie standard
 * cin -> entre standard
 *  endl -> backslash n
 *  << -> redirige dans la sortie standard
 *  >> -> recupere donne depuis l entre standard
 * str.size permet de recuperer la size de la string
 * std::toupper permet d'appeler la fonction toupper
 * letter est en size_type pour pouvoir comparer avec str.size qui est en syze_type
*/

#include <string> // std::string
#include <iostream> //std::cout
#include <locale> //std::locale, std::toupper

int	main(int ac, char **av)
{
	int	word = 1;
	std::string::size_type	letter = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (word < ac)
		{
			std::string str(av[word]);
			letter = 0;
			while (letter < str.size())
			{
				std::cout << (char)std::toupper(str[letter]);
				letter++;
			}
			word++;
		}
		std::cout << std::endl;
	}
	return (0);
}
