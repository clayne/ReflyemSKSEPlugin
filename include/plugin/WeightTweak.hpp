﻿#pragma once

#include "Config.hpp"

namespace Reflyem::WeightTweak {
auto get_actor_value(RE::ActorValueOwner& this_, const RE::ActorValue av) -> std::optional<float>;
auto set_actor_value(RE::ActorValueOwner& this_, const RE::ActorValue av, const float value)
    -> float;
auto mod_actor_value(RE::ActorValueOwner& this_, const RE::ActorValue av, const float value)
    -> float;
}