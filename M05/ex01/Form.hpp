
#ifndef FORM_HPP
# define FORM_HPP

class Form {
    
    public:
        
        Form(void);
        Form(std::string const name, int const Sign, int const Exec);
        Form(const Form &src);
        Form&   operator=(const Form &rhs);
        ~Form(void);

        void    beSigned(Bureaucrat const &src);

        std::string const getName(void) const;
        bool    getBool(void) const;
        int const   getGradeSign(void) const;
        int const   getGradeExec(void) const;

    private:

        std::string const _name;
        bool    _signed;
        int const   _gradeSign;
        int const   _gradeExec;

        void    GradeTooHighExcetion(void);
        void    GradeTooLowException(void);
        void    exception(void);
};

std::ostream&   operator<<(std::ostream &o, Form const &rhs);

#endif
