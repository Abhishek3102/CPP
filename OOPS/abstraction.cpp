#include <iostream>
#include <string>

using namespace std;

// This is an abstract class bcoz it includes one or more virtual functions
class Tea
{
public:
    virtual void prepareIngredients() = 0;
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

// derived class
class BlackTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Ingredients for Black tea are ready" << endl;
    }
    void brew() override
    {
        cout << "Black tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Black tea served" << endl;
    }
};

class LemonTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Ingredients for Lemon tea are ready" << endl;
    }
    void brew() override
    {
        cout << "Lemon tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Lemon tea served" << endl;
    }
};

int main()
{
    BlackTea blackTea;
    LemonTea lemonTea;

    cout << "Making black tea" << endl;
    blackTea.makeTea();

    cout << "----------------------------" << endl;

    cout << "Making lemon tea" << endl;
    lemonTea.makeTea();

    return 0;
}