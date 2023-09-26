
#include "Form.hpp"

Form::Form(void): _name("default"), _gradSign(0), _gradExec(0) {
	this->_signed = false;
}

Form::Form(std::string const name, int const Sign, int const Exec): _name(name), _gradeSign(Sign), _gradeExec(Exec) {
	this->_signed = false;
}

Form::Form(const Form &src): _name(src._name) {
	*this = src;
}

Form&	Form::operator=(const Form &rhs) {
	if (*this != &rhs) {
		this->_signed = rhs._signed;
		this->_gradeSign = rhs.getGradeSign();
		this->_gradeExec = rhs.getGradeExec();
	}
	return (*this);
}

Form::~Form(void) {
}

std::string const Form::getName(void) const {
	return (this->_name);
}

bool	Form::getBool(void) const {
	return (this->_signed);
}

int const	Form::getGradeSign(void) const {
	return (this->_gradeSign);
}

int const	Form::getGradeExec(void) const {
	return (this->_gradeExec);
}

void	Form::GradeTooHighException(void) {
	std::cout << this->getName << " form, grade " << grade << " is too High." << std::endl;
}

void	Form::GradeTooLowException(void) {
	std::cout << this->getName << " form, grade " << grade << " is too Low." << std::endl;
}

void	Form::execption(void) {
	try {
		if (
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs) {
	o << rhs.getName();
	o << " form, grade to sign ";
	o << rhs.getGradeSign();
	o << ", grade to execute ";
	o << rhs.getGradeExec();
	o << ", sign ";
	o << rhs.getBool();
	o << ".";
	return (o);
}
