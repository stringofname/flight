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

 Date: 05/01/2025 23:13:19
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for flightinformation
-- ----------------------------
DROP TABLE IF EXISTS `flightinformation`;
CREATE TABLE `flightinformation`  (
  `flightNumber` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `time` varchar(5) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `arrivalTime` varchar(5) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `economyPrice` decimal(10, 2) NULL DEFAULT NULL,
  `firstPrice` decimal(10, 2) NULL DEFAULT NULL,
  `businessPrice` decimal(10, 2) NULL DEFAULT NULL,
  `economyNum` int(11) NULL DEFAULT NULL,
  `firstNum` int(11) NULL DEFAULT NULL,
  `businessNum` int(11) NULL DEFAULT NULL,
  `takeoffCity` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `arrivalCity` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `flightDate` date NULL DEFAULT NULL,
  PRIMARY KEY (`flightNumber`, `time`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of flightinformation
-- ----------------------------
INSERT INTO `flightinformation` VALUES ('GH019', '5：30', '9：40', 1000.00, 500.00, 400.00, 10, 50, 100, '北京', '三亚', '2025-01-05');
INSERT INTO `flightinformation` VALUES ('MR308', '5：00', '6：00', 300.00, 600.00, 900.00, 10, 10, 10, '北京', '西安', '2025-01-05');
INSERT INTO `flightinformation` VALUES ('MZ102', '08：35', '10：40', 50.00, 30.00, 10.00, 500, 800, 1900, '北京', '上海', '2025-01-05');

SET FOREIGN_KEY_CHECKS = 1;
