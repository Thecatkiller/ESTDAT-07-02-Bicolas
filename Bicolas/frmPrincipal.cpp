#include <iostream>
#include <string.h>


#include "estructuras.h"
#include "funciones.h"
#include "frmPilas.h"
#include "frmColas.h"

#include "frmPrincipal.h"

using namespace Bicolas;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew frmPrincipal);
}