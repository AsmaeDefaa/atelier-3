 #include<iostream>
 using namespace std;

//d�clarer la classe personne
class personne {           
private:
    string nom;              //declaration des variable
	string prenom;
	int date;
public:
	personne() {};
	personne(string n, string p, int d) {  //�crire un constrecteur 
		nom = n;
		prenom = p;
		date = d;
	}
  virtual void display() {                    //d�finir une fonction virtuel
		cout << "nom: " << nom << "prenom: " << prenom << "date: " << date << endl;

	}
};
class employe : public personne {                  //�crire une classe employe qui d�rive la classe personne
private:
	float salaire;
	

public:
	employe() {};
	employe( float s ) {                   //d�clarer un constrecteur
		salaire = s;
		
		
	}
	void display() {             //une fonction pour afficher le message 
		cout << "salaire: "<<salaire << endl;

	}
};
class chef :public employe {              //�crire une chef employe qui d�rive la classe employe

private:
	string service;
public:
	chef() {};
	chef(string ser)  {
		service = ser;
	}
	void display() {
		cout << "service : " << service << endl;

	}
};
class directeur : public chef {            //�crire une directeur employe qui d�rive la classe chef
private:
	string societe;
public:
	directeur() {};
	directeur(string so) {
		societe = so;
	}
		void display() {
			cout << "societe " << societe<< endl;

		}	

};
int main() {
	
	personne *pt;   //declarer un pointeur
	
	
	employe em1(22);
	pt = &em1;          //le pointeur prend la valeur du em1
	pt->display();      //afficher le message 
	employe* pt2;
	chef ch("serviceA");
	pt2 = &ch;
	pt2->display();
	chef* pt3;
	directeur dire("thecno");
	pt3 = &dire;
	pt3->display();


	return 0;	
}
