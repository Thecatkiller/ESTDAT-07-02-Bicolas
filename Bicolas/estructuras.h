struct Fecha
{
	int d, m, a;
};

struct Producto
{
	char codigo[20], nombre[200];
	Fecha fecVen;
	double precio, cantidad;
};

struct NodoSProducto
{
	Producto dato;
	NodoSProducto *puntero;
};
struct NodoDProducto {
	Producto dato;
	NodoDProducto *izq, *der;
};

NodoSProducto *PilaProductoIni, *PilaProductoFin;
NodoSProducto *ColaProductoIni, *ColaProductoFin;

NodoDProducto *PilaDProductoIzq, *PilaDProductoDer;
NodoDProducto *ColaDProductoIzq, *ColaDProductoDer;

int limite = 5, topePila = 0, topeCola = 0;
int topePilaD = 0, int topeColaD = 0;