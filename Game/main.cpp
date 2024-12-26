#include <ASGF/Window.h>

#define WIDTH 640;
#define HEIGHT 480;

int main(int argc, char* argv[])
{
	Window window(WIDTH, HEIGHT);
	Game game(WIDTH, HEIGHT);

	window.Run(std::bind(&Game::Update, &game), std::bind(&Game::Render, &game));

	window.Close();
	return 0;
}