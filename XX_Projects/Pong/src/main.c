#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL_image.h>

SDL_Texture *LoadTexture(char * filePath, SDL_Renderer *renderTarget){
    SDL_Texture *texture = NULL;
    SDL_Surface *surface = IMG_Load(filePath);

    if(surface == NULL){
        printf("SDL_Init failed with error: %s", SDL_GetError());
    }else{
        texture = SDL_CreateTextureFromSurface(renderTarget, surface);
        if(texture == NULL)
            printf("SDL_Init failed with error: %s", SDL_GetError());
    }

    SDL_FreeSurface(surface);

    return texture;
}

int main(){
    
    // initialize variables
    SDL_Window * window = NULL;
    SDL_Texture * currentImage = NULL;
    SDL_Renderer * renderTarget = NULL;
    SDL_Rect playerRect;

    int frameWidth, frameHeight;
    int textureWidth, textureHeight;

    SDL_Init(SDL_INIT_VIDEO);

    int imgFlags = IMG_INIT_PNG | IMG_INIT_JPG;

    if (NULL == window){
        printf("Aww, thanks guys :)");
        return EXIT_FAILURE;
    }

    SDL_Event windowEvent;

    // Create load bitmap (bmp) to surface -> surface to texture -> texture to renderer (graphics card)
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Surface * image = SDL_LoadBMP("./data/hello_C.bmp");

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

    char greetings[] = "Hello SDL2 in pure C!";
    printf("%s", greetings);

    return 0;

}