
#include <iostream>         //anyone including this file will include this automatically



namespace P
{
    using namespace std;   //notice i creeate this here and now anyone using namespace P will also use namespace std
    class SideProcess
    {
        public:
            SideProcess(int x);      //constructor for initializing
            ~SideProcess();     //deconstructor which is automatically called after there is no reference
                                //to this obeect in the memory stack.
            bool doActionWithInt();  //public access to the action
        private:
            bool action();      //private action with contents of the action
            int number;   //this will holdthe number being sent
    };
};