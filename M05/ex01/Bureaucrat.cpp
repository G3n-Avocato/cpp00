
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(0) {
    this->exception();
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
    this->exception();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name) {
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs) {
        this->_grade = rhs.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {
}

std::string const Bureaucrat::getName(void) const {
    return (this->_name);
}

int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

void    Bureaucrat::upGrade(void) {
    this->_grade--;
    this->exception();
}

void    Bureaucrat::downGrade(void) {
    this->_grade++;
    this->exception();
}

void    Bureaucrat::exception(void) {
    try {
        if (this->_grade > 150 || this->_grade < 1)
            throw std::exception();
    }
    catch (std::exception& e) {
        if (this->_grade < 1)
            this->GradeTooHighException();
        else
            this->GradeTooLowException();
    }
}

void    Bureaucrat::GradeTooHighException(void) {
    std::cout << this->_name << ", " << this->_grade << " is too High." << std::endl;
    this->_grade = 1;
}

void    Bureaucrat::GradeTooLowException(void) {
    std::cout << this->_name << ", " << this->_grade << " is too Low." << std::endl;
    this->_grade = 150;
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << rhs.getName();
    o << ", bureaucrat grade ";
    o << rhs.getGrade();
    o << ".";
    return (o);
}
