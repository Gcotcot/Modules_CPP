#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <cstring>
# include <cstdio>
# include <stdint.h>

typedef struct		s_data {
		char 	str1[8];
		char 	str2[4];
		short	sh;
		int		i;
		char 	str3[8];
}Data;

class	Serializer {

	private :
		Serializer(void);
		Serializer(const Serializer &ref);
		Serializer &operator = (const Serializer &ref);
		~Serializer(void);
	
	public :
		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);
};

#endif
