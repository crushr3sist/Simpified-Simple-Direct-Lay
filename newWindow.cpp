#include <SDL.h>
#include <iostream>
#include "packages/sdl2.nuget.2.0.12/build/native/include/SDL_events.h"

using namespace std;

class newWindow{
public:

    SDL_Window* window = NULL;
    SDL_Surface* screensurface = NULL;
    const char* WINDOW_TITLE;
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;
    bool shown;

    SDL_Window* window_var(const char* WINDOW_TITLE, int SCREEN_WIDTH, int SCREEN_HEIGHT, bool shown) {
        
        return window = SDL_CreateWindow(WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, shown); cout << window;
        surface_var(window);    
    }
    SDL_Surface* surface_var(SDL_Window* window){
         return screensurface = SDL_GetWindowSurface(window);
    }
    void setBackgroundColor(int red, int green, int blue) {
        surface_var(window);
        SDL_FillRect(screensurface, NULL, SDL_MapRGB(screensurface->format, red, green, blue));
        SDL_UpdateWindowSurface(window);
    }
};


int keypressed(string key) {
    if (key == "quit") { SDL_Quit; }
    if (key == "backspace") {return SDLK_BACKSPACE;}
    if (key == "tab") {return SDLK_TAB;}
    if (key == "clear") { return SDLK_CLEAR; }
    if (key == "enter") { return SDLK_RETURN; }
    if (key == "pause") { return SDLK_PAUSE; }
    if (key == "escape") { return SDLK_ESCAPE; }
    if (key == "space") { return SDLK_SPACE; }
    if (key == "!") { return SDLK_EXCLAIM; }
    if (key == "doublequote") { return SDLK_QUOTEDBL; }
    if (key == "#") { return SDLK_HASH; }
    if (key == "&") { return SDLK_AMPERSAND; }
    if (key == "singlequote") { return SDLK_QUOTE; }
    if (key == "(") { return SDLK_LEFTPAREN; }
    if (key == ")") { return SDLK_RIGHTPAREN; }
    if (key == "*") { return SDLK_ASTERISK; }
    if (key == "+") { return SDLK_PLUS; }
    if (key == ",") { return SDLK_COMMA; }
    if (key == "-") { return SDLK_MINUS; }
    if (key == ".") { return SDLK_PERIOD; }
    if (key == "/") { return SDLK_SLASH; }
    if (key == "0") { return SDLK_0; }
    if (key == "1") { return SDLK_1; }
    if (key == "2") { return SDLK_2; }
    if (key == "3") { return SDLK_3; }
    if (key == "4") { return SDLK_4; }
    if (key == "5") { return SDLK_5; }
    if (key == "6") { return SDLK_6; }
    if (key == "7") { return SDLK_7; }
    if (key == "8") { return SDLK_8; }
    if (key == "9") { return SDLK_9; }
    if (key == ":") { return SDLK_COLON; }
    if (key == ";") { return SDLK_SEMICOLON; }
    if (key == "<") { return SDLK_LESS; }
    if (key == "=") { return SDLK_EQUALS; }
    if (key == ">") { return SDLK_GREATER; }
    if (key == "?") { return SDLK_QUESTION; }
    if (key == "@") { return SDLK_AT; }
    if (key == "[") { return SDLK_LEFTBRACKET; }
    if (key == "/") { return SDLK_BACKSLASH; }
    if (key == "]") { return SDLK_RIGHTBRACKET; }
    if (key == "^") { return SDLK_CARET; }
    if (key == "_") { return SDLK_UNDERSCORE; }
    if (key == "`") { return SDLK_BACKQUOTE; }
    if (key == "a") { return SDLK_a; }
    if (key == "b") { return SDLK_b; }
    if (key == "c") { return SDLK_c; }
    if (key == "d") { return SDLK_d; }
    if (key == "e") { return SDLK_e; }
    if (key == "f") { return SDLK_f; }
    if (key == "g") { return SDLK_g; }
    if (key == "h") { return SDLK_h; }
    if (key == "i") { return SDLK_i; }
    if (key == "j") { return SDLK_j; }
    if (key == "k") { return SDLK_k; }
    if (key == "l") { return SDLK_l; }
    if (key == "m") { return SDLK_m; }
    if (key == "n") { return SDLK_n; }
    if (key == "o") { return SDLK_o; }
    if (key == "p") { return SDLK_p; }
    if (key == "q") { return SDLK_q; }
    if (key == "r") { return SDLK_r; }
    if (key == "s") { return SDLK_s; }
    if (key == "t") { return SDLK_t; }
    if (key == "u") { return SDLK_u; }
    if (key == "v") { return SDLK_v; }
    if (key == "w") { return SDLK_w; }
    if (key == "x") { return SDLK_x; }
    if (key == "y") { return SDLK_y; }
    if (key == "z") { return SDLK_z; }
    if (key == "del") { return SDLK_DELETE; }
    if (key == "up") { return SDLK_UP; }
    if (key == "down") { return SDLK_DOWN; }
    if (key == "right") { return SDLK_RIGHT; }
    if (key == "left") { return SDLK_LEFT; }
    if (key == "rshift") { return SDLK_RSHIFT; }
    if (key == "lshift") { return SDLK_LSHIFT; }
    if (key == "rctrl") { return SDLK_RCTRL; }
    if (key == "lctrl") { return SDLK_LCTRL; }

}




int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING);

    newWindow newWindow ;
    
    SDL_Window* window = newWindow.window_var("test", 640, 640, 0);
    
    newWindow.setBackgroundColor(255, 255, 50);

    SDL_Event event;


    while (1) {

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_KEYDOWN:
                    if (event.key.keysym.sym == keypressed("w")) {
                        newWindow.setBackgroundColor(255, 255, 255);
                        SDL_Log("w was pressed");
                        break;
                    }
                    if (event.key.keysym.sym == keypressed("r")) {
                        newWindow.setBackgroundColor(255, 0, 0);
                        SDL_Log("r was pressed");
                        break;
                    }
                    if (event.key.keysym.sym == keypressed("g")) {
                        newWindow.setBackgroundColor(0, 255, 0);
                        SDL_Log("g was pressed");
                        break;
                    }
                    if (event.key.keysym.sym == keypressed("b")) {
                        newWindow.setBackgroundColor(0, 0, 255);
                        SDL_Log("b was pressed");
                        break;
                    }

                
            
            }

        }
            
    }
    return 0;
}
    

