// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Stephen Arthur
//  Rebecca Hollidge 
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;

		}
	}
	if (letter == 'b' || letter == 'B') //Written by Stephen
	{
		if (region == 1)
		{
			std::cout << "Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan, Brunei Darussalam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahamas, Barbados" << std::endl;

		}
	}
	if (letter == 'c' || letter == 'C') //Written by Stephen
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Democratic Republic of the Congo, Congo, Ivory Coast" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos Island, Cyrpus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cook Islands, Cuba" << std::endl;
		}
	}
	if (letter == 'd' || letter == 'D') // Written by Stephen
	{
		if (region == 1)
		{
			std::cout << "There are no d's in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Dijbouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no d's in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Dominican Republic" << std::endl;
		}
	}


	if (letter == 'e' || letter == 'E')
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Egypt, Equatorial Guinea, Eritea, Ethiopia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no e's in the rest of the world" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V')
	{
		if (region == 1)
		{
			std::cout << "Venezuela"  << std::endl;
		}
		if (region == 2)
		{
			std::cout << " Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no v's in africa " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu, Virgin Islands (British) , Virgin Islands (U.S.) " << std::endl;

		}
	}



	if (letter == 'w' || letter == 'W') // wrote by rebecca 

	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There is no W's in europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western SaharaNorthern " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no w's in aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands " << std::endl;

		}
	}

	if (letter == 'y' || letter == 'Y') // wrote by rebecca 

	{
		if (region == 1)
		{
			std::cout << "There are no ys in the americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There is no y's in europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There is no y's in africa " << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemem" << std::endl;
		}
		if (region == 5)
		{
			std::cout << " There are no y's in the rest of the world" << std::endl;

		}
	}

		if (letter == 'z' || letter == 'Z') // written by Pete
		{
			if (region == 1)
			{
				std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
			}
			if (region == 2)
			{
				std::cout << "There are no Zs in Europe" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "Zimbabwe, Zambia" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "There are no Zs in Aisa" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "There are no Zs in rest of the world" << std::endl;
			}

		}



		return 1;
	}