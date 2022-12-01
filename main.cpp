#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void deca2bin(int x)
{
	while(x>0)
	{
		std::cout<<x%2;
		x=x/2;
	}
}
 
int main(int argc, char** argv) {
	
int y = 0;
while(y < 100000){
	deca2bin(y);
	std::cout<<" " << y <<"\n";
	y++;
}
	
	return 0;
}
