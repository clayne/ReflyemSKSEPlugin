#include "Vampirism.h"
#include "Utils.h"

namespace reflyem
{
  namespace vampirism
  {
    auto on_weapon_hit(
      RE::Actor* target,
      RE::HitData& hit_data,
      const reflyem::config& config) -> void
    {

      auto agressor = hit_data.aggressor.get();

      if (!agressor || target->IsDead()) { return; }

      auto vampirism_percent = agressor->GetActorValue(config.vampirism_av);
      if (vampirism_percent <= 0.f) { return; }

      if (vampirism_percent > 100.f) { vampirism_percent = 100.f; }

      auto damage_mult = reflyem::utils::getting_damage_mult(*target);

      auto target_health = target->GetActorValue(RE::ActorValue::kHealth);
      auto vampirism_value = (hit_data.totalDamage * damage_mult) * (vampirism_percent / 100.f);

      if (vampirism_value > target_health)
      {
        agressor->RestoreActorValue(RE::ACTOR_VALUE_MODIFIER::kPermanent, RE::ActorValue::kHealth, target_health);
      }
      else
      {
        agressor->RestoreActorValue(RE::ACTOR_VALUE_MODIFIER::kPermanent, RE::ActorValue::kHealth, vampirism_value);
      }

    }
  }

}