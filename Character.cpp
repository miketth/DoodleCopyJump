//
// Created by jani on 2020. 04. 26..
//

#include "Character.h"
#include "Playground.h"

void Character::Control(bool keyPressed) {
    if(keyPressed){
        SDL_Event* ev;
        SDL_PollEvent(ev);
        if(ev->type == SDL_KEYDOWN){
            switch (ev->key.keysym.sym){
                //Both hand Supported Control
                case SDLK_RIGHT:
                    pos.x += 3;
                    break;
                case SDLK_LEFT:
                    pos.x -= 3;
                    break;
                case SDLK_a:
                    pos.x -= 3;
                    break;
                case SDLK_d:
                    pos.x += 3;
                    break;
                case SDLK_SPACE:
                    Shoot();
                default:break;
            }
        }
    }
}

void Character::Shoot(){
    if(Playground::enemy != NULL)
    {

    }
}