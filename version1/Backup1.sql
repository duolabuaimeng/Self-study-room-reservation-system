-- MySQL dump 10.13  Distrib 5.5.30, for Win32 (x86)
--
-- Host: localhost    Database: library
-- ------------------------------------------------------
-- Server version	5.5.30

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `admin`
--

DROP TABLE IF EXISTS `admin`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `admin` (
  `admin_id` varchar(20) NOT NULL,
  `admin_password` varchar(20) NOT NULL,
  PRIMARY KEY (`admin_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `admin`
--

LOCK TABLES `admin` WRITE;
/*!40000 ALTER TABLE `admin` DISABLE KEYS */;
INSERT INTO `admin` VALUES ('1','1');
/*!40000 ALTER TABLE `admin` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `backuproad`
--

DROP TABLE IF EXISTS `backuproad`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `backuproad` (
  `road` varchar(50) NOT NULL,
  PRIMARY KEY (`road`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `backuproad`
--

LOCK TABLES `backuproad` WRITE;
/*!40000 ALTER TABLE `backuproad` DISABLE KEYS */;
INSERT INTO `backuproad` VALUES ('D:/');
/*!40000 ALTER TABLE `backuproad` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `book`
--

DROP TABLE IF EXISTS `book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `book` (
  `book_id` varchar(20) NOT NULL,
  `book_name` varchar(50) NOT NULL,
  `isbn` varchar(20) NOT NULL,
  `writer` varchar(20) NOT NULL,
  `price` double(10,2) NOT NULL,
  `publish` varchar(20) NOT NULL,
  `location` int(11) NOT NULL,
  `borrowed` int(11) NOT NULL,
  `info` varchar(50) NOT NULL,
  PRIMARY KEY (`book_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `book`
--

LOCK TABLES `book` WRITE;
/*!40000 ALTER TABLE `book` DISABLE KEYS */;
INSERT INTO `book` VALUES ('000001','Linux操作系统','978-7-310-05677-4','郭思延',59.00,'南开大学出版社',1,0,'系统而全面, 讲解Linux的基础知识、系统管理、服务器搭建'),('000002','Linux操作系统','978-7-310-05677-4','郭思延',59.00,'南开大学出版社',1,0,'系统而全面, 讲解Linux的基础知识、系统管理、服务器搭建'),('000003','Linux Shell核心编程指南','978-7-121-37571-2','丁明一',89.00,'电子工业出版社',1,0,'本书将围绕Linux系统中最常用的Shell脚本语言, 讲解如何通过Shell编写自动化、智能化脚本'),('000004','Linux Shell核心编程指南','978-7-121-37571-2','丁明一',89.00,'电子工业出版社',1,1,'本书将围绕Linux系统中最常用的Shell脚本语言, 讲解如何通过Shell编写自动化、智能化脚本'),('000005','面向自然语言处理的深度学习','978-7-111-61719-8','戈雅尔',69.00,'机械工业出版社',2,0,'面向自然语言处理的深度学习'),('000006','面向自然语言处理的深度学习','978-7-111-61719-8','戈雅尔',69.00,'机械工业出版社',2,0,'面向自然语言处理的深度学习'),('000007','Python机器学习手册','978-7-121-36962-9','阿尔本',89.00,'南开大学出版社',3,0,'采用基于任务的方式来介绍如何在机器学习中使用Python'),('000008','Python机器学习手册','978-7-121-36962-9','阿尔本',89.00,'南开大学出版社',3,0,'采用基于任务的方式来介绍如何在机器学习中使用Python'),('000009','托福综合写作高分范文','978-7-5159-1652-1','谢侃',39.80,'中国宇航出版社',4,0,'本书涵盖50道TPO综合写作题目, 对每道试题进行阅读和听力要点概括'),('000010','托福综合写作高分范文','978-7-5159-1652-1','谢侃',39.80,'中国宇航出版社',4,0,'本书涵盖50道TPO综合写作题目, 对每道试题进行阅读和听力要点概括'),('000011','1','1','11',1.00,'1',1,1,'1'),('000012','1','1','1',2.00,'3',1,0,'4'),('000013','1','1','1',2.00,'3',1,0,'4'),('000014','1','1','1',2.00,'3',1,0,'4'),('000015','1','1','1',2.00,'3',1,0,'4'),('000016','1','1','1',2.00,'3',1,0,'4'),('000017','1','1','1',1.00,'1',1,0,'1'),('000020','1','1','1',1.00,'1',2,0,'1'),('000021','我是一只猪','996-738-6933','薛某',20.00,'东北大学出版社',2,0,'薛某自传'),('000022','我是一只猪','996-738-6933','薛某',20.00,'东北大学出版社',2,0,'薛某自传'),('000023','我是一只猪','996-738-6933','薛某',20.00,'东北大学出版社',2,0,'薛某自传'),('000024','我是一只猪','996-738-6933','薛某',20.00,'东北大学出版社',2,0,'薛某自传'),('000031','1','3','4',2.00,'5',1,0,'6'),('000032','1','3','4',2.00,'5',1,0,'6'),('000033','1','3','4',2.00,'5',1,0,'6'),('000034','1','3','4',2.00,'5',1,0,'6'),('000035','1','3','4',2.00,'5',1,0,'6'),('000036','1','3','4',2.00,'5',1,0,'6'),('000037','1','3','4',2.00,'5',1,0,'6'),('000059','阿布巴卜','000-0000-00','Mi',2.00,'bnnnnn',3,0,'嘻嘻嘻嘻嘻'),('000060','阿布巴卜','000-0000-00','Mi',2.00,'bnnnnn',3,0,'嘻嘻嘻嘻嘻'),('000061','阿布巴卜','000-0000-00','Mi',2.00,'bnnnnn',3,0,'嘻嘻嘻嘻嘻'),('000062','阿布巴卜','000-0000-00','Mi',2.00,'bnnnnn',3,0,'嘻嘻嘻嘻嘻');
/*!40000 ALTER TABLE `book` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = '' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER T BEFORE INSERT ON book 
FOR EACH ROW BEGIN
SET new.book_id=LPAD(((SELECT SUBSTRING(book_id,1,6) FROM book WHERE book_id=(SELECT book_id FROM book ORDER BY book_id DESC LIMIT 1))+1),6,'0'); 
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `bookshelf`
--

DROP TABLE IF EXISTS `bookshelf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bookshelf` (
  `bookshelf` int(11) NOT NULL,
  `class` varchar(20) NOT NULL,
  PRIMARY KEY (`bookshelf`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bookshelf`
--

LOCK TABLES `bookshelf` WRITE;
/*!40000 ALTER TABLE `bookshelf` DISABLE KEYS */;
INSERT INTO `bookshelf` VALUES (1,'Linux'),(2,'深度学习'),(3,'机器学习'),(4,'英语');
/*!40000 ALTER TABLE `bookshelf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `borrowed`
--

DROP TABLE IF EXISTS `borrowed`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `borrowed` (
  `book_id` varchar(20) NOT NULL,
  `reader_id` varchar(20) NOT NULL,
  `borrow_times` datetime NOT NULL,
  `return_plan` datetime NOT NULL,
  `valid` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `borrowed`
--

LOCK TABLES `borrowed` WRITE;
/*!40000 ALTER TABLE `borrowed` DISABLE KEYS */;
INSERT INTO `borrowed` VALUES ('000004','hodor','2020-05-24 09:16:00','2020-06-23 09:16:00',1),('000011','1','2020-05-26 13:40:02','2020-06-25 13:40:02',1);
/*!40000 ALTER TABLE `borrowed` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `reader`
--

DROP TABLE IF EXISTS `reader`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `reader` (
  `reader_id` varchar(20) NOT NULL,
  `reader_password` varchar(20) NOT NULL,
  `reader_name` varchar(20) NOT NULL,
  `reader_sex` varchar(20) NOT NULL,
  `reader_grade` varchar(20) NOT NULL,
  `reader_telephone` varchar(20) NOT NULL,
  `reader_department` varchar(20) NOT NULL,
  `reader_have_borrowed` int(11) NOT NULL,
  `reader_left_borrowTimes` int(11) NOT NULL,
  `reader_left_renewTimes` int(11) NOT NULL,
  `reader_penalty` int(11) NOT NULL,
  PRIMARY KEY (`reader_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `reader`
--

LOCK TABLES `reader` WRITE;
/*!40000 ALTER TABLE `reader` DISABLE KEYS */;
INSERT INTO `reader` VALUES ('1','1','1','1','1','1','1',1,19,2,0),('hodor','1314521','薛涵硕','1','1','13941382171','1',1,19,2,0);
/*!40000 ALTER TABLE `reader` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `returned`
--

DROP TABLE IF EXISTS `returned`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `returned` (
  `book_id` varchar(20) NOT NULL,
  `reader_id` varchar(20) NOT NULL,
  `borrow_times` datetime NOT NULL,
  `return_plan` datetime NOT NULL,
  `return_real` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `returned`
--

LOCK TABLES `returned` WRITE;
/*!40000 ALTER TABLE `returned` DISABLE KEYS */;
/*!40000 ALTER TABLE `returned` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `schoolcard`
--

DROP TABLE IF EXISTS `schoolcard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `schoolcard` (
  `school_id` varchar(20) NOT NULL,
  `school_password` varchar(20) NOT NULL,
  `left_money` double(5,2) NOT NULL,
  `locked` int(11) NOT NULL,
  PRIMARY KEY (`school_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `schoolcard`
--

LOCK TABLES `schoolcard` WRITE;
/*!40000 ALTER TABLE `schoolcard` DISABLE KEYS */;
INSERT INTO `schoolcard` VALUES ('20194740','123456',100.00,0),('20195740','123456',100.00,0),('20196740','123456',100.00,0);
/*!40000 ALTER TABLE `schoolcard` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-27 21:00:28
