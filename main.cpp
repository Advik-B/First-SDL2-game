#define SDL_MAIN_HANDLED
#include "SDL.h"
#include <vector>
#include "config.h"

using namespace std;
using config::background;

int main(int argc, char *argv)
{	
	SDL_SetMainReady();
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window
		= SDL_CreateWindow(
			"Game title",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			config::window_size[0], config::window_size[1],
			SDL_WINDOW_SHOWN
		);

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(
		renderer,
		background[0],
		background[1],
		background[2], 
		background[3]
	);
	
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	SDL_Delay(5000);
	return 0;
}
