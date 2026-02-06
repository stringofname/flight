/*
 Navicat Premium Data Transfer

 Source Server         : student
 Source Server Type    : MySQL
 Source Server Version : 50723
 Source Host           : localhost:3306
 Source Schema         : flight

 Target Server Type    : MySQL
 Target Server Version : 50723
 File Encoding         : 65001

 Date: 05/01/2025 23:13:26
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for purchased_tickets
-- ----------------------------
DROP TABLE IF EXISTS `purchased_tickets`;
CREATE TABLE `purchased_tickets`  (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `flightNumber` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `flightDate` date NOT NULL,
  `departTime` varchar(5) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `arrivalTime` varchar(5) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `economyPrice` decimal(10, 2) NULL DEFAULT NULL,
  `firstPrice` decimal(10, 2) NULL DEFAULT NULL,
  `businessPrice` decimal(10, 2) NULL DEFAULT NULL,
  `seatClass` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `takeoffCity` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `arrivalCity` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `passengerName` varchar(100) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `passengerIdCard` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 4 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of purchased_tickets
-- ----------------------------
INSERT INTO `purchased_tickets` VALUES (3, 'MR308', '2025-01-05', '5：00', '6：00', NULL, NULL, NULL, '商务舱', '北京', '西安', '张三', '1000');

SET FOREIGN_KEY_CHECKS = 1;
