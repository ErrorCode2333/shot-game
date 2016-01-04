#include "main.h"
#include "scene.h"
#include <stdlib.h>

int main(int argc, char* argv[])
{
	MainScene::instance()->createWindow();

	return 0;
}