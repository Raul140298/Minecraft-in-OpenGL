#ifndef CAMASILLON
#define CAMASILLON
void cama_pata(float x , float z ){
	glPushMatrix();
	glTranslated(x,3, z);
	glutSolidCube(6);
	glPopMatrix();
}

void columnaLateral(float x , float z ){
	float altura = 4.5 ; 
	float constante = 5 ; 
	glPushMatrix();
	glTranslated(x,altura, z);
	glutSolidCube(6);
	glPopMatrix();

	glPushMatrix();
	glTranslated(x+constante,altura, z);
	glutSolidCube(6);
	glPopMatrix();

	constante = constante+4 ; 
	glPushMatrix();
	glTranslated(x+constante,altura, z);
	glutSolidCube(6);
	glPopMatrix();

	constante = constante+4 ; 
	glPushMatrix();
	glTranslated(x+constante,altura, z);
	glutSolidCube(6);
	glPopMatrix();

	constante = constante+4 ; 
	glPushMatrix();
	glTranslated(x+constante,altura, z);
	glutSolidCube(6);
	glPopMatrix();

	constante = constante+3 ; 
	glPushMatrix();
	glTranslated(x+constante,altura, z);
	glutSolidCube(6);
	glPopMatrix();

}
void cama(){
	glColor3ub(145, 99, 76);
	cama_pata(0,0);
	cama_pata(0,40);
	cama_pata(20,0);
	cama_pata(20,40);

	columnaLateral(0,0);
	columnaLateral(0,40);
	
	glPushMatrix();
		glRotated(270,0,1,0);
		columnaLateral(0,0);
		columnaLateral(15,0);
	glPopMatrix();

	glPushMatrix();
		glRotated(270,0,1,0);
		columnaLateral(0,-20);
		columnaLateral(15,-20);
	glPopMatrix();

	glBegin(GL_POLYGON);
		glColor3ub(230, 110, 88);
			glVertex3d(-3,7.6,-3);
			glVertex3d(-3,7.6,35);
			glVertex3d(23,7.6,35);
			glVertex3d(23,7.6,-3);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(255, 255, 255);
			glVertex3d(-3,7.6,35);
			glVertex3d(-3,7.6,43);
			glVertex3d(23,7.6,43);
			glVertex3d(23,7.6,35);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(230, 110, 88);
			glVertex3d(-3.1,2,-3);
			glVertex3d(-3.1,7.6,-3);
			glVertex3d(-3.1,7.6,35);
			glVertex3d(-3.1,2,35);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(255, 255, 255);
			glVertex3d(-3.1,2,35);
			glVertex3d(-3.1,7.6,35);
			glVertex3d(-3.1,7.6,43);
			glVertex3d(-3.1,2,43);
	glEnd();



	glBegin(GL_POLYGON);
		glColor3ub(230, 110, 88);
			glVertex3d(-3,2,-3.1);
			glVertex3d(-3,7.6,-3.1);
			glVertex3d(23,7.6,-3.1);
			glVertex3d(23,2,-3.1);
	glEnd();


	glBegin(GL_POLYGON);
		glColor3ub(230, 110, 88);
			glVertex3d(23.1,2,-3);
			glVertex3d(23.1,7.6,-3);
			glVertex3d(23.1,7.6,35);
			glVertex3d(23.1,2,35);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3ub(255, 255, 255);
			glVertex3d(23.1,2,35);
			glVertex3d(23.1,7.6,35);
			glVertex3d(23.1,7.6,43);
			glVertex3d(23.1,2,43);
	glEnd();
}

void sillon(){
	glColor3ub(216, 198, 194 );
	cama_pata(0,0);
	cama_pata(0,40);
	cama_pata(20,0);
	cama_pata(20,40);

	glPushMatrix();
	glTranslated(0,-0.5, 0);
	columnaLateral(0,0);
	columnaLateral(0,40);
		glRotated(270,0,1,0);
		columnaLateral(0,0);
		columnaLateral(15,0);
		glTranslated(0,-2.5, 0);
		glColor3ub(240, 205, 199);
		columnaLateral(0,-6);
		columnaLateral(15,-6);
		columnaLateral(0,-12);
		columnaLateral(15,-12);
		columnaLateral(0,-15);
		columnaLateral(15,-15);
		columnaLateral(0,-18);
		columnaLateral(15,-18);
	glPopMatrix();


	glPushMatrix();
		glColor3ub(195, 238, 177);
		glTranslated(6,4.9, 12);
		glutSolidCube(5);
	glPopMatrix();
	glPushMatrix();
		glColor3ub(195, 238, 177);
		glTranslated(6,4.9, 17);
		glutSolidCube(5);
	glPopMatrix();

	glPushMatrix();
		glColor3ub(195, 238, 177);
		glTranslated(6,4.9, 24);
		glutSolidCube(5);
	glPopMatrix();
	glPushMatrix();
		glColor3ub(195, 238, 177);
		glTranslated(6,4.9, 29);
		glutSolidCube(5);
	glPopMatrix();

}
void ubicaCama(){
	glPushMatrix();
		glTranslated(-240, 0, -545);
		glScaled(1.2, 1.2, 1.2);
		glRotated(180, 0, 1, 0);
		cama();
	glPopMatrix();
}

void ubicaSillon() {
	glPushMatrix();
		glTranslated(-165, 0, -590);
		glScaled(1.4, 1.4, 1.4);
		glRotated(-90, 0, 1, 0);
		sillon();
	glPopMatrix();
}

#endif