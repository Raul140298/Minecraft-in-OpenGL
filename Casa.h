#ifndef CASA
#define CASA


void losa_textura() {
	glPushMatrix();
		glColor3ub(77, 58, 32);
		glTranslated(8, 0.5, 8);
		glScaled(16, 1, 16);
		glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
		glColor3ub(102, 69, 26);
		glTranslated(8, 2.5, 8);
		glScaled(16, 3, 16);
		glutSolidCube(1);
	glPopMatrix();
}

void losa_bloque() {
	losa_textura();
	glPushMatrix();
		glTranslated(0, 4, 0);
		losa_textura();
	glPopMatrix();
}


void tablon_textura() {
	glPushMatrix();
		glColor3ub(102, 69, 26);
		glTranslated(0, 0.5, 0);
		glScaled(16, 1, 1);
		glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
		glColor3ub(163, 133, 76);
		glTranslated(0, 2.5, 0);
		glScaled(16, 3, 1);
		glutSolidCube(1);
	glPopMatrix();
}

void tablon_lado() {
	glPushMatrix();
		glTranslated(8, 0, 0);
		tablon_textura();
	glPopMatrix();
	glPushMatrix();
		glTranslated(8, 4, 0);
		tablon_textura();
	glPopMatrix();
	glPushMatrix();
		glTranslated(8, 8, 0);
		tablon_textura();
	glPopMatrix();
	glPushMatrix();
		glTranslated(8, 12, 0);
		tablon_textura();
	glPopMatrix();
}

void tablon_cubo() {
	glPushMatrix();
		glTranslated(8, 0, 0);
		tablon_lado();
	glPopMatrix();
	glPushMatrix();
		glRotated(-90,0,1, 0);
		glTranslated(8, 0, 0);
		tablon_lado();
	glPopMatrix();
	
}

void madera_Arbol_Oscuro() {
	glPushMatrix();
		glTranslated(0, 0, 0);
		glColor3ub(102, 69, 26);
		glutSolidCube(1);
	glPopMatrix();
}

void madera_Arbol_Normal() {
	glPushMatrix();
		glTranslated(0, 0, 0);
		glColor3ub(134, 97, 46);
		glutSolidCube(1);
	glPopMatrix();
}

void madera_Arbol_Claro() {
	glPushMatrix();
		glTranslated(0, 0, 0);
		glColor3ub(151, 107, 54);
		glutSolidCube(1);
	glPopMatrix();
}

void arbol_textura(float posX) {
	glPushMatrix();
	glTranslated(posX, 1, 0);
	glScaled(1, 2, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 4, 0);
	glScaled(1, 4, 1);
	madera_Arbol_Normal();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 9, 0);
	glScaled(1, 6, 1);
	madera_Arbol_Claro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 14, 0);
	glScaled(1, 4, 1);
	madera_Arbol_Normal();
	glPopMatrix();
}

void arbol_textura2(float posX) {
	glPushMatrix();
	glTranslated(posX, 1, 0);
	glScaled(1, 2, 1);
	madera_Arbol_Normal();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 3, 0);
	glScaled(1, 2, 1);
	madera_Arbol_Claro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 8, 0);
	glScaled(1, 8, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 12.5, 0);
	madera_Arbol_Normal();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 14.5, 0);
	glScaled(1, 3, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();
}

void arbol_textura3(float posX) {
	glPushMatrix();
	glTranslated(posX, 1.5, 0);
	glScaled(1, 3, 1);
	madera_Arbol_Normal();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 4.5, 0);
	glScaled(1, 3, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 9.5, 0);
	glScaled(1, 7, 1);
	madera_Arbol_Claro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 14.5, 0);
	glScaled(1, 3, 1);
	madera_Arbol_Normal();
	glPopMatrix();
}

void arbol_textura4(float posX) {
	glPushMatrix();
	glTranslated(posX, 2.5, 0);
	glScaled(1, 5, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 7, 0);
	glScaled(1, 4, 1);
	madera_Arbol_Normal();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 11.5, 0);
	glScaled(1, 5, 1);
	madera_Arbol_Oscuro();
	glPopMatrix();glPushMatrix();
	glTranslated(posX, 15, 0);
	glScaled(1, 2, 1);
	madera_Arbol_Claro();
	glPopMatrix();
}

void arbol_lado() {
	arbol_textura(0.5);
	arbol_textura2(1.5);
	arbol_textura3(2.5);
	arbol_textura4(3.5);
	arbol_textura2(4.5);
	arbol_textura4(5.5);
	arbol_textura(6.5);
	arbol_textura2(7.5);
	arbol_textura3(8.5);
	arbol_textura4(9.5);
	arbol_textura2(10.5);
	arbol_textura(11.5);
	arbol_textura4(12.5);
	arbol_textura2(13.5);
	arbol_textura3(14.5);
	arbol_textura(15.5);
}

void arbol_cubo() {
	arbol_lado();
	glPushMatrix();
		glTranslated(0, 0, 0);
		glRotated(-90, 0, 1, 0);
		arbol_lado();
	glPopMatrix();
}

void columaArbol() {
		arbol_cubo();
	glPushMatrix();
		glTranslated(0,16,0);
		arbol_cubo();
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,32,0);
		arbol_cubo();
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,48,0);
		arbol_cubo();
	glPopMatrix();
	glPushMatrix();
		glTranslated(0,64,0);
		arbol_cubo();
	glPopMatrix();
}


void columaTablonArriba(int tam) {
	for (int i = 1,j=64;i <= tam;i++,j-=16) {
		glPushMatrix();
			glTranslated(0,j,0);
			tablon_lado();
		glPopMatrix();
	}
}


void columaTablonAbajo(int tam) {
	for (int i = 1,j=0;i <= tam;i++,j+=16) {
		glPushMatrix();
			glTranslated(0,j,0);
			tablon_lado();
		glPopMatrix();
	}
}

void techo_fila(int x) {
	for (int i = 1, j = 0;i <= x;i++,j+=16) {
		glPushMatrix();
			glTranslated(0,0,j);
			losa_bloque();
		glPopMatrix();
	}
}


void techo_columna(int x,int y) {
	for (int i = 1, j = 0;i <= y;i++, j += 16) {
		glPushMatrix();
			glTranslated(j, 0, 0);
			techo_fila(x);
		glPopMatrix();
	}
}

void techo() {
	techo_columna(7,14);
	glPushMatrix();
		glTranslated(16,8,16);
		techo_columna(5,12);
	glPopMatrix();
	glPushMatrix();
		glTranslated(32, 16, 32);
		techo_columna(3, 10);
	glPopMatrix();
	glPushMatrix();
		glTranslated(48, 24, 48);
		techo_columna(1, 8);
	glPopMatrix();
}


void paredes() {

	columaArbol();

	//Parte Delantera Puerta
	glPushMatrix();	
		glTranslated(16,0,0);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(32,0,0);
		columaTablonAbajo(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(32, 0, 0);		
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(48,0,0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(48,0,0);
		columaTablonAbajo(1);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(64,0,0);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(80,0,0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(96,0,0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(112,0,0);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(128,0,0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(128,0,0);
		columaTablonAbajo(1);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(144,0,0);
		columaTablonAbajo(1);
	glPopMatrix();
	glPushMatrix();
		glTranslated(144, 0, 0);		
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(160,0,0);
		columaTablonArriba(5);
	glPopMatrix();

	//Parte lateral ventana
	glPushMatrix();	
		glTranslated(0,0,32);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(0,0,48);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(0,0,48);
		glRotated(90, 0, 1, 0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(0,0,64);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(5);
	glPopMatrix();



	glPushMatrix();
		glTranslated(192, 0, 0);
		glRotated(-90, 0, 1, 0);
		columaArbol();
	glPopMatrix();

	
	glPushMatrix();
		glTranslated(192, 0, 80);
		glRotated(180, 0, 1, 0);
		columaArbol();
	glPopMatrix();

	//Parte lateral ventana
	glPushMatrix();	
		glTranslated(192,0,32);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(192,0,48);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(192,0,48);
		glRotated(90, 0, 1, 0);
		columaTablonArriba(2);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(192,0,64);
		glRotated(90, 0, 1, 0);
		columaTablonAbajo(5);
	glPopMatrix();

	glPushMatrix();
		glTranslated(0, 0, 80);
		glRotated(90, 0, 1, 0);
		columaArbol();
	glPopMatrix();

	//Parte trasera cerrada
	glPushMatrix();	
		glTranslated(16, 0, 80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(32,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(48,0,80);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(64,0,80);
		columaTablonAbajo(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(80,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(96,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(112,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(128,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(144,0,80);
		columaTablonArriba(5);
	glPopMatrix();
	glPushMatrix();	
		glTranslated(160,0,80);
		columaTablonArriba(5);
	glPopMatrix();
}

void casa() {
	glPushMatrix();
		glTranslated(-16, 80, -16);
		techo();
	glPopMatrix();
	paredes();
}

void ubica_Casa() {
	glPushMatrix();
		glTranslated(-100, 0, -500);
		glRotated(180, 0, 1, 0);
		casa();
	glPopMatrix();

}

#endif