#ifndef FORM_CLASS
#define FORM_CLASS

class Form
{
  private:
    std::string const _nameform;
    bool  _signed;
    int _gradeforsign;
    int _gradeforexec; // de 1 a 150

  public:
    Form(void);
    Form(const std::string& name, int grade);
    ~Form(void);
    Form(const Form &copy);
    Form& operator=(const Form& content);
    std::string const getName(void) const;
    int  getGrade(void) const;
    void incrementGrade(void);
    void decreaseGrade(void);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what(void) const throw();
    };
};
