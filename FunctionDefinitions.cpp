#include "Skin.h"

#define PHRASES 99
const char* villager_names[10] =
{
    "Jake",
    "Jacob",
    "Robert",
    "Daniel",
    "Maya",
    "Mike",
    "Trevor",
    "Liz",
    "Layla",
    "Rose"
};




void Character_Functions_Jake::JakeDataCharacterRandomSentence()
{
	Jake_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("JakeDataReader:%s %d\n", data.jake_phrases[random], random);
}

void PrintInfoJake()
{
	Character_Functions_Jake Jake;
	int random = randomNumberGenerator(0, PHRASES);
	Jake.JakeDataCharacterRandomSentence();
}




void Character_Functions_Jacob::JacobDataCharacterRandomSentence()
{
	Jacob_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("JacobDataReader:%s %d\n", data.jacob_phrases[random], random);
}

void PrintInfoJacob()
{
	Character_Functions_Jacob Jacob;
	int random = randomNumberGenerator(0, PHRASES);
	Jacob.JacobDataCharacterRandomSentence();
}




void Character_Functions_Robert::RobertDataCharacterRandomSentence()
{
	Robert_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("RobertDataReader:%s %d\n", data.robert_phrases[random], random);
}

void PrintInfoRobert()
{
	Character_Functions_Robert Robert;
	int random = randomNumberGenerator(0, PHRASES);
	Robert.RobertDataCharacterRandomSentence();
}




void Character_Functions_Daniel::DanielDataCharacterRandomSentence()
{
	Daniel_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("DanielDataReader:%s %d\n", data.daniel_phrases[random], random);
}

void PrintInfoDaniel()
{
	Character_Functions_Daniel Daniel;
	int random = randomNumberGenerator(0, PHRASES);
	Daniel.DanielDataCharacterRandomSentence();
}




void Character_Functions_Maya::MayaDataCharacterRandomSentence()
{
	Maya_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("MayaDataReader:%s %d\n", data.maya_phrases[random], random);
}

void PrintInfoMaya()
{
	Character_Functions_Maya Maya;
	int random = randomNumberGenerator(0, PHRASES);
	Maya.MayaDataCharacterRandomSentence();
}





void Character_Functions_Mike::MikeDataCharacterRandomSentence()
{
	Mike_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("MikeDataReader:%s %d\n", data.mike_phrases[random], random);
}

void PrintInfoMike()
{
	Character_Functions_Mike Mike;
	int random = randomNumberGenerator(0, PHRASES);
	Mike.MikeDataCharacterRandomSentence();
}





void Character_Functions_Trevor::TrevorDataCharacterRandomSentence()
{
	Trevor_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("TrevorDataReader:%s %d\n", data.trevor_phrases[random], random);
}

void PrintInfoTrevor()
{
	Character_Functions_Trevor Trevor;
	int random = randomNumberGenerator(0, PHRASES);
	Trevor.TrevorDataCharacterRandomSentence();
}





void Character_Functions_Liz::LizDataCharacterRandomSentence()
{
	Liz_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("LizDataReader:%s %d\n", data.liz_phrases[random], random);
}

void PrintInfoLiz()
{
	Character_Functions_Liz Liz;
	int random = randomNumberGenerator(0, PHRASES);
	Liz.LizDataCharacterRandomSentence();
}





void Character_Functions_Layla::LaylaDataCharacterRandomSentence()
{
	Layla_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("LaylaDataReader:%s %d\n", data.layla_phrases[random], random);
}

void PrintInfoLayla()
{
	Character_Functions_Layla Layla;
	int random = randomNumberGenerator(0, PHRASES);
	Layla.LaylaDataCharacterRandomSentence();
}




void Character_Functions_Rose::RoseDataCharacterRandomSentence()
{
	Rose_Data data;
	int random = randomNumberGenerator(0, PHRASES);
	printf("RoseDataReader:%s %d\n", data.rose_phrases[random], random);
}

void PrintInfoRose()
{
	Character_Functions_Rose Rose;
	int random = randomNumberGenerator(0, PHRASES);
	Rose.RoseDataCharacterRandomSentence();
}



int randomNumberGenerator(int minimun, int size) 
{
	int random_number;
	srand(time(NULL));
	random_number = rand() % size + minimun;
	return random_number;
}
