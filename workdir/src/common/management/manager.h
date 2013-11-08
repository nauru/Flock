#pragma once
#include <objects/object_mod_base.h>
#include <objects/object_base.h>
#include <flock/flock.h>
#include <behaviour/behaviour.h>
#include <vector>
#include <map>

namespace object
{

struct manager 
    : object_mod
{
    public: //info_mod
        state     get_state     () override;
        state_vis get_state_vis () override;

    public: //semantic
        void      update        () override;

    public: //object_mod
        void      reg           (object_mod*) override;
        void      unreg         (object_mod*) override;

    public:
        void      init          (behaviour::behaviour new_behaviour);
        void      deinit        ();
                  manager       ();
                  ~manager      ();

    private:
        std::vector<object_mod*>         registered;
        std::map<object_mod*, controls*> controlled;
        size_t                           reg_size;
        size_t                           cont_size;
        behaviour::behaviour             b_func;
};

} //object