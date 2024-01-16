#ifndef Array_HPP
# define Array_HPP

# define MAX_VAL 100
# include <iostream>

template <class T>
class Array {
	private :
		int lenght;
		T *array;
	public :
		Array(void) {this->lenght = 0; this->array = new T[0];};
		Array(const int n)
		{
			if (n < 0) {throw outOfRange();}
			else {this->lenght = n; this->array = new T[n];}
		};
		Array(const Array &ref) {this->array = NULL;*this = ref;};
		~Array(void)
		{
			if (this->array)
				delete [] this->array;
		};
		Array &operator=(const Array &ref)
		{
			if (this->array)
				delete [] this->array;
			this->lenght = ref.lenght;
			this->array = new T[this->lenght];
			for (int i = 0; i < this->lenght; i++)
				this->array[i] = ref.array[i];
			return (*this);
		};
		T &operator[](const int n)
		{
			if (n >= this->lenght || n < 0)
				throw outOfRange();
			return(this->array[n]);
		};
		class outOfRange : public std::exception
		{
			virtual const char *what() const throw() {return ("Out of size");}
		};
		int size(void) const {return (this->lenght);};
};

#endif
