#include "SideProcess.cpp"   //the main process needs access to the side process.. I would look up if its
                            // better to call the .h or .cpp file



int main()  //this can be any function that you are referencing the sideprocess from
{
    int num = 14;  //number to be sent

    SideProcess s(num);    //this makes an Object of type "SideProcess"  that is defined with all our custom functions
                        //in the header file i defined it to need an interger paramater which is why i provide one
    s.doActionWithInt();  //call the function action
}