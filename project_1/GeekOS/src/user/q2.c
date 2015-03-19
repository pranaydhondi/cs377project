#include <conio.h> //This is not C/C++ header file, this is in GeekOS
#include <sched.h>
#include <string.h>


int main()
{
	char input;
	Keycode temp;
	char res[200];
	temp = (Keycode) Get_Key();
	temp = (Keycode) Get_Key();
	input = temp;
	int index =0;
	
	while (input != '@'){
		res[index] = input;
		
		//Print("%c", input);
		temp = (Keycode) Get_Key();
		temp = (Keycode) Get_Key();
		input = temp;
		
		
		index = index+1;
	}
	
	Print("%s \n",res);
	return 0;
	
	
}
