#include <gl/glut.h>
#include <gl/GL.h>
#include <stdio.h>

#define WinWIDTH 800
#define WinHeight 600
#define WinTitle "Fire!!!"

class MainScene {
public:
	static MainScene* s_scene;
	static MainScene* instance();
	~MainScene();

	void createWindow();
private:
	MainScene();
};