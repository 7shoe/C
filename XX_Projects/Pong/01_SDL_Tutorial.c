#include <stdio.h>
#include <stdbool.h>

#include <SDL2/SDL.h>

#define SCREEN_WIDTH   500
#define SCREEN_HEIGHT   200

//The window we'll be rendering to
SDL_Window* gWindow = NULL;
    
//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image we will load and show on the screen
SDL_Surface* gHelloWorld = NULL;


bool init(){
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if(SDL_Init( SDL_INIT_VIDEO ) < 0){
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }else{
        //Create window
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( gWindow );
        }
    }

    return success;
}

bool loadMedia(){
    //Loading success flag
    bool success = true;

    //Load splash image
    gHelloWorld = SDL_LoadBMP("data/hello_screen.bmp");
    if(gHelloWorld == NULL){
        printf("Unable to load image %s! SDL Error: %s\n", "data/hello_screen.bmp", SDL_GetError());
        success = false;
    }

    return success;
}

void close(){
    //Deallocate surface
    SDL_FreeSurface(gHelloWorld);
    gHelloWorld = NULL;

    //Destroy window
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

int main(){

    printf("Hello World!");



}