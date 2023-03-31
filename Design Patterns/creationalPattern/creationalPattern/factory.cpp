//#include <iostream>
//using namespace std;
//
//class Character {
//public:
//	virtual void attack() = 0;
//};
//
//class warrior :public Character {
//public:
//
//	void attack() {
//		cout << "warrior is going to attack" << endl;
//	}
//};
//class villain :public Character {
//public:
//	void attack() {
//		cout << "warrior is going to attack" << endl;
//	}
//
//};
//class FactoryObject {
//public:
//	static Character* returnObj(string obj) {
//		if (obj == "warrior")
//			return new warrior;
//		else
//			return new villain;
//	}
//};
//
//int main() {
//
//	Character* character = FactoryObject::returnObj("warrior");
//	character->attack();
//	
//}