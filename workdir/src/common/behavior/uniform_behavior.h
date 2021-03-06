#pragma once
#include <behavior/behavior_base.h>
#include <objects/object_mod_base.h>
#include <objects/dynamic_object.h>
#include <vector>
#include <map>

namespace behavior
{

class uniform_behavior: private behavior_base //applied to every object uniformly
{
         uniform_behavior(void (*func)(boost::shared_ptr<object::dynamic_object>));
         ~uniform_behavior();

    void apply (boost::shared_ptr<object::dynamic_object>) override;

    private:
        void (*func)(boost::shared_ptr<object::dynamic_object>);
};

}