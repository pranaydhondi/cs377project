#include <conio.h>
#include <process.h>
int person = 0;
void *GreetME(){
  switch(person){
	case 0  :
		Print("Good Evening pranay\n");
		break;
	case 1  :
		Print("Good Evening hari\n");
		break;
	case 2  :
		Print("Good Evening sumanth\n");
		break;
	case 3  :
		Print("Good Evening varun\n");
		break;
	case 4  :
		Print("Good Evening dinesh\n");
		break;
	default :
		Print("Good Evening haren\n");
		break;
}
  person = (person+1)%6;
  Exit(-1);
  return 0;
}

int main() 
{
  int pid = SpawnThread(GreetME);
  Print("PID of child thread %d\n", pid);
  int pid1 = SpawnThread(GreetME);
  Print("PID of child thread %d\n", pid1);
  Print("Good Bye\n");
  return 1;
}
