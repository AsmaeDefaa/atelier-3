#include<iostream>
using namespace std;
class animal {                                            //défunir la cla classe mére animal
protected:                                               
	string name;                                         //déclarer les variables
	float age;
public:
	void set_values(string n, float a) {                //définir la fonction set_value
		name = n;
		age = a;

	}
	
};
class zebra :public animal {                          //définir le sous classe zebra
public:
	string origine;                                   //déclarer le variable string
public:
	void set_origine(string o) {   
		origine = o;
	}
	
	void dispaly() {                                //la création du fonction pour afficher les informations sur le zebra
		cout << "the name of nom  zebra is:" << name << " the age is:" << age << " the origine of zebra is " << origine<< endl;


	}
	
};
class dolphine :public animal {                 //définir le sous classe dolphin
public:
	string origine;
public:
	void set_origine(string o) {       
		origine = o;
	}
	void dispaly() {                                  //la création du fonction pour afficher les informations sur le dolphin
		cout << "the name of dolphin is:" << name << " the age of dolphin is: " << age << " the origine of delphin is: " << origine << endl;

	}

};
int main() {
	string a;          
	float b;
	string c;
	string x;
	float y;
	string z;
	cout << "entrer le nom de zebra ";
	cin >> a;
	cout << "entrer  l''age de zebra ";
	cin >> b;
	cout << "entrer l''rigine de zebra ";
	cin >> c;
	cout << "entrer le nom de dolphine ";
	cin >> x;
	cout << "entrer l''age de dolphine ";
	cin >> y;
	cout << "entrer l''origine de dolphine ";
	cin >> z;

	zebra z1;                   //créer un objrt pour la classe zebra
	z1.set_values(a,b);                 
	
	z1.set_origine(c);
	
	z1.dispaly();
	dolphine d1;                //créer un objrt pour la classe zebra
	d1.set_values(x, y);

	d1.set_origine(z);

	d1.dispaly();
	return 0;
}
