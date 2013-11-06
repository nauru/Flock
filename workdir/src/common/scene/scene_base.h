#pragma once
#include<objects/object_vis_base.h>

namespace scene
{

struct construction
{
    virtual void add            () = 0;
    virtual void remove         () = 0;
    virtual      ~construction  () {};

};

struct info
{
    virtual object::object_vis &               const access  () = 0;
    virtual std::vector<object::object_vis*> & const content () = 0;
    virtual                                          ~info () {};
};

struct semantic
{
    virtual void update     () = 0;
    virtual void render     () = 0;
    virtual      ~semantic  () {};
}

} //scene
