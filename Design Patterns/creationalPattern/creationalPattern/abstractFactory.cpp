#include <iostream>
#include <string>

using namespace std;

// Abstract base class for furniture
class Furniture {
public:
    virtual void sitOn() = 0;
    virtual ~Furniture() {}
};

// Concrete class for a Sofa
class Sofa : public Furniture {
public:
    void sitOn() {
        cout << "Sitting on a sofa..." << endl;
    }
};

// Concrete class for a Chair
class Chair : public Furniture {
public:
    void sitOn() {
        cout << "Sitting on a chair..." << endl;
    }
};

// Abstract factory class for creating furniture
class FurnitureFactory {
public:
    virtual Furniture* createSofa() = 0;
    virtual Furniture* createChair() = 0;
    virtual ~FurnitureFactory() {}
};

// Concrete factory class for creating Victorian-style furniture
class VictorianFurnitureFactory : public FurnitureFactory {
public:
    Furniture* createSofa() {
        return new Sofa();
    }

    Furniture* createChair() {
        return new Chair();
    }
};

// Concrete factory class for creating modern-style furniture
class ModernFurnitureFactory : public FurnitureFactory {
public:
    Furniture* createSofa() {
        return new Sofa();
    }

    Furniture* createChair() {
        return new Chair();
    }
};

// Client code that uses the furniture factories
int main() {
    FurnitureFactory* victorianFactory = new VictorianFurnitureFactory();
    Furniture* victorianSofa = victorianFactory->createSofa();
    Furniture* victorianChair = victorianFactory->createChair();
    victorianSofa->sitOn();
    victorianChair->sitOn();
    delete victorianSofa;
    delete victorianChair;
    delete victorianFactory;

    FurnitureFactory* modernFactory = new ModernFurnitureFactory();
    Furniture* modernSofa = modernFactory->createSofa();
    Furniture* modernChair = modernFactory->createChair();
    modernSofa->sitOn();
    modernChair->sitOn();
    delete modernSofa;
    delete modernChair;
    delete modernFactory;

    return 0;
}
