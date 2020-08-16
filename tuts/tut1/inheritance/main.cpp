#include <iostream>

using namespace std;

class Base {
        public:

                virtual void printType() { // Creates function called  printType
                        subfunction();
                        cout << "I'm inherited!" << endl << endl;
                }

                 virtual void subfunction(){
                // empty
                cout << "here";
                }
        };

  class SubFirst : public Base {
      public:
       void subfunction() override{
          cout << "I'm one type of sub-class!" << endl;
      }
  };

  class SubSecond : public Base {
       public:

       void subfunction() override{

          cout << "I'm another type of sub class!" << endl;
      }
      void OtherFun()
          {
              cout<<"just other function";
          }
  };

  int main() {

      SubFirst s1;
      SubSecond s2;

      Base *ptr=&s2;
      ptr->subfunction();

//      SubFirst first;       // runs  subfirst class using printType virtual function
//      first.subfunction();    // calls Subfirst class, and runs virtual function on it's own
//
//      SubSecond second;    // runs  subsecond class using printType virtual function
//      second.subfunction();  // calls Subsecond class, and runs virtual function on it's own

      return 0;
  }
