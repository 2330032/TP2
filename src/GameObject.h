#pragma once

class GameObject {
    protected:
        virtual void Start(){};
        void Update(){};
        virtual ~GameObject() = default;
};