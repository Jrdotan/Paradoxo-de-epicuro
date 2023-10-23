#include <iostream>
#include <curses.h>

using namespace std;

int main ()
{
	string deus,a,b,d;
	int c;

	printf("Bem vindo ao paradoxo de epicuro\n");
	printf("Deus sabe que o mal existe?(s/n)\n");


	cin >>  deus;

	if(deus=="n" or deus=="N")
{
		printf("Então,ele não é onisciente\n");
		return 0;

}

	if(deus=="s" or deus=="S")
{
		printf("Deus pode acabar com o mal?(s/n)\n");
		
		cin >> a;

	if(a=="n" or a=="N")
{
		printf("Então ele não é onipotente\n");
		return 0;
}

	if(a=="s" or a=="S")
{
		printf("Deus quer acabar com o mal?(s/n)\n");

		cin >> b;

	if(b=="n" or b=="N")
{
	printf("Então, ele não é bom\n");
	return 0;
}

	if(b=="s" or b=="S")
{
	printf("Então por que o mal existe?\n");
	printf("1)- Livre Arbitrio\n");
	printf("2)-Satã\n");
	printf("3)-Pra nos testar\n");

	cin >> c;

	if(c==1)
{
	printf("Deus podia ter criado um universo com livre arbitrio e sem o mal?(s/n)\n");
	
	cin >> d;
}
	if(c==2)
{
	printf("Se ele é onipotente e bondoso, teria destruido satã\n");
	return 0;
}
	if(c==3)
{
	printf("Se ele é onisciente, já sabe o resultado e não precisa nos testar\n");
	return 0;
}
	if( d=="s" or d=="S")
{
	printf("Então, ele não é bom\n");
	return 0;
}
}

	if(d=="n" or d=="N")
{
		printf("Então ele não é onipotente\n");
		return 0;
}
	

	return 0;
}	
}
}
