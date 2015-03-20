#include <conio.h> //This is not C/C++ header file, this is in GeekOS
#include <sched.h>
int main()
{
int elaps_tm;
int ori_time;
Get_NewTOD(&elaps_tm);
ori_time = Get_Time_Of_Day();
Print("%i\n",elaps_tm); //In conio.h Print function is there.(which is similar to printf in C)
Print("%i\n",ori_time); 
return 0;
}
