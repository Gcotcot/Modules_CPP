#include "Serializer.hpp"

void	dump(char *str)
{
	for (size_t i = 0; i < 30; i++)
	{
		if (static_cast<int> (str[i]) < 32 || static_cast<int> (str[i])  > 126)
			std::cout << '?';
		else
			std::cout << str[i];
	}
	std::cout << std::endl;
}

int main()
{
	Data		data, *pdata;
	uintptr_t	ptr;

	memcpy(data.str1, "abcdefg", 8);
	memcpy(data.str2, "hij", 4);
	memcpy(data.str3, "klmnopq", 8);
	data.sh = 0x4546;    //FE
	data.i = 0x44434241; //ABCD

	std::cout << data.str1 << " - " << data.str2 << " - " << data.str3 << " - " << data.i << " - " << data.sh << std::endl;
	std::cout << "Dump struct :" << std::endl;
	dump(reinterpret_cast<char *>(&data));

	ptr = Serializer::serialize(&data);
	std::cout << "Dump serial :" << std::endl;
	dump(reinterpret_cast<char *>(ptr));

	pdata = Serializer::deserialize(ptr);
	std::cout << "Dump deserialized :" << std::endl;
	dump(reinterpret_cast<char *>(pdata));
	std::cout << pdata->str1 << " - " << pdata->str2 << " - " << pdata->str3 << " - " << pdata->i << " - " << pdata->sh << std::endl;
}
