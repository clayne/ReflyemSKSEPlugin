#pragma once

#include <toml++/toml.h>

namespace Reflyem {
struct Config {
private:
  Config();

  struct MagicShieldConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto physical() const -> bool { return physical_; }
    [[nodiscard]] auto magick() const -> bool { return magick_; }
    [[nodiscard]] auto must_be_or_not_be() const -> bool { return must_be_or_not_be_; }
    [[nodiscard]] auto mgef_keyword() const -> RE::BGSKeyword* { return mgef_keyword_; }
    [[nodiscard]] auto av() const -> RE::ActorValue { return av_; }
    [[nodiscard]] auto mgef_cost_keyword() const -> RE::BGSKeyword* { return mgef_cost_keyword_; }
    MagicShieldConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    MagicShieldConfig() = default;

  private:
    bool            enable_;
    bool            physical_;
    bool            magick_;
    bool            must_be_or_not_be_;
    RE::BGSKeyword* mgef_keyword_;
    RE::ActorValue  av_;
    RE::BGSKeyword* mgef_cost_keyword_;
  };

  struct PetrifiedBloodConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto physical() const -> bool { return physical_; }
    [[nodiscard]] auto magick() const -> bool { return magick_; }
    [[nodiscard]] auto must_be_or_not_be() const -> bool { return must_be_or_not_be_; }
    [[nodiscard]] auto mgef_keyword() const -> RE::BGSKeyword* { return mgef_keyword_; }

    [[nodiscard]] auto mgef_accumulate_keyword_damage() const -> RE::BGSKeyword* {
      return mgef_accumulate_keyword_damage_;
    }

    [[nodiscard]] auto av() const -> RE::ActorValue { return av_; }
    [[nodiscard]] auto blood_spell() const -> RE::SpellItem* { return blood_spell_; }

    PetrifiedBloodConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    PetrifiedBloodConfig() = default;

