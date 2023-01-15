#pragma once

#include "Config.h"

namespace Reflyem {
namespace Crit {
auto on_weapon_hit(RE::Actor *target, RE::HitData &hit_data, const Reflyem::Config &config) -> void;

auto modify_actor_value(RE::ValueModifierEffect *a_this, RE::Actor *a_actor, float &a_value, RE::ActorValue av,
                        const Reflyem::Config &config) -> void;
} // namespace Crit
} // namespace Reflyem