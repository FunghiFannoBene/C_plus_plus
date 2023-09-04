

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Reference weapon");
		jim.attack();
	}
	return 0;
}

Nel tuo esempio, le variabili bob e jim esistono solo all'interno dei loro blocchi di codice 
(ovvero, all'interno delle graffe {} che li contengono). Una volta che l'esecuzione del programma esce da un blocco, 
tutte le variabili create 
all'interno di quel blocco vengono distrutte e non sono più accessibili.
