#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
     
      int opcion = 0;
	  
	while (true){
			system ("cls");
		cout << "**************" << endl;
		cout <<"Menu de Juegos" << endl;
			cout << "**********" << endl;
			
			cout << endl;

				cout << "1 - startShip" << endl;
					cout << "2 - snake" << endl;
					cout << "0 - Salir:" <<endl;
				system("pause");
				
				cout << "Ingrese un numero  para seleccionar un juego";
				cin >> opcion;
		
			switch (opcion)
            {
            case 1:
                system("cls");
                starShip();
                break;
                
            case 2:
                system("cls");
                snake();
                break;

				 default: 
     
        break;
      

	}
		if(opcion == 0){
				break;	
	}
	
	cout << "Ingrese una opcion valida del Menu 0,1,2";
	
	return 0;

}

}
