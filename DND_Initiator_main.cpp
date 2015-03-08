#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Player {
public:
	Player(string name, int Dex, int Mod, int Lvl, int& diceRoll); //Constructs the player

	int calcInitiative(int& diceRoll);

	int diceRoll;

	friend ostream& operator<<(ostream& out, const Player& player) {
      return out << player.mName << " " << player.mInitiative; 
    }

	bool operator<(const Player& rhs) const { //Overload of op< for comparison of initative 
	
	 if(mInitiative < rhs.mInitiative) return true;

     if(mInitiative > rhs.mInitiative) return false;

	 else 
		 
     return false;

	}

int mDex, mMod, mLvl, mInitiative; //Private data, don't fuck with
string mName; //Likewise
};

Player::Player(string name, int Dex, int Mod, int Lvl, int& diceRoll) //Player constructor
: mName(name), mDex(Dex), mMod(Mod), mLvl(Lvl) //Initializer for private member data access
{}

bool operator==(const Player& rhs, int lhs) { //Overload of == to check on initiative
		return rhs.mInitiative == lhs;
}

int Player::calcInitiative(int& diceRoll) {

	return (mLvl/2) + mDex + mMod + diceRoll;
}

int main() {

string nameA, nameB, nameC, nameD, nameE, nameF, nameG, nameH, nameI, nameJ, nameK, nameL; //Names of 12 monsters
int DexA = 0, DexB = 0, DexC = 0, DexD = 0, DexE = 0, DexF = 0, DexG = 0, DexH = 0, DexI = 0, DexJ = 0, DexK = 0, DexL = 0, ModA = 0, ModB = 0, ModC = 0, ModD = 0, ModE = 0, ModF = 0, ModG = 0, ModH = 0, ModI = 0, ModJ = 0, ModK = 0, ModL = 0, LvlA = 0, LvlB = 0, LvlC = 0, LvlD = 0, LvlE = 0, LvlF = 0, LvlG = 0, LvlH = 0, LvlI = 0, LvlJ = 0, LvlK = 0, LvlL = 0; //12 monsters relevant data

int rollD = 0, rollS = 0, rollU = 0, rollC = 0, rollL = 0, rollJ = 0, rollM_A = 0, rollM_B = 0, rollM_C = 0, rollM_D = 0, rollM_E = 0, rollM_F = 0, rollM_G = 0, rollM_H = 0, rollM_I = 0, rollM_J = 0, rollM_K = 0, rollM_L = 0; //Roll variables for party + 12 monsters

vector<Player> playerVec;

cout << '\n' << "####################" << '\n' << "#DND INITIATOR 3000#" << '\n' << "####################" << '\n' << "*~*~* In Loving Memory of Edwin 2013-2013. Nefar forget. *~*~*" << '\n';

while (cin.get() != '#') { //Exit early if # is pressed ***NEED TO PRESS TWICE***

cout << '\n' << "Derek rolled: ";
cin >> rollD;
cout << '\n' << "Scott rolled: ";
cin >> rollS;
cout << '\n' << "Stuart rolled: ";
cin >> rollU;
cout << '\n' << "Catherine rolled: ";
cin >> rollC;
cout << '\n' << "Leah rolled: ";
cin >> rollL;
cout << '\n' << "Jeffrey rolled: ";
cin >> rollJ;
cout << '\n' << "Monster A's name is: ";
cin >> nameA;
cout << '\n' << "Monster A rolled: ";
cin >> rollM_A;
cout << '\n' << "Monster A's Dex is: ";
cin >> DexA;
cout << '\n' << "Monster A's Mod is: ";
cin >> ModA;
cout << '\n' << "Monster A's Level is: ";
cin >> LvlA;
cout << '\n' << "Monster B's name is: ";
cin >> nameB;
cout << '\n' << "Monster B rolled: ";
cin >> rollM_B;
cout << '\n' << "Monster B's Dex is: ";
cin >> DexB;
cout << '\n' << "Monster B's Mod is: ";
cin >> ModB;
cout << '\n' << "Monster B's Level is: ";
cin >> LvlB;
cout << '\n' << "Monster C's name is: ";
cin >> nameC;
cout << '\n' << "Monster C rolled: ";
cin >> rollM_C;
cout << '\n' << "Monster C's Dex is: ";
cin >> DexC;
cout << '\n' << "Monster C's Mod is: ";
cin >> ModC;
cout << '\n' << "Monster C's Level is: ";
cin >> LvlC;
cout << '\n' << "Monster D's name is: ";
cin >> nameD;
cout << '\n' << "Monster D rolled: ";
cin >> rollM_D;
cout << '\n' << "Monster D's Dex is: ";
cin >> DexD;
cout << '\n' << "Monster D's Mod is: ";
cin >> ModD;
cout << '\n' << "Monster D's Level is: ";
cin >> LvlD;
cout << '\n' << "Monster E's name is: ";
cin >> nameE;
cout << '\n' << "Monster E rolled: ";
cin >> rollM_E;
cout << '\n' << "Monster E's Dex is: ";
cin >> DexE;
cout << '\n' << "Monster E's Mod is: ";
cin >> ModE;
cout << '\n' << "Monster E's Level is: ";
cin >> LvlE;
cout << '\n' << "Monster F's name is: ";
cin >> nameF;
cout << '\n' << "Monster F rolled: ";
cin >> rollM_F;
cout << '\n' << "Monster F's Dex is: ";
cin >> DexF;
cout << '\n' << "Monster F's Mod is: ";
cin >> ModF;
cout << '\n' << "Monster F's Level is: ";
cin >> LvlF;
cout << '\n' << "Monster G's name is: ";
cin >> nameG;
cout << '\n' << "Monster G rolled: ";
cin >> rollM_G;
cout << '\n' << "Monster G's Dex is: ";
cin >> DexG;
cout << '\n' << "Monster G's Mod is: ";
cin >> ModG;
cout << '\n' << "Monster G's Level is: ";
cin >> LvlG;
cout << '\n' << "Monster H's name is: ";
cin >> nameH;
cout << '\n' << "Monster H rolled: ";
cin >> rollM_H;
cout << '\n' << "Monster H's Dex is: ";
cin >> DexH;
cout << '\n' << "Monster H's Mod is: ";
cin >> ModH;
cout << '\n' << "Monster H's Level is: ";
cin >> LvlH;
cout << '\n' << "Monster I's name is: ";
cin >> nameI;
cout << '\n' << "Monster I rolled: ";
cin >> rollM_I;
cout << '\n' << "Monster I's Dex is: ";
cin >> DexI;
cout << '\n' << "Monster I's Mod is: ";
cin >> ModI;
cout << '\n' << "Monster I's Level is: ";
cin >> LvlI;
cout << '\n' << "Monster J's name is: ";
cin >> nameJ;
cout << '\n' << "Monster J rolled: ";
cin >> rollM_J;
cout << '\n' << "Monster J's Dex is: ";
cin >> DexJ;
cout << '\n' << "Monster J's Mod is: ";
cin >> ModJ;
cout << '\n' << "Monster J's Level is: ";
cin >> LvlJ;
cout << '\n' << "Monster K's name is: ";
cin >> nameK;
cout << '\n' << "Monster K rolled: ";
cin >> rollM_K;
cout << '\n' << "Monster K's Dex is: ";
cin >> DexK;
cout << '\n' << "Monster K's Mod is: ";
cin >> ModK;
cout << '\n' << "Monster K's Level is: ";
cin >> LvlK;
cout << '\n' << "Monster L's name is: ";
cin >> nameL;
cout << '\n' << "Monster L rolled: ";
cin >> rollM_L;
cout << '\n' << "Monster L's Dex is: ";
cin >> DexL;
cout << '\n' << "Monster L's Mod is: ";
cin >> ModL;
cout << '\n' << "Monster L's Level is: ";
cin >> LvlL;
cout << '\n' << '\n'; //Some space

cin.clear(); //Clear the cocksucking buffer

}

//VVV Constructing all the players/monsters VVV

Player Derek("Pitar", 3, 0, 9, rollD);
Player Scott("Abreu", 3, 0, 10, rollS);
Player Stuart("Richard", 2, 0, 8, rollU);
Player Catherine("Sior", 3, 0, 8, rollC);
Player Leah("SORBRO", 2, 0 , 6, rollL);
Player Jeffrey ("Snomdegris", 0, 2, 8, rollJ);
Player MonsterA(nameA, DexA, ModA, LvlA, rollM_A);
Player MonsterB(nameB, DexB, ModB, LvlB, rollM_B);
Player MonsterC(nameC, DexC, ModC, LvlC, rollM_C);
Player MonsterD(nameD, DexD, ModD, LvlD, rollM_D);
Player MonsterE(nameE, DexE, ModE, LvlE, rollM_E);
Player MonsterF(nameF, DexF, ModF, LvlF, rollM_F);
Player MonsterG(nameG, DexG, ModG, LvlG, rollM_G);
Player MonsterH(nameH, DexH, ModH, LvlH, rollM_H);
Player MonsterI(nameI, DexI, ModI, LvlI, rollM_I);
Player MonsterJ(nameJ, DexJ, ModJ, LvlJ, rollM_J);
Player MonsterK(nameK, DexK, ModK, LvlK, rollM_K);
Player MonsterL(nameL, DexL, ModL, LvlL, rollM_L);

//VVV Calculating initiative for everyone VVV

Derek.mInitiative = Derek.calcInitiative(rollD);
Scott.mInitiative = Scott.calcInitiative(rollS);
Stuart.mInitiative = Stuart.calcInitiative(rollU);
Catherine.mInitiative = Catherine.calcInitiative(rollC);
Leah.mInitiative = Leah.calcInitiative (rollL);
Jeffrey.mInitiative = Jeffrey.calcInitiative(rollJ);
MonsterA.mInitiative = MonsterA.calcInitiative(rollM_A);
MonsterB.mInitiative = MonsterB.calcInitiative(rollM_B);
MonsterC.mInitiative = MonsterC.calcInitiative(rollM_C);
MonsterD.mInitiative = MonsterD.calcInitiative(rollM_D);
MonsterE.mInitiative = MonsterE.calcInitiative(rollM_E);
MonsterF.mInitiative = MonsterF.calcInitiative(rollM_F);
MonsterG.mInitiative = MonsterG.calcInitiative(rollM_G);
MonsterH.mInitiative = MonsterH.calcInitiative(rollM_H);
MonsterI.mInitiative = MonsterI.calcInitiative(rollM_I);
MonsterJ.mInitiative = MonsterJ.calcInitiative(rollM_J);
MonsterK.mInitiative = MonsterK.calcInitiative(rollM_K);
MonsterL.mInitiative = MonsterK.calcInitiative(rollM_K);

//VVV Fill the vector VVV

playerVec.push_back(Derek);
playerVec.push_back(Scott);
playerVec.push_back(Stuart);
playerVec.push_back(Catherine);
playerVec.push_back(Leah);
playerVec.push_back(Jeffrey);
playerVec.push_back(MonsterA);
playerVec.push_back(MonsterB);
playerVec.push_back(MonsterC);
playerVec.push_back(MonsterD);
playerVec.push_back(MonsterE);
playerVec.push_back(MonsterF);
playerVec.push_back(MonsterG);
playerVec.push_back(MonsterH);
playerVec.push_back(MonsterI);
playerVec.push_back(MonsterJ);
playerVec.push_back(MonsterK);
playerVec.push_back(MonsterL);

cout << "The initative order is: " << '\n';

playerVec.erase(remove( playerVec.begin(), playerVec.end(), 0 ), playerVec.end() ); //Get the 0's out of the vector before sorting it

sort (playerVec.begin(), playerVec.end()); //Sort the list!
reverse(playerVec.begin(), playerVec.end()); //Put it in descending order!

for(vector<Player>::iterator it = playerVec.begin(); it != playerVec.end(); ++it) { //Output the sorted list
    cout << *it << endl;
}

cin.ignore(); //Clear the line, ignore the input for just a sec

vector<Player>::iterator it = playerVec.begin(); //Bring the iterator back to the start

while(cin.get() == '\n') { //Every time there's a press of Enter...
	cout << *it << endl; //Output the next person in the initative order
	it++;

	if(it == playerVec.end()) { //Wrap the list around perpetually while Enter continues to be pressed
		it = playerVec.begin();
	}

}

system("pause");

return 0;

}
