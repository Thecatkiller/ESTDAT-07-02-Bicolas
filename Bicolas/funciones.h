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
	if (Ini == NULL && Fin == NULL) Ini = Fin = NULL;
	else {
		Fin->puntero = aux;
		Fin = aux;
		Fin->puntero = NULL;
	}
}
void Apilar(int &tope, int limite, Producto dato, NodoSProducto *&Ini, NodoSProducto *&Fin) {
	if (!estaLlena(tope, limite)) {
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
	else {
		MessageBox::Show("Esta llena");
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
		MessageBox::Show("Esta vacia");
	}
	return dato;
}