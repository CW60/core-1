/*
 Navicat Premium Data Transfer

 Source Server         : 15
 Source Server Type    : MySQL
 Source Server Version : 50560
 Source Host           : 10.255.255.15:3306
 Source Schema         : 60_02characters

 Target Server Type    : MySQL
 Target Server Version : 50560
 File Encoding         : 65001

 Date: 14/04/2019 19:15:39
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for character_donation
-- ----------------------------
DROP TABLE IF EXISTS `character_donation`;
CREATE TABLE `character_donation`  (
  `guid` int(20) UNSIGNED NOT NULL DEFAULT 0,
  `type` int(20) NOT NULL DEFAULT 0,
  `value` int(20) UNSIGNED NOT NULL DEFAULT 0,
  `flags` int(20) UNSIGNED NOT NULL DEFAULT 0,
  PRIMARY KEY (`guid`, `type`) USING BTREE
) ENGINE = MyISAM CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Fixed;

SET FOREIGN_KEY_CHECKS = 1;
