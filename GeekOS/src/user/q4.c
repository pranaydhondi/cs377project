#include <conio.h> //This is not C/C++ header file, this is in GeekOS
#include <sched.h>
#include <fileio.h>
int main()
{
Open("/opt/GeekOS/src/user/q2.c",1);
int filenum;
Get_filesnos(&filenum);
Print("%i\n",filenum); //In conio.h Print function is there.(which is similar to printf in C)
return 0;
}
