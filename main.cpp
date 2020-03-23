#include <iostream>

#include "proces.h"





int load_process(int liczba) {
	process process_1("data."+std::to_string(liczba));
	std::cout << "Dlugosc procesu " << liczba << " przed sortowaniem: " << process_1.calculate_length_of_process() << std::endl;
	process_1.sort_process_first();
	std::cout << "Dlugosc procesu " << liczba << " po sortowaniu: " << process_1.calculate_length_of_process() << std::endl;
	std::cout << std::endl << "Kolejnosc procesu " << liczba << " po sortowaniu:" << std::endl;
	process_1.print_order();
	std::cout << std::endl << std::endl;
	return 0;
}


int main() {
	std::cout << std::endl << "Program do sortowania zadan w procesie" << std::endl;
	std::cout << "Laduje plik data.txt i rozpoczynam prace!" << std::endl;
	for (int i = 1; i < 5; i++)
	{
		std::cout << std::endl << "Czas na proces data." << i << std::endl;
		load_process(i);
	}

	std::cout << std::endl << "Koniec programu!" << std::endl;
	int a;
	std::cout << "Wprowadz dowolny znak i wcisnij klawisz Enter, aby wyjsc z programu." << std::endl;
	std::cin >> a;
    return 0;
}