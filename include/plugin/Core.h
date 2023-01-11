#pragma once

namespace Reflyem
{
  namespace Core
  {

    template <typename L, typename R>
    struct Either
    {
      bool isL;
      union
      {
        L left;
        R right;
      };
      Either(const L& l)
      {
        isL = true;
        left = l;
      }
      Either(const R& r)
      {
        isL = false;
        right = r;
      }
    };

    auto get_rundom_int() -> int;

    auto damage_actor_value(RE::Actor& actor, RE::ActorValue av, float value) -> void;

    auto actor_has_active_mgef_with_keyword(RE::Actor& actor, RE::BGSKeyword& keyword) -> bool;

    auto get_effect_with_keyword_value(
      RE::Actor& actor,
      RE::BGSKeyword& keyword) -> std::optional<float>;

    auto get_dual_value_mult(RE::ValueModifierEffect& value_effect) -> float;

    auto get_second_av(RE::ValueModifierEffect& value_effect) -> RE::ActorValue;

    auto getting_damage_mult(RE::Actor& actor) -> float;

    auto cast_on_handle(
      RE::TESForm* keyword,
      RE::TESForm* spell,
      RE::Actor& target,
      RE::Actor& caster) -> void;

    auto is_power_attacking(RE::Actor& actor) -> bool;

    auto has_absolute_keyword(RE::Actor& actor, RE::BGSKeyword& keyword) -> bool;

  }
}