#include<iostream>
using namespace std;

class mere{                     //définir la clsse mére
	protected:
	public:
		void display(){
			cout<<"appler la classe mere"<<endl;     //on écrit un message pour la classe fille
		}
};
class fille{                     //définir la clase fille
	public:
		void display(){
			cout<<"appler la claas fille"<<endl;    //on écrit un message pour la classe fille
		}
	};
int main(){
	fille f;                   //déclarer l'objet de la classe fille
	f.display();                   

	return 0;
}
