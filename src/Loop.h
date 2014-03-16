#include <SDL/SDL.h>
void Loop()
{
	SDL_Event Event;
	SDL_Surface *buffer;
	buffer = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
	while(Event.type != SDL_QUIT)
	{
		SDL_PollEvent(&Event);
		SDL_Flip(buffer);
	}
}
