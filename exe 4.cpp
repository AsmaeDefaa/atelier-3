#include<iostream>
using namespace std;

class mere{                     //d�finir la clsse m�re
	protected:
	public:
		void display(){
			cout<<"appler la classe mere"<<endl;     //on �crit un message pour la classe fille
		}
};
class fille{                     //d�finir la clase fille
	public:
		void display(){
			cout<<"appler la claas fille"<<endl;    //on �crit un message pour la classe fille
		}
	};
int main(){
	fille f;                   //d�clarer l'objet de la classe fille
	f.display();                   

	return 0;
}
