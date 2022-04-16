#ifndef DRAW_H
#define DRAW_H

#include <SDL.h>

class Draw {

public:

    static void BlitSquare(SDL_Renderer * renderer, SDL_Texture * texture, int x, int y, int dx, int dy);
    static void Blit(SDL_Renderer * renderer, SDL_Texture * texture, int x, int y, int dx, int dy);
    static void BlitOther(SDL_Renderer * renderer, SDL_Texture * texture, int x, int y, int dx, int dy, int w, int h);
    static void BlackSquare(SDL_Renderer * renderer, int x, int y);
    static void Flip(SDL_Renderer * renderer);

    static int animation;

};

#endif // DRAW_H