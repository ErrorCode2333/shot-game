#include "scene.h"
#include "Fmod/Fmod.h"

void display();
void mouseFunc(int, int, int, int);
void keyboardFunc(unsigned char key, int x, int y);

/** mainscene */
MainScene* MainScene::s_scene = NULL;

MainScene* MainScene::instance() {
	if (s_scene == NULL)
	{
		s_scene = new MainScene();
	}

	return s_scene;
}

MainScene::MainScene() {
	printf("Create Scene.\n");
}

MainScene::~MainScene() {
	printf("Delete Scene.\n");
}

void MainScene::createWindow() {
	FSOUND_Init(44100, 32, 0);
	FMUSIC_MODULE* sound = FMUSIC_LoadSong("Data/bg.mid");
	FMUSIC_PlaySong(sound);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(WinWIDTH, WinHeight);
	glutCreateWindow(WinTitle);
	glutDisplayFunc(&display);
	glutMouseFunc(&mouseFunc);
	glutKeyboardFunc(&keyboardFunc);
	glutMainLoop();
}

/** global */
void display() {

}

void mouseFunc(int button, int state, int x, int y) {
	switch (button) {
	case GLUT_LEFT_BUTTON:
		break;

	case GLUT_RIGHT_BUTTON:
		break;

	case GLUT_MIDDLE_BUTTON:
		break;

	}
}

void keyboardFunc(unsigned char key, int x, int y) {

	//// esc
	//if (int(key) == 27)
	//{
	//	
	//}

	switch (key)
	{
	case 'w':
		break;

	case 'a':
		break;

	case 's':
		break;

	case 'd':
		break;

	}
}