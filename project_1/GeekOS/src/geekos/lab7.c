#include <conio.h> //This is not C/C++ header file, this is in GeekOS
#include <sched.h>
#include <geekos/string.h>
#include <geekos/kthread.h>



void check_pw(){
	Print("Plz enter the password :");
	/*while(1){
		Print("\n");
		char pw[100];
		int i = 0;
		Keycode temp = Wait_For_Key();
		//temp = Wait_For_Key();
		while((char) temp != 13 ){
			pw[i] = (char) temp;
			temp = Wait_For_Key();
			temp = Wait_For_Key();
			//pw[i] = (char) temp;
			i++;
		}
		temp = Wait_For_Key();
		pw[i] = '\0';
		
		struct File *ptr;
		int readtemp = Open("/c/password.txt",0,&ptr);
		char s_pw[100];
		int i1 ;
		for (i1=0;i1<100;i1++){
			Read(ptr,s_pw+i1,1);
			if (s_pw[i1] <= 4 || s_pw[i1] == 10) break;
		}
		s_pw[i1] = '\0';
		//Print ("actual password is %s \n",s_pw);
		Print ("entered password is %s \n",pw);
		if (!strcmp(pw,s_pw)) break;	
		Print("Plz re-enter the password :");
	
	}*/
}



void check_pw1(){
	Print("Plz enter the passworsdsd :");
}

int main(int argc, char* argv[]){
	
	//struct Kernel_Thread *k1 = Create_Thread(PRIORITY_NORMAL,false);
	//struct Kernel_Thread *k2 = Create_Thread(PRIORITY_NORMAL,false);
	struct Kernel_Thread *k3 = Start_Kernel_Thread(check_pw,0,PRIORITY_NORMAL,false,"AUTHENTICATION");
	struct Kernel_Thread *k4 = Start_Kernel_Thread(check_pw1,0,PRIORITY_NORMAL,false,"AUTHENTICATION");
	return 0;
	
}


