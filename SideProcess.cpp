#include "SideProcess.h" 


using namespace P;  //notice here that i am using the namespace defined in the header file for this file
                    //a name space is just a variable scope for a program

bool SideProcess::doActionWithInt()
{

    return action();     //this just calls the private function that holds
                        // your algorithm so you can call to it without reveling your algorithm to public access
}                       //this is for security

bool SideProcess::action()
{

    cout << SideProcess::number << endl;
    return true;   //return if the action was successful... this is for yourself to figure out depending on your purpose
}

SideProcess::SideProcess(int x)  //constructor
{
    SideProcess::number = x;  // the "<<" works here instead of a n equal as well.  This stores the x param into the number variable stored in the object
}
