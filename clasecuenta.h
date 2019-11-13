#include iostream

class Cuenta {
	int Numerocuenta[20];
	double Saldo;
public:
	void Cuenta (cuenta: int, inicial: double);
	void Depositar (cantidad: double);
	void Retirar (cantidad: double);
	double Saldo();
	
};

