#include <iostream>
using namespace std;

int main(){
	//flushing the buffer
        int c;
        do{
        c=cin.get();
        } while (c!='\n'&&c!=EOF);


        //waiting for the user to press ENTER
        cin.get();


}
