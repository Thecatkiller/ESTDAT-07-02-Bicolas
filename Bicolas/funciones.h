using namespace System::Windows::Forms;
bool estaVacia(int tope) {
	if (tope == 0) return true;
	else return false;
}
bool estaLlena(int tope, int limite) {
	if (tope == limite) return true;
	else return false;
}
void insertarNodo(NodoSProducto *&Ini, NodoSProducto *&Fin, Producto dato) {
	NodoSProducto *aux = new NodoSProducto;
	aux->dato = dato;
	aux->puntero = NULL;
	if (Ini == NULL && Fin == NULL) Ini = Fin = aux;
	else {
		Fin->puntero = aux;
		Fin = aux;
		Fin->puntero = NULL;
	}
}
void apilar(int &tope, int limite, Producto dato, NodoSProducto *&Ini, NodoSProducto *&Fin) {
	if (!estaLlena(tope, limite)) {
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
	else {
		MessageBox::Show("Esta llena");
	}
}

void enColar(int &tope, int limite, Producto dato, NodoSProducto *&Ini, NodoSProducto *&Fin) {
	if (!estaLlena(tope, limite)) {
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
	else {
		MessageBox::Show("Cola llena");
	}
}

Producto desaPilar(int &tope, NodoSProducto *&Ini, NodoSProducto *&Fin) {
	Producto dato;
	if (Fin != NULL) dato = Fin->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			NodoSProducto *x = Ini;
			for (; x->puntero != Fin; x = x->puntero);
			Fin = x;
			Fin->puntero = NULL;
		}
		tope--;
	}
	else {
		MessageBox::Show("Pila vacia");
	}
	return dato;
}

Producto desenColar(int &tope, NodoSProducto *&Ini, NodoSProducto *&Fin) {
	Producto dato;

	if (Ini != NULL) dato = Ini->dato;
	if (!estaVacia(tope)) {
		if (Ini == Fin && Ini != NULL) Ini = Fin = NULL;
		else {
			Ini = Ini->puntero;
		}
		tope--;
	}
	else {
		MessageBox::Show("vacia");
	}
	return dato;
}


void insertarNDID(NodoDProducto *&I, NodoDProducto *&D, Producto dato) {
	NodoDProducto *aux = new NodoDProducto;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		D->der = aux;
		aux->izq = D;
		D = aux;
		D->der = NULL;
	}
}
void insertarNDDI(NodoDProducto *&I, NodoDProducto *&D, Producto dato) {
	NodoDProducto *aux = new NodoDProducto;
	aux->dato = dato;
	aux->izq = aux->der = NULL;
	if (I == NULL && D == NULL) I = D = aux;
	else {
		I->izq = aux;
		aux->der = I;
		I = aux;
		I->izq = NULL;
	}
}

void enColarID(int &tope, int limite, Producto dato, NodoDProducto *&I, NodoDProducto *&D) {
	if (!estaLlena(tope, limite)) {
		insertarNDID(I, D, dato);
		tope++;
	}
	else {
		MessageBox::Show("Cola llena");
	}
}

Producto desenColarID(int &tope, NodoDProducto *&I, NodoDProducto *&D) {
	Producto dato;

	if (I != NULL) dato = I->dato;
	if (!estaVacia(tope)) {
		if (I == D && I != NULL) I = D = NULL;
		else {
			I = I->der;
			I->izq = NULL;
		}
		tope--;
	}
	else {
		MessageBox::Show("Vacia");
	}
	return dato;
}
Producto desapilarDI(int &tope, NodoDProducto *&I, NodoDProducto *&D) {
	return desenColarID(tope, I, D);
}

