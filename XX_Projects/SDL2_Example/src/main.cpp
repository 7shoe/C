#include <iostream>
#include <SDL2/SDL.h>

#define WIDTH 540 
#define HEIGHT 900

int main(){
    
    if(SDL_Init(SDL_INIT_EVERYTHING) > 0){
        std::cout << "SDL_Init failed with error: " << SDL_GetError() << std::endl;
        return EXIT_FAILURE;
    }
    
    bool quit = false;

    SDL_Window *window = SDL_CreateWindow("Hello SDL 2 World!", 
                            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT,
                            SDL_WINDOW_ALLOW_HIGHDPI);
    
    if (NULL == window){
        std::cout << "Aww, thanks guys :)" << std::endl;
        return EXIT_FAILURE;
    }

    SDL_Event windowEvent;

    // Create load bitmap (bmp) to surface -> surface to texture -> texture to renderer (graphics card)
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Surface * image = SDL_LoadBMP("./data/hello_screen.bmp");

    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);

    while (!quit){
        SDL_WaitEvent(&windowEvent);
 
        switch (windowEvent.type){
            case SDL_QUIT:
                quit = true;
                break;
        }

        SDL_RenderCopy(renderer, texture, NULL, NULL);   // image -> device mem
        SDL_RenderPresent(renderer);

    }

    // clean-up
    SDL_DestroyWindow(window);
    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    std::string greetings = "Hello SDL2!";
    std::cout << greetings << std::endl;

    return EXIT_SUCCESS;

}