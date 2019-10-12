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