SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for course
-- ----------------------------
DROP TABLE IF EXISTS `course`;
CREATE TABLE `course` (
  `id` int NOT NULL,
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `score` int DEFAULT NULL,
  `value` int DEFAULT '5',
  `tid` int DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- ----------------------------
-- Records of course
-- ----------------------------
INSERT INTO `course` VALUES ('1', 'English', '89', '5', '13');
INSERT INTO `course` VALUES ('2', 'gMath', '67', '5', '19');
INSERT INTO `course` VALUES ('3', 'gMath', '78', '5', '14');
INSERT INTO `course` VALUES ('4', 'gMath', '67', '5', '15');
INSERT INTO `course` VALUES ('5', 'gMath', '85', '5', '13');
INSERT INTO `course` VALUES ('6', 'gMath', '46', '5', '19');
INSERT INTO `course` VALUES ('7', 'gMath', '23', '5', '15');
INSERT INTO `course` VALUES ('8', 'gMath', '64', '5', '16');
INSERT INTO `course` VALUES ('9', 'gMath', '44', '5', '17');
INSERT INTO `course` VALUES ('10', 'gMath', '55', '5', '18');
INSERT INTO `course` VALUES ('11', 'gMath', '77', '5', '15');
INSERT INTO `course` VALUES ('12', 'gMath', '88', '5', '4');
INSERT INTO `course` VALUES ('13', 'gMath', '99', '5', '15');
INSERT INTO `course` VALUES ('14', 'gMath', '100', '5', '0');
INSERT INTO `course` VALUES ('15', 'gMath', '45', '5', '0');
INSERT INTO `course` VALUES ('16', 'gMath', '76', '5', '18');
INSERT INTO `course` VALUES ('17', 'gMath', '82', '5', '10');
INSERT INTO `course` VALUES ('18', 'gMath', '84', '5', '17');
INSERT INTO `course` VALUES ('19', 'gMath', '81', '5', '12');
INSERT INTO `course` VALUES ('20', 'gMath', '86', '5', '9');
