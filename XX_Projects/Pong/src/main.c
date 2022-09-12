#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL_image.h>

#define WIDTH 640
#define HEIGHT 480

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

    if (!(IMG_Init(imgFlags) & imgFlags)){
        printf("SDL_Init failed with error: %s", SDL_GetError());
    }

    window = SDL_CreateWindow("SDL Window created!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    renderTarget = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    currentImage = IMG_LoadTexture("./data/sample.png", renderTarget);

    bool isRunning = true;
    SDL_Event event;

    while(isRunning){
        while(SDL_PollEvent(&event) != 0){
            // getting the event
            if(event.type == SDL_QUIT)
                isRunning = false;
        }
    }

    SDL_RenderClear(renderTarget);
    SDL_RenderCopy(renderTarget, currentImage, NULL, NULL);
    SDL_RenderPresent(renderTarget);

    // clean-up
    SDL_DestroyWindow(window);
    SDL_DestroyTexture(currentImage);
    SDL_DestroyRenderer(renderTarget);

    SDL_Quit();

    return 0;

}