#ifndef SFALL_CONFIG_H
#define SFALL_CONFIG_H

#include "config.h"

#define SFALL_CONFIG_FILE_NAME "ddraw.ini"

#define SFALL_CONFIG_MISC_KEY "Misc"

#define SFALL_CONFIG_DUDE_NATIVE_LOOK_JUMPSUIT_MALE_KEY "MaleDefaultModel"
#define SFALL_CONFIG_DUDE_NATIVE_LOOK_JUMPSUIT_FEMALE_KEY "FemaleDefaultModel"
#define SFALL_CONFIG_DUDE_NATIVE_LOOK_TRIBAL_MALE_KEY "MaleStartModel"
#define SFALL_CONFIG_DUDE_NATIVE_LOOK_TRIBAL_FEMALE_KEY "FemaleStartModel"
#define SFALL_CONFIG_MAIN_MENU_BIG_FONT_COLOR_KEY "MainMenuBigFontColour"
#define SFALL_CONFIG_MAIN_MENU_CREDITS_OFFSET_X_KEY "MainMenuCreditsOffsetX"
#define SFALL_CONFIG_MAIN_MENU_CREDITS_OFFSET_Y_KEY "MainMenuCreditsOffsetY"
#define SFALL_CONFIG_MAIN_MENU_FONT_COLOR_KEY "MainMenuFontColour"
#define SFALL_CONFIG_MAIN_MENU_OFFSET_X_KEY "MainMenuOffsetX"
#define SFALL_CONFIG_MAIN_MENU_OFFSET_Y_KEY "MainMenuOffsetY"
#define SFALL_CONFIG_SKIP_OPENING_MOVIES_KEY "SkipOpeningMovies"
#define SFALL_CONFIG_STARTING_MAP_KEY "StartingMap"
#define SFALL_CONFIG_KARMA_FRMS_KEY "KarmaFRMs"
#define SFALL_CONFIG_KARMA_POINTS_KEY "KarmaPoints"
#define SFALL_CONFIG_DISPLAY_KARMA_CHANGES_KEY "DisplayKarmaChanges"
#define SFALL_CONFIG_OVERRIDE_CRITICALS_MODE_KEY "OverrideCriticalTable"
#define SFALL_CONFIG_OVERRIDE_CRITICALS_FILE_KEY "OverrideCriticalFile"
#define SFALL_CONFIG_REMOVE_CRITICALS_TIME_LIMITS_KEY "RemoveCriticalTimelimits"
#define SFALL_CONFIG_BOOKS_FILE_KEY "BooksFile"
#define SFALL_CONFIG_ELEVATORS_FILE_KEY "ElevatorsFile"
#define SFALL_CONFIG_CONSOLE_OUTPUT_FILE_KEY "ConsoleOutputPath"
#define SFALL_CONFIG_PREMADE_CHARACTERS_FILE_NAMES_KEY "PremadePaths"
#define SFALL_CONFIG_PREMADE_CHARACTERS_FACE_FIDS_KEY "PremadeFIDs"
#define SFALL_CONFIG_BURST_MOD_ENABLED_KEY "ComputeSprayMod"
#define SFALL_CONFIG_BURST_MOD_CENTER_MULTIPLIER_KEY "ComputeSpray_CenterMult"
#define SFALL_CONFIG_BURST_MOD_CENTER_DIVISOR_KEY "ComputeSpray_CenterDiv"
#define SFALL_CONFIG_BURST_MOD_TARGET_MULTIPLIER_KEY "ComputeSpray_TargetMult"
#define SFALL_CONFIG_BURST_MOD_TARGET_DIVISOR_KEY "ComputeSpray_TargetDiv"
#define SFALL_CONFIG_DYNAMITE_MIN_DAMAGE_KEY "Dynamite_DmgMin"
#define SFALL_CONFIG_DYNAMITE_MAX_DAMAGE_KEY "Dynamite_DmgMax"
#define SFALL_CONFIG_PLASTIC_EXPLOSIVE_MIN_DAMAGE_KEY "PlasticExplosive_DmgMin"
#define SFALL_CONFIG_PLASTIC_EXPLOSIVE_MAX_DAMAGE_KEY "PlasticExplosive_DmgMax"
#define SFALL_CONFIG_EXPLOSION_EMITS_LIGHT_KEY "ExplosionsEmitLight"
#define SFALL_CONFIG_CITY_REPUTATION_LIST_KEY "CityRepsList"
#define SFALL_CONFIG_UNARMED_FILE_KEY "UnarmedFile"
#define SFALL_CONFIG_DAMAGE_MOD_FORMULA_KEY "DamageFormula"
#define SFALL_CONFIG_BONUS_HTH_DAMAGE_FIX_KEY "BonusHtHDamageFix"
#define SFALL_CONFIG_DISPLAY_BONUS_DAMAGE_KEY "DisplayBonusDamage"
#define SFALL_CONFIG_USE_LOCKPICK_FRM_KEY "Lockpick"
#define SFALL_CONFIG_USE_STEAL_FRM_KEY "Steal"
#define SFALL_CONFIG_USE_TRAPS_FRM_KEY "Traps"
#define SFALL_CONFIG_USE_FIRST_AID_FRM_KEY "FirstAid"
#define SFALL_CONFIG_USE_DOCTOR_FRM_KEY "Doctor"
#define SFALL_CONFIG_USE_SCIENCE_FRM_KEY "Science"
#define SFALL_CONFIG_USE_REPAIR_FRM_KEY "Repair"

#define SFALL_CONFIG_BURST_MOD_DEFAULT_CENTER_MULTIPLIER 1
#define SFALL_CONFIG_BURST_MOD_DEFAULT_CENTER_DIVISOR 3
#define SFALL_CONFIG_BURST_MOD_DEFAULT_TARGET_MULTIPLIER 1
#define SFALL_CONFIG_BURST_MOD_DEFAULT_TARGET_DIVISOR 2

extern bool gSfallConfigInitialized;
extern Config gSfallConfig;

bool sfallConfigInit(int argc, char** argv);
void sfallConfigExit();

#endif /* SFALL_CONFIG_H */