  private:
    bool            enable_;
    bool            physical_;
    bool            magick_;
    bool            must_be_or_not_be_;
    RE::BGSKeyword* mgef_keyword_;
    RE::BGSKeyword* mgef_accumulate_keyword_damage_;
    RE::ActorValue  av_;
    RE::SpellItem*  blood_spell_;
  };

  struct CheatDeathConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto physical() const -> bool { return physical_; }
    [[nodiscard]] auto magick() const -> bool { return magick_; }

    [[nodiscard]] auto mgef_percent_keyword() const -> RE::BGSKeyword* {
      return mgef_percent_keyword_;
    }

    CheatDeathConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    CheatDeathConfig() = default;

  private:
    bool            enable_;
    bool            physical_;
    bool            magick_;
    RE::BGSKeyword* mgef_percent_keyword_;
  };

  struct VampirismConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto av() const -> RE::ActorValue { return av_; }
    [[nodiscard]] auto mgef_health_enable() const -> bool { return mgef_health_enable_; }

    [[nodiscard]] auto mgef_health_keyword() const -> RE::BGSKeyword* {
      return mgef_health_keyword_;
    }

    [[nodiscard]] auto mgef_stamina_enable() const -> bool { return mgef_stamina_enable_; }

    [[nodiscard]] auto mgef_stamina_keyword() const -> RE::BGSKeyword* {
      return mgef_stamina_keyword_;
    }

    [[nodiscard]] auto mgef_magicka_enable() const -> bool { return mgef_magicka_enable_; }

    [[nodiscard]] auto mgef_magicka_keyword() const -> RE::BGSKeyword* {
      return mgef_magicka_keyword_;
    }

    VampirismConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    VampirismConfig() = default;

  private:
    // vampirism
    bool           enable_;
    RE::ActorValue av_;

    // vampirism magick effect
    // health
    bool            mgef_health_enable_;
    RE::BGSKeyword* mgef_health_keyword_;

    // stamina
    bool            mgef_stamina_enable_;
    RE::BGSKeyword* mgef_stamina_keyword_;

    // magicka
    bool            mgef_magicka_enable_;
    RE::BGSKeyword* mgef_magicka_keyword_;
  };

  struct MagicVampirismConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto av() const -> RE::ActorValue { return av_; }
    [[nodiscard]] auto must_be_or_not_be() const -> bool { return must_be_or_not_be_; }
    [[nodiscard]] auto mgef_keyword() const -> RE::BGSKeyword* { return mgef_keyword_; }
    [[nodiscard]] auto mgef_health_enable() const -> bool { return mgef_health_enable_; }

    [[nodiscard]] auto mgef_health_keyword() const -> RE::BGSKeyword* {
      return mgef_health_keyword_;
    }

    [[nodiscard]] auto mgef_stamina_enable() const -> bool { return mgef_stamina_enable_; }

    [[nodiscard]] auto mgef_stamina_keyword() const -> RE::BGSKeyword* {
      return mgef_stamina_keyword_;
    }

    [[nodiscard]] auto mgef_magicka_enable() const -> bool { return mgef_magicka_enable_; }

    [[nodiscard]] auto mgef_magicka_keyword() const -> RE::BGSKeyword* {
      return mgef_magicka_keyword_;
    }

    MagicVampirismConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    MagicVampirismConfig() = default;

  private:
    // vampirism
    bool            enable_;
    RE::ActorValue  av_;
    bool            must_be_or_not_be_;
    RE::BGSKeyword* mgef_keyword_;

    // vampirism magick effect
    // health
    bool            mgef_health_enable_;
    RE::BGSKeyword* mgef_health_keyword_;

    // stamina
    bool            mgef_stamina_enable_;
    RE::BGSKeyword* mgef_stamina_keyword_;

    // magicka
    bool            mgef_magicka_enable_;
    RE::BGSKeyword* mgef_magicka_keyword_;
  };

  struct SpeedCastingConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto global() const -> RE::TESGlobal* { return global_; }
    [[nodiscard]] auto av() const -> RE::ActorValue { return av_; }
    [[nodiscard]] auto high() const -> float { return high_; }
    [[nodiscard]] auto low() const -> float { return low_; }

    SpeedCastingConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    SpeedCastingConfig() = default;

  private:
    bool           enable_;
    RE::TESGlobal* global_;
    RE::ActorValue av_;
    float          high_;
    float          low_;
  };

  struct WeaponCritConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto chance_av() const -> RE::ActorValue { return chance_av_; }
    [[nodiscard]] auto damage_av() const -> RE::ActorValue { return damage_av_; }
    [[nodiscard]] auto high() const -> std::int32_t { return high_; }

    WeaponCritConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    WeaponCritConfig() = default;

  private:
    bool           enable_;
    RE::ActorValue chance_av_;
    RE::ActorValue damage_av_;
    std::int32_t   high_;
  };

  struct MagickCritConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto chance_av() const -> RE::ActorValue { return chance_av_; }
    [[nodiscard]] auto damage_av() const -> RE::ActorValue { return damage_av_; }
    [[nodiscard]] auto high() const -> std::int32_t { return high_; }
    [[nodiscard]] auto must_be_or_not_be() const -> bool { return must_be_or_not_be_; }
    [[nodiscard]] auto mgef_keyword() const -> RE::BGSKeyword* { return mgef_keyword_; }

    MagickCritConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    MagickCritConfig() = default;

  private:
    bool            enable_;
    RE::ActorValue  chance_av_;
    RE::ActorValue  damage_av_;
    std::int32_t    high_;
    bool            must_be_or_not_be_;
    RE::BGSKeyword* mgef_keyword_;
  };

  struct CastOnCritConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto physical() const -> bool { return physical_; }
    [[nodiscard]] auto magick() const -> bool { return magick_; }
    [[nodiscard]] auto magick_cooldawn() const -> float { return magick_cooldawn_; }
    [[nodiscard]] auto formlist_spells() const -> RE::BGSListForm* { return formlist_spells_; }
    [[nodiscard]] auto formlist_needkw() const -> RE::BGSListForm* { return formlist_needkw_; }

    CastOnCritConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    CastOnCritConfig() = default;

  private:
    bool             enable_;
    bool             physical_;
    bool             magick_;
    float            magick_cooldawn_;
    RE::BGSListForm* formlist_spells_;
    RE::BGSListForm* formlist_needkw_;
  };

  struct CastOnHitConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto formlist_spells() const -> RE::BGSListForm* { return formlist_spells_; }
    [[nodiscard]] auto formlist_needkw() const -> RE::BGSListForm* { return formlist_needkw_; }

    CastOnHitConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    CastOnHitConfig() = default;

  private:
    bool             enable_;
    RE::BGSListForm* formlist_spells_;
    RE::BGSListForm* formlist_needkw_;
  };

  struct CastOnBlockConfig {
  public:
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto formlist_spells() const -> RE::BGSListForm* { return formlist_spells_; }
    [[nodiscard]] auto formlist_needkw() const -> RE::BGSListForm* { return formlist_needkw_; }

    CastOnBlockConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    CastOnBlockConfig() = default;

  private:
    bool             enable_;
    RE::BGSListForm* formlist_spells_;
    RE::BGSListForm* formlist_needkw_;
  };

  struct ResourceManagerConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto weapon_spend_enable() const -> bool { return weapon_spend_enable_; }
    [[nodiscard]] auto bash_spend_enable() const -> bool { return bash_spend_enable_; }
    [[nodiscard]] auto block_spend_enable() const -> bool { return block_spend_enable_; }
    [[nodiscard]] auto regeneration_enable() const -> bool { return regeneration_enable_; }
    [[nodiscard]] auto infamy_enable() const -> bool { return infamy_enable_; }
    [[nodiscard]] auto regen_delay() const -> float { return regen_delay_; }
    [[nodiscard]] auto weight_mult() const -> float { return weight_mult_; }
    [[nodiscard]] auto damage_mult() const -> float { return damage_mult_; }
    [[nodiscard]] auto armor_mult() const -> float { return armor_mult_; }
    [[nodiscard]] auto global_mult() const -> float { return global_mult_; }
    [[nodiscard]] auto power_attack_mult() const -> float { return power_attack_mult_; }
    [[nodiscard]] auto jump_cost() const -> float { return jump_cost_; }
    [[nodiscard]] auto spell_block_attack() const -> RE::SpellItem* { return spell_block_attack_; }

    [[nodiscard]] auto spell_block_power_attack() const -> RE::SpellItem* {
      return spell_block_power_attack_;
    }

    [[nodiscard]] auto spell_block_bash() const -> RE::SpellItem* { return spell_block_bash_; }
    [[nodiscard]] auto unarmed_weapon() const -> RE::TESObjectWEAP* { return unarmed_weapon_; }
    [[nodiscard]] auto attack_cost_av() const -> RE::ActorValue { return attack_cost_av_; }
    [[nodiscard]] auto attack_cost_high() const -> std::int32_t { return attack_cost_high_; }
    [[nodiscard]] auto attack_cost_low() const -> std::int32_t { return attack_cost_low_; }

    [[nodiscard]] auto power_attack_cost_av() const -> RE::ActorValue {
      return power_attack_cost_av_;
    }

    [[nodiscard]] auto power_attack_cost_high() const -> std::int32_t {
      return power_attack_cost_high_;
    }

    [[nodiscard]] auto power_attack_cost_low() const -> std::int32_t {
      return power_attack_cost_low_;
    }

    [[nodiscard]] auto health_kw() const -> RE::BGSKeyword* { return health_kw_; }
    [[nodiscard]] auto stamina_kw() const -> RE::BGSKeyword* { return stamina_kw_; }
    [[nodiscard]] auto magicka_kw() const -> RE::BGSKeyword* { return magicka_kw_; }

    [[nodiscard]] auto convert_stamina_health_kw() const -> RE::BGSKeyword* {
      return convert_stamina_health_kw_;
    }

    [[nodiscard]] auto convert_stamina_magicka_kw() const -> RE::BGSKeyword* {
      return convert_stamina_magicka_kw_;
    }

    [[nodiscard]] auto convert_magicka_health_kw() const -> RE::BGSKeyword* {
      return convert_magicka_health_kw_;
    }

    [[nodiscard]] auto convert_magicka_stamina_kw() const -> RE::BGSKeyword* {
      return convert_magicka_stamina_kw_;
    }

    [[nodiscard]] auto convert_health_stamina_kw() const -> RE::BGSKeyword* {
      return convert_health_stamina_kw_;
    }

    [[nodiscard]] auto convert_health_magicka_kw() const -> RE::BGSKeyword* {
      return convert_health_magicka_kw_;
    }

    ResourceManagerConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    ResourceManagerConfig() = default;

  private:
    bool enable_;
    bool weapon_spend_enable_;
    bool bash_spend_enable_;
    bool block_spend_enable_;
    bool regeneration_enable_;
    bool infamy_enable_;

    float regen_delay_;

    float weight_mult_;
    float damage_mult_;
    float armor_mult_;
    float global_mult_;
    float power_attack_mult_;
    float jump_cost_;

    RE::SpellItem* spell_block_attack_;
    RE::SpellItem* spell_block_power_attack_;
    RE::SpellItem* spell_block_bash_;

    RE::TESObjectWEAP* unarmed_weapon_;

    RE::ActorValue attack_cost_av_;
    std::int32_t   attack_cost_high_;
    std::int32_t   attack_cost_low_;

    RE::ActorValue power_attack_cost_av_;
    std::int32_t   power_attack_cost_high_;
    std::int32_t   power_attack_cost_low_;

    RE::BGSKeyword* health_kw_;
    RE::BGSKeyword* stamina_kw_;
    RE::BGSKeyword* magicka_kw_;

    RE::BGSKeyword* convert_stamina_health_kw_;
    RE::BGSKeyword* convert_stamina_magicka_kw_;
    RE::BGSKeyword* convert_magicka_health_kw_;
    RE::BGSKeyword* convert_magicka_stamina_kw_;
    RE::BGSKeyword* convert_health_stamina_kw_;
    RE::BGSKeyword* convert_health_magicka_kw_;
  };

  struct TkDodgeConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto key() const -> std::uint32_t { return key_; }
    [[nodiscard]] auto step() const -> std::int32_t { return step_; }
    [[nodiscard]] auto iframe_duration() const -> float { return iframe_duration_; }

    [[nodiscard]] auto iframe_duration_mgef_kw() const -> RE::BGSKeyword* {
      return iframe_duration_mgef_kw_;
    }

    [[nodiscard]] auto gamepad_treshold() const -> float { return gamepad_treshold_; }
    [[nodiscard]] auto sprint_tapping_dodge() const -> bool { return sprint_tapping_dodge_; }
    [[nodiscard]] auto block_dodge_when_attack() const -> bool { return block_dodge_when_attack_; }

    [[nodiscard]] auto block_dodge_when_attack_perk() const -> RE::BGSPerk* {
      return block_dodge_when_attack_perk_;
    }

    [[nodiscard]] auto block_dodge_when_power_attack() const -> bool {
      return block_dodge_when_power_attack_;
    }

    [[nodiscard]] auto block_dodge_when_power_attack_perk() const -> RE::BGSPerk* {
      return block_dodge_when_power_attack_perk_;
    }

    [[nodiscard]] auto block_dodge_when_casting() const -> bool {
      return block_dodge_when_casting_;
    }

    [[nodiscard]] auto block_dodge_when_casting_perk() const -> RE::BGSPerk* {
      return block_dodge_when_casting_perk_;
    }

    [[nodiscard]] auto key_up_delay() const -> float { return key_up_delay_; }
    [[nodiscard]] auto max_cost() const -> float { return max_cost_; }
    [[nodiscard]] auto min_cost() const -> float { return min_cost_; }
    [[nodiscard]] auto flat_cost() const -> float { return flat_cost_; }
    [[nodiscard]] auto cost_from_mgef_kw() const -> RE::BGSKeyword* { return cost_from_mgef_kw_; }
    [[nodiscard]] auto equipped_weight_mult() const -> float { return equipped_weight_mult_; }
    [[nodiscard]] auto health_kw() const -> RE::BGSKeyword* { return health_kw_; }
    [[nodiscard]] auto stamina_kw() const -> RE::BGSKeyword* { return stamina_kw_; }
    [[nodiscard]] auto magicka_kw() const -> RE::BGSKeyword* { return magicka_kw_; }

    TkDodgeConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    TkDodgeConfig() = default;

  private:
    bool            enable_;
    std::uint32_t   key_;
    std::int32_t    step_;
    float           iframe_duration_;
    RE::BGSKeyword* iframe_duration_mgef_kw_;
    float           gamepad_treshold_;
    bool            sprint_tapping_dodge_;
    bool            block_dodge_when_attack_;
    RE::BGSPerk*    block_dodge_when_attack_perk_;
    bool            block_dodge_when_power_attack_;
    RE::BGSPerk*    block_dodge_when_power_attack_perk_;
    bool            block_dodge_when_casting_;
    RE::BGSPerk*    block_dodge_when_casting_perk_;
    float           key_up_delay_;
    float           max_cost_;
    float           min_cost_;
    float           flat_cost_;
    RE::BGSKeyword* cost_from_mgef_kw_;
    float           equipped_weight_mult_;
    RE::BGSKeyword* health_kw_;
    RE::BGSKeyword* stamina_kw_;
    RE::BGSKeyword* magicka_kw_;
  };

  struct CasterAdditionsConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }

    [[nodiscard]] auto spell_add_when_casting() const -> RE::SpellItem* {
      return spell_add_when_casting_;
    }

    [[nodiscard]] auto stamina_cost() const -> bool { return stamina_cost_; }

    CasterAdditionsConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    CasterAdditionsConfig() = default;

  private:
    bool           enable_;
    RE::SpellItem* spell_add_when_casting_;
    bool           stamina_cost_;
  };

  struct MagicWeaponConfig {
    [[nodiscard]] auto enable() const -> bool { return enable_; }
    [[nodiscard]] auto spells() const -> RE::BGSListForm* { return spells_; }
    [[nodiscard]] auto keywords() const -> RE::BGSListForm* { return keywords_; }
    [[nodiscard]] auto globals() const -> RE::BGSListForm* { return globals_; }
    MagicWeaponConfig(toml::table& tbl, RE::TESDataHandler& data_handler, const Config& config);
    MagicWeaponConfig() = default;

  private:
    bool             enable_;
    RE::BGSListForm* spells_;
    RE::BGSListForm* keywords_;
    RE::BGSListForm* globals_;
  };

  // general
  std::string_view mod_name_;

  // magic shield
  MagicShieldConfig magic_shield_{};

  // petrified blood
  PetrifiedBloodConfig petrified_blood_{};

  // cheat death
  CheatDeathConfig cheat_death_{};

  // vampirism
  VampirismConfig vampirism_{};

  // magic vampirism
  MagicVampirismConfig magic_vampirism_{};

  // FenixSpeedCasting addon
  // speed casting
  SpeedCastingConfig speed_casting_{};

  // weapon crit
  WeaponCritConfig weapon_crit_{};

  // magic crit
  MagickCritConfig magick_crit_{};

  // cast on crit
  CastOnCritConfig cast_on_crit_{};

  // cast on hit
  CastOnHitConfig cast_on_hit_{};

  // cast on block
  CastOnBlockConfig cast_on_block_{};

  // resource manager
  ResourceManagerConfig resource_manager_{};

  // TK Dodge RE reimplement
  TkDodgeConfig tk_dodge_{};

  // caster additions
  CasterAdditionsConfig caster_additions_{};

  // magic weapon
  MagicWeaponConfig magic_weapon_{};

public:
  [[nodiscard]] static auto get_singleton() noexcept -> const Config&;

  [[nodiscard]] auto mod_name() const -> const std::string_view& { return mod_name_; }

  [[nodiscard]] auto magic_shield() const -> const MagicShieldConfig& { return magic_shield_; }

  [[nodiscard]] auto petrified_blood() const -> const PetrifiedBloodConfig& {
    return petrified_blood_;
  }

  [[nodiscard]] auto cheat_death() const -> const CheatDeathConfig& { return cheat_death_; }
  [[nodiscard]] auto vampirism() const -> const VampirismConfig& { return vampirism_; }

  [[nodiscard]] auto magic_vampirism() const -> const MagicVampirismConfig& {
    return magic_vampirism_;
  }

  [[nodiscard]] auto speed_casting() const -> const SpeedCastingConfig& { return speed_casting_; }
  [[nodiscard]] auto weapon_crit() const -> const WeaponCritConfig& { return weapon_crit_; }
  [[nodiscard]] auto magick_crit() const -> const MagickCritConfig& { return magick_crit_; }
  [[nodiscard]] auto cast_on_crit() const -> const CastOnCritConfig& { return cast_on_crit_; }
  [[nodiscard]] auto cast_on_hit() const -> const CastOnHitConfig& { return cast_on_hit_; }
  [[nodiscard]] auto cast_on_block() const -> const CastOnBlockConfig& { return cast_on_block_; }

  [[nodiscard]] auto resource_manager() const -> const ResourceManagerConfig& {
    return resource_manager_;
  }

  [[nodiscard]] auto tk_dodge() const -> const TkDodgeConfig& { return tk_dodge_; }

  [[nodiscard]] auto caster_additions() const -> const CasterAdditionsConfig& {
    return caster_additions_;
  }

  [[nodiscard]] auto magic_weapon() const -> const MagicWeaponConfig& { return magic_weapon_; }
};

} // namespace Reflyem