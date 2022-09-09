#include <stdio.h>
#include <stdbool.h>

#define SCREEN_WIDTH   500
#define SCREEN_HEIGHT  200

#include <SDL2/SDL.h>

//The window we'll be rendering to
SDL_Window* gWindow = NULL;
    
//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image we will load and show on the screen
SDL_Surface* gHelloWorld = NULL;

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();



bool init(){
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 ){
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        success = false;
    }else{
        //Create window
        gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(gWindow == NULL){
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = false;
        }else{
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    }

    return success;
}

int main(int argc, char* args[]){
    //Start up SDL and create window
    if(!init()){
        printf( "Failed to initialize!\n" );
    }else{
        //Load media
        if(!loadMedia()){
            printf( "Failed to load media!\n" );
        }else{
            //Apply the image
            SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

            //Update the surface
            SDL_UpdateWindowSurface(gWindow);

            //Wait two seconds
            SDL_Delay(2000);
        }
    }

    //Free resources and close SDL
    close();

    return 0;
}