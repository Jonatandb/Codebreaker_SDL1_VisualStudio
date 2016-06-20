#pragma once

#include "Defines.h"
#include "Includes.h"

class Nivel;			// http://stackoverflow.com/a/23283140
class IA;				// http://stackoverflow.com/a/23283140
class ImpresionDeTexto;	// http://stackoverflow.com/a/23283140
class Borde;			// http://stackoverflow.com/a/23283140

class Resultados
{
private:
	int _id;
	int bordesInfo_x;
	int bordesInfo_y;
	int bordesInfo_w;
	int bordesInfo_h;
	int bordesResultado_x;
	int bordesResultado_y;
	int bordesResultado_w;
	int bordesResultado_h;
	int _grosorBorde;
	vector<string> _ingresos;
	vector<string> _resultados;
	SDL_Surface* _window;
	Nivel* _nivel;
	IA* _ia;
	ImpresionDeTexto* _texto;
	bool BuscarEnVector( string numero );
	void DibujarBordes();
	void DibujarInfo();
	void DibujarResultados();
	float CalcularPorcentajeProgreso( int pos );
public:
	Resultados( SDL_Surface* window, Nivel* nivel, IA* ia, ImpresionDeTexto* texto );
	~Resultados();
	void RegistrarIngreso( string numero, string resultado );
	void Dibujar();
	bool BuscarEnVectorInt( vector<int> numero );
};
