#include <iostream>

using namespace std;

class Sport
{
    public:
        virtual std::string getName()=0;

};

class Cricket:public Sport
{
    public:
        virtual std::string getName() override
        {
        return "sachin";
        }

};
class FootBall:public Sport

{
    public:
         std::string getName() override
        {
            return "ronaldo";
        }

};

int main()
{

    Sport *ptr=new Cricket();
    cout<<ptr->getName();

}
