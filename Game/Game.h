#pragma once
class Game
{
public:
	Game(unsigned int uWidth, unsigned int uHeight);
	void Update();
	void Render();

private:
	const unsigned int mz_uWidth;
	const unsigned int mz_uHeight;


	// put your objects here
};

