-- 便携黑洞
DELETE FROM `item_template` where `entry` = 51809;
INSERT INTO `item_template` (`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES ('51809', '0', '1', '0', '乾坤袋', '', '20342', '4', '0', '1', '160000', '40000', '18', '-1', '-1', '62', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', '24', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '-1', '0', '-1', '0', '0', '0', '0', '-1', '0', '-1', '0', '0', '0', '0', '-1', '0', '-1', '0', '0', '0', '0', '-1', '0', '-1', '0', '0', '0', '0', '0', '0', '0', '2', '0', '0', '0', '0', '0', '8', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1');

-- 诺格弗格药剂（无尽）
DELETE FROM `item_template` where `entry` = 51810;
INSERT INTO `item_template`(`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES (51810, 0, 15, 0, '诺格弗格药剂（无尽）', '', 17403, 4, 0, 5, 3500, 175, 0, -1, -1, 45, 35, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16589, 0, 0, 0, 3000, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);

-- 美味风蛇（无尽）
DELETE FROM `item_template` where `entry` = 51811;
INSERT INTO `item_template`(`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES (51811, 0, 15, 0, '美味风蛇（无尽）', '', 12780, 4, 0, 1, 20, 5, 0, -1, -1, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8213, 0, 0, 0, 10000, 11, 1000, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);

-- 冬泉火酒（无尽）
DELETE FROM `item_template` where `entry` = 51812;
INSERT INTO `item_template`(`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES (51812, 0, 15, 0, '冬泉火酒（无尽）', '', 15787, 4, 0, 1, 0, 0, 0, -1, -1, 50, 45, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17038, 0, 0, 0, 60000, 0, 60000, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 7, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);

-- 戈多克食人魔装（无尽）
DELETE FROM `item_template` where `entry` = 51813;
INSERT INTO `item_template`(`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES (51813, 0, 15, 0, '戈多克食人魔装（无尽）', 'It lifts AND supports!', 30611, 4, 0, 1, 0, 0, 0, -1, -1, 55, 55, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22736, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);

-- 欺诈珠宝（无尽）
DELETE FROM `item_template` where `entry` = 51814;
INSERT INTO `item_template`(`entry`, `patch`, `class`, `subclass`, `name`, `description`, `display_id`, `quality`, `flags`, `buy_count`, `buy_price`, `sell_price`, `inventory_type`, `allowable_class`, `allowable_race`, `item_level`, `required_level`, `required_skill`, `required_skill_rank`, `required_spell`, `required_honor_rank`, `required_city_rank`, `required_reputation_faction`, `required_reputation_rank`, `max_count`, `stackable`, `container_slots`, `stat_type1`, `stat_value1`, `stat_type2`, `stat_value2`, `stat_type3`, `stat_value3`, `stat_type4`, `stat_value4`, `stat_type5`, `stat_value5`, `stat_type6`, `stat_value6`, `stat_type7`, `stat_value7`, `stat_type8`, `stat_value8`, `stat_type9`, `stat_value9`, `stat_type10`, `stat_value10`, `delay`, `range_mod`, `ammo_type`, `dmg_min1`, `dmg_max1`, `dmg_type1`, `dmg_min2`, `dmg_max2`, `dmg_type2`, `dmg_min3`, `dmg_max3`, `dmg_type3`, `dmg_min4`, `dmg_max4`, `dmg_type4`, `dmg_min5`, `dmg_max5`, `dmg_type5`, `block`, `armor`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spellid_1`, `spelltrigger_1`, `spellcharges_1`, `spellppmrate_1`, `spellcooldown_1`, `spellcategory_1`, `spellcategorycooldown_1`, `spellid_2`, `spelltrigger_2`, `spellcharges_2`, `spellppmrate_2`, `spellcooldown_2`, `spellcategory_2`, `spellcategorycooldown_2`, `spellid_3`, `spelltrigger_3`, `spellcharges_3`, `spellppmrate_3`, `spellcooldown_3`, `spellcategory_3`, `spellcategorycooldown_3`, `spellid_4`, `spelltrigger_4`, `spellcharges_4`, `spellppmrate_4`, `spellcooldown_4`, `spellcategory_4`, `spellcategorycooldown_4`, `spellid_5`, `spelltrigger_5`, `spellcharges_5`, `spellppmrate_5`, `spellcooldown_5`, `spellcategory_5`, `spellcategorycooldown_5`, `bonding`, `page_text`, `page_language`, `page_material`, `start_quest`, `lock_id`, `material`, `sheath`, `random_property`, `set_id`, `max_durability`, `area_bound`, `map_bound`, `duration`, `bag_family`, `disenchant_id`, `food_type`, `min_money_loot`, `max_money_loot`, `extra_flags`, `other_team_entry`) VALUES (51814, 0, 15, 0, '欺诈珠宝（无尽）', '', 6506, 4, 0, 1, 18475, 4618, 0, -1, -1, 59, 54, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16739, 0, 0, 0, 1000, 28, 2000, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 1);


-- LHWOW NPC
DELETE FROM `creature_template` where `entry` = 90092;
DELETE FROM `creature` where `id` = 90092;
INSERT INTO `creature_template` (`entry`, `patch`, `display_id1`, `display_id2`, `display_id3`, `display_id4`, `name`, `subname`, `gossip_menu_id`, `level_min`, `level_max`, `health_min`, `health_max`, `mana_min`, `mana_max`, `armor`, `faction`, `npc_flags`, `speed_walk`, `speed_run`, `scale`, `detection_range`, `call_for_help_range`, `leash_range`, `rank`, `xp_multiplier`, `dmg_min`, `dmg_max`, `dmg_school`, `attack_power`, `dmg_multiplier`, `base_attack_time`, `ranged_attack_time`, `unit_class`, `unit_flags`, `dynamic_flags`, `beast_family`, `trainer_type`, `trainer_spell`, `trainer_class`, `trainer_race`, `ranged_dmg_min`, `ranged_dmg_max`, `ranged_attack_power`, `type`, `type_flags`, `loot_id`, `pickpocket_loot_id`, `skinning_loot_id`, `holy_res`, `fire_res`, `nature_res`, `frost_res`, `shadow_res`, `arcane_res`, `spell_id1`, `spell_id2`, `spell_id3`, `spell_id4`, `spell_list_id`, `pet_spell_list_id`, `gold_min`, `gold_max`, `ai_name`, `movement_type`, `inhabit_type`, `civilian`, `racial_leader`, `regeneration`, `equipment_id`, `trainer_id`, `vendor_id`, `mechanic_immune_mask`, `school_immune_mask`, `flags_extra`, `script_name`) VALUES 
(90092, 0, 7209, 0, 0, 0, 'LHWOW', '', 0, 50, 50, 4000, 5000, 200, 300, 200, 35, 3, 0, 0, 1, 20, 5, 0, 1, 1, 687, 967, 0, 226, 1, 1000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 2, 'custom_lhwow_npc');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '1', '0', '0', '10325.5', '825.264', '1326.38', '2.88851', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '0', '0', '0', '-6225.47', '332.988', '383.204', '3.01593', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '0', '0', '0', '-8934.81', '-131.418', '83.225', '3.04735', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '1', '0', '0', '-607.559', '-4255.93', '38.9573', '2.81958', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '1', '0', '0', '-2907.04', '-261.685', '52.9671', '2.90205', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '0', '0', '0', '1665.48', '1681.53', '120.53', '6.25133', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '1', '0', '0', '1603.97', '-4400.33', '9.90168', '1.75571', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');
INSERT INTO `creature` (`id`, `map`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecsmin`, `spawntimesecsmax`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `spawnFlags`, `visibilitymod`, `patch_min`, `patch_max`) VALUES ('90092', '0', '0', '0', '-4915.41', '-971.582', '501.466', '0.340683', '25', '25', '0', '0', '100', '100', '0', '0', '0', '0', '0', '10');



DELETE FROM `broadcast_text` where `ID` > 200000;
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('200001', '我需要前往奥格瑞玛', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('200002', '我需要前往铁炉堡', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('210000', '赞助点数查询', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('220000', '直升60（送T0，技能） 10000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('220001', '直升60（送环保装，技能） 3000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('230000', '乾坤袋（24格背包） 5000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('240000', '武器技能满 3000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('250000', '坐骑', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260000', '专业技能 10000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260001', '炼金术', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260002', '锻造', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260003', '制皮', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260004', '裁缝', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260005', '工程', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260006', '附魔', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260007', '草药', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260008', '剥皮', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260009', '采矿', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260010', '急救', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260011', '钓鱼', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('260012', '烹饪', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('280000', '双天赋(账号共享永久) 5000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('290000', '永久玩具', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('291000', '诺格弗格药剂（无尽） 5000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('292000', '美味风蛇（无尽）6000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('293000', '冬泉火酒（无尽）10000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('294000', '戈多克食人魔装（无尽）12000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('295000', '欺诈珠宝（无尽） 8000赞助点', '');


INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('211000', '合剂 200赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('211001', '泰坦合剂', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('211002', '精炼智慧合剂', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('211003', '超级能量合剂', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('211004', '多重抗性合剂', '');


INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270000', '世界传送', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('271001', '<-[主菜单]', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('271002', '[更多] ->', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('271003', '<- [返回]', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('271004', '世界传送(账号共享永久) 8000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272001', '主要城市', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272002', '起始区域', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272003', '地下城', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272004', '团队副本', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272005', '古拉巴什竞技场', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272006', '区域 - 卡利姆多', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('272007', '区域 - 东部王国', '');

INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270001', '奥格瑞玛', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270002', '幽暗城', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270003', '雷霆崖', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270004', '暴风城', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270005', '铁炉堡', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270006', '达纳苏斯', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270007', '暗影坟墓', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270008', '试炼谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270009', '纳拉什营地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270010', '北郡谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270011', '寒脊山谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270012', '幽影', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270013', '哀嚎洞穴', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270014', '死亡矿井', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270015', '影牙城堡', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270016', '黑暗深渊', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270017', '剃刀沼泽', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270018', '剃刀高地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270019', '血色修道院', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270020', '奥达曼', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270021', '祖尔法拉克', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270022', '玛拉顿', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270023', '沉没的神庙', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270024', '黑石深渊', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270025', '厄运之槌', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270026', '黑石塔', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270027', '斯坦索姆', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270028', '通灵学院', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270029', '祖尔格拉布', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270030', '奥妮克希亚的巢穴', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270031', '熔火之心', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270032', '黑翼巢穴', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270033', '安其拉的废墟', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270034', '安其拉神庙', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270035', '纳克萨玛斯', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270036', '灰谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270037', '黑海岸', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270038', '凄凉之地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270039', '杜隆塔尔', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270040', '尘泥沼泽', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270041', '菲拉斯', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270042', '希利苏斯', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270043', '石爪山脉', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270044', '塔纳利斯', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270045', '贫瘠之地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270046', '千针石林', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270047', '冬泉谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270048', '阿拉希高地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270049', '废墟', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270050', '丹莫罗', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270051', '暮色森林', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270052', '东瘟疫之地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270053', '艾尔文森林', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270054', '希尔斯布莱德丘陵', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270055', '赤脊山', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270056', '银松森林', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270057', '荆棘谷', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270058', '悲伤的沼泽', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270059', '辛特兰', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270060', '提瑞斯法林地', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270061', '西部荒野', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('270062', '沼泽地', '');


-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('251000', '骑乘海龟	30000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('252000', '死亡军马的缰绳	15000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('253000', '迅捷祖利安猛虎(送骑术)	30000赞助点', '');
INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('254000', '拉扎什迅猛龙	25000赞助点', '');
-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('255000', '黑色战羊	10000赞助点', '');
-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('256000', '黑色军用座虎缰绳	10000赞助点', '');
-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('257000', '维维尔的飞行器	30000赞助点', '');
-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('258000', '幽灵狮鹫	50000赞助点', '');
-- INSERT INTO `broadcast_text` (`ID`, `MaleText`, `FemaleText`) VALUES ('259000', '冬幕节驯鹿	15000赞助点', '');

DELETE FROM `mangos_string` where `entry` > 200000;
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210001', '你没有足够的赞助点数，请前往官网进行充值。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210002', '你当前拥有赞助点数: %u 。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210004', '|cffff0000[系统]:|r 欢迎|cFF0070d0联盟|r玩家|cffffffff|Hplayer:%s|h[%s]|h|r加入游戏！');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210005', '|cffff0000[系统]:|r 欢迎|cFFF000A0部落|r玩家|cffffffff|Hplayer:%s|h[%s]|h|r加入游戏！');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210006', '|cffff0000[系统]:|r |cffffffff|Hplayer:%s|h[%s]|h|r还没有加入任何公会哦！');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210007', '恭喜你,业务办理成功!!。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210008', '|cffff0000[世界聊天]:|r|cffffffff|Hplayer:%s|h[%s]|h|r:%s');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210009', '金币余额不足。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210010', '世界频道广播已经发送,扣除费用10银币。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210011', '使用 .tf 命令来切换你的天赋。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210012', '.tf 命令需要你找LHWOW赞助商人来学习使用。');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('210014', '你已经赞助过该项目，无需重复赞助，感谢！');



INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('260013', '你已经学会了2个专业技能，不能再学习了！');
INSERT INTO `mangos_string` (`entry`, `content_default`) VALUES ('260014', '我们在虚空黑洞发现了一些东西，可能是你丢的！');
