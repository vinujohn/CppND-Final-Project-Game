//
// Created by Vinu on 9/21/19.
//

#ifndef SPACEINVADERS_CANNON_H
#define SPACEINVADERS_CANNON_H

#include "Sprite.h"
#include <memory>

class Cannon : public Sprite {
public:
    Cannon(std::vector<Rect> cannonAnimations
            , int windowWidth
            , std::shared_ptr<Sprite> projectile
            , int mMoveCannonBy);

    void Fire();;

    void MoveLeft();;

    void MoveRight();;

    void Destroy();

    void Reset();

private:
    std::shared_ptr<Sprite> mProjectile;
    int mWindowWidth;
    int mMoveCannonBy;
    bool mDestroyed;
};


#endif //SPACEINVADERS_CANNON_H
