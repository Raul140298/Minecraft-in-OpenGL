#ifndef HERRAMIENTAS
#define HERRAMIENTAS


/***ELEMENTOS PEQUEÑOS***/
void miniCuboPalo(int posX, int posY, int posZ) {
	glPushMatrix();
	glTranslated(posX, posY, posZ);
	colorMadera1();
	glPushMatrix();
	glTranslated(0, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera3();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera2();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera1();
	glPushMatrix();
	glTranslated(1, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
}

void palo_herramienta() {
	miniCuboPalo(0, 0, 0);
	miniCuboPalo(1, 1, 0);
	miniCuboPalo(2, 2, 0);
	miniCuboPalo(3, 3, 0);
	miniCuboPalo(4, 4, 0);
	miniCuboPalo(5, 5, 0);
	miniCuboPalo(6, 6, 0);
	miniCuboPalo(7, 7, 0);
	miniCuboPalo(8, 8, 0);

	miniCuboPalo(9, 9, 0);
	miniCuboPalo(10, 10, 0);

	miniCuboPalo(11, 11, 0);
}

void palo_herramienta_pico() {
	miniCuboPalo(0, 0, 0);
	miniCuboPalo(1, 1, 0);
	miniCuboPalo(2, 2, 0);
	miniCuboPalo(3, 3, 0);
	miniCuboPalo(4, 4, 0);
	miniCuboPalo(5, 5, 0);
	miniCuboPalo(6, 6, 0);
	miniCuboPalo(7, 7, 0);
	miniCuboPalo(8, 8, 0);

	glPushMatrix();
	glTranslated(9, 9, 0);
	//colorMadera1();
	//glPushMatrix();
	//glTranslated(0, 0, 0);
	//glutSolidCube(1);
	//glPopMatrix();

	colorMadera3();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera2();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	//colorMadera1();
	//glPushMatrix();
	//glTranslated(1, 1, 0);
	//glutSolidCube(1);
	//glPopMatrix();

	glPopMatrix();

	miniCuboPalo(11, 11, 0);
}

void palo_herramienta_hacha() {
	miniCuboPalo(0, 0, 0);
	miniCuboPalo(1, 1, 0);
	miniCuboPalo(2, 2, 0);
	miniCuboPalo(3, 3, 0);
	miniCuboPalo(4, 4, 0);
	miniCuboPalo(5, 5, 0);
	miniCuboPalo(6, 6, 0);
	miniCuboPalo(7, 7, 0);
	miniCuboPalo(8, 8, 0);

	glPushMatrix();
	glTranslated(9, 9, 0);
	//colorMadera1();
	//glPushMatrix();
	//glTranslated(0, 0, 0);
	//glutSolidCube(1);
	//glPopMatrix();

	colorMadera3();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera2();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	//colorMadera1();
	//glPushMatrix();
	//glTranslated(1, 1, 0);
	//glutSolidCube(1);
	//glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslated(11, 11, 0);
	//colorMadera1();
	//glPushMatrix();
	//glTranslated(0, 0, 0);
	//glutSolidCube(1);
	//glPopMatrix();

	colorMadera3();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera2();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorMadera1();
	glPushMatrix();
	glTranslated(1, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
}

void medio_pico() {
	colorDiamante5();
	glPushMatrix();
	glTranslated(-2.5, 3, 0);
	glScaled(5, 1, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-2, 1, 0);
	glScaled(4, 1, 1);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-5.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante1();
	glPushMatrix();
	glTranslated(-0.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante2();
	glPushMatrix();
	glTranslated(-1.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante3();
	glPushMatrix();
	glTranslated(-2.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante3();
	glPushMatrix();
	glTranslated(-3.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();


	colorDiamante2();
	glPushMatrix();
	glTranslated(-4.5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante3();
	glPushMatrix();
	glTranslated(-4.5, 1, 0);
	glutSolidCube(1);
	glPopMatrix();


	colorDiamante3();
	glPushMatrix();
	glTranslated(-5.5, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante2();
	glPushMatrix();
	glTranslated(-5.5, 0, 0);
	glutSolidCube(1);
	glPopMatrix();
}

void pico() {
	glPushMatrix();
	glTranslated(0, -0.5, 0);
	medio_pico();
	glPopMatrix();

	glPushMatrix();
	glTranslated(-5.5, -6, 0);
	glRotated(-90, 0, 0, 1);

	glPushMatrix();
	glRotated(180, 1, 0, 0);
	medio_pico();
	glPopMatrix();

	glPopMatrix();
}

void pico_completa() {
	glPushMatrix();
	glTranslated(10.5, 4.5, 0);
	glRotated(-90, 0, 0, 1);
	pico();
	glPopMatrix();
	palo_herramienta_pico();
}

void hacha() {
	// Contorno Hacha
	colorDiamante5();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 0, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 5, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 6, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 7, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 7, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 6, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 5, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(7, 4, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(7, 3, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 2, 0);
	glutSolidCube(1);
	glPopMatrix();


	// Relleno del Hacha

	colorDiamante3();
	glPushMatrix();
	glTranslated(1, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(1, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 1, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(2, 3, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 4, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 4, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 4, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 3, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 5, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante2();
	glPushMatrix();
	glTranslated(3, 5, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 3, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante1();
	glPushMatrix();
	glTranslated(3, 6, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(4, 6, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 5, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 4, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 3, 0);
	glutSolidCube(1);
	glPopMatrix();

	colorDiamante4();
	glPushMatrix();
	glTranslated(2, 2, 0);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(3, 3, 0);
	glutSolidCube(1);
	glPopMatrix();
}

void hacha_completa() {

	glPushMatrix();
	glTranslated(8, 13, 0);
	glRotated(-90, 0, 0, 1);
	hacha();
	glPopMatrix();
	palo_herramienta_hacha();
}



void espada()
{
	glPushMatrix();
	glTranslated(0, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 0, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 1, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 1, 0);
	glColor3ub(29, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 1, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(0, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(1, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 2, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 3, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 4, 0);
	glColor3ub(135, 101, 38);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 3, 0);
	glColor3ub(72, 53, 20);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 4, 0);
	glColor3ub(72, 53, 20);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 2, 0);
	glColor3ub(39, 29, 11);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 3, 0);
	glColor3ub(39, 29, 11);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 5, 0);
	glColor3ub(29, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 6, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 7, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 8, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 9, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 10, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 11, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 12, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 13, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 14, 0);
	glColor3ub(42, 196, 170);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 15, 0);
	glColor3ub(13, 62, 52);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 6, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 7, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 8, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 9, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 10, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 11, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 12, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 13, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 7, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 8, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 9, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 10, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 11, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 12, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 13, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 14, 0);
	glColor3ub(49, 231, 199);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(8, 6, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 7, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 8, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 9, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 10, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 11, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 12, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 13, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(15, 14, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 8, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 9, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 10, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 11, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(10, 12, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(11, 13, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(12, 14, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(13, 15, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(14, 15, 0);
	glColor3ub(13, 62, 53);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(5, 4, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 2, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(9, 3, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 4, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(6, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 6, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(5, 7, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 8, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 9, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 9, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2, 8, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 7, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 6, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 5, 0);
	glColor3ub(7, 36, 31);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glTranslated(6, 4, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(7, 4, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(8, 3, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 6, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(4, 7, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(3, 8, 0);
	glColor3ub(28, 136, 117);
	glutSolidCube(1);
	glPopMatrix();
}


#endif
