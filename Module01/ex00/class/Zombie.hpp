#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

class Zombie {

private:
    std::string _name;

public:
    void announce( void );
    Zombie(void);
    ~Zombie(void);
};

#endif
