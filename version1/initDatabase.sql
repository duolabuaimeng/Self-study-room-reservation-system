DROP DATABASE IF EXISTS library;
CREATE DATABASE IF NOT EXISTS library CHARACTER SET 'utf8';

USE library;
CREATE TABLE admin(
	admin_id VARCHAR(20) PRIMARY KEY,
	admin_password VARCHAR(20) NOT NULL
);
INSERT INTO admin
VALUES('admin','admin'),('1','1');

CREATE TABLE backuproad(
	road VARCHAR(50) PRIMARY KEY
);
INSERT INTO backuproad
VALUES('D:/');

CREATE TABLE reader(
	reader_id VARCHAR(20) PRIMARY KEY,
	reader_password VARCHAR(20) NOT NULL,
	reader_name VARCHAR(20) NOT NULL,
	reader_sex VARCHAR(20) NOT NULL,
	reader_grade VARCHAR(20) NOT NULL,
	reader_telephone VARCHAR(20) NOT NULL,
	reader_department VARCHAR(20) NOT NULL,
	reader_have_borrowed INT NOT NULL,
	reader_left_borrowTimes INT NOT NULL,
	reader_left_renewTimes INT NOT NULL,
	reader_penalty INT NOT NULL,
	reader_question VARCHAR(20) NOT NULL,
	reader_answer VARCHAR(20) NOT NULL	
);
INSERT INTO reader
VALUES('hodor','1314521','薛涵硕','1','1','13941382171','1',0,20,2,0,'淡黄的长裙','蓬松的头发'),
('john','1314521','约翰','1','1','13941382171','1',0,20,2,1,'淡黄的长裙','蓬松的头发');

CREATE TABLE returned(
	book_id VARCHAR(20) NOT NULL,#书号
	reader_id VARCHAR(20) NOT NULL,#id号
	borrow_times DATETIME NOT NULL,#借书时间
	return_plan DATETIME NOT NULL,#应还时间
	return_real DATETIME NOT NULL#实际还书时间	
);

CREATE TABLE borrowed(
	book_id VARCHAR(20) NOT NULL,#书号
	reader_id VARCHAR(20) NOT NULL,#id号
	borrow_times DATETIME NOT NULL,#借书时间
	return_plan DATETIME NOT NULL,#应还时间
	valid INT NOT NULL#是否有效
);

CREATE TABLE bookshelf(
	bookshelf INT PRIMARY KEY,#书架号
	class VARCHAR(20) NOT NULL#类别
);
INSERT INTO bookshelf VALUES
(1,'Linux'),
(2,'深度学习'),
(3,'机器学习'),
(4,'英语');

CREATE TABLE schoolcard(
	school_id VARCHAR(20) PRIMARY KEY,#校园id号
	school_password VARCHAR(20) NOT NULL,#校园id密码
	left_money DOUBLE(5,2) NOT NULL,#类别
	locked INT NOT NULL#是否被锁
);
INSERT INTO schoolcard VALUES
('20194740','123456',100.00,0),
('20195740','123456',100.00,0),
('20196740','123456',100.00,0);

CREATE TABLE book(
	book_id VARCHAR(20)PRIMARY KEY,#书号
	book_name VARCHAR(50) NOT NULL,#书名
	isbn VARCHAR(20) NOT NULL,#isbn号
	writer VARCHAR(20) NOT NULL,#作者
	price DOUBLE(10,2) NOT NULL,#价格
	publish VARCHAR(20) NOT NULL,#出版社
	location INT NOT NULL,#存放书架号
	borrowed INT NOT NULL,#被借
	info VARCHAR(50) NOT NULL#摘要	
);
INSERT INTO book VALUES
('000001','Linux操作系统','978-7-310-05677-4','郭思延','59.00','南开大学出版社',1,0,'系统而全面, 讲解Linux的基础知识、系统管理、服务器搭建');

DELIMITER $$
USE `library`$$

DROP TRIGGER /*!50032 IF EXISTS */ `T`$$

CREATE
    /*!50017 DEFINER = 'root'@'%' */
    TRIGGER `T` BEFORE INSERT ON `book` 
    FOR EACH ROW BEGIN
SET new.book_id=LPAD(((SELECT SUBSTRING(book_id,1,6) FROM book WHERE book_id=(SELECT book_id FROM book ORDER BY book_id DESC LIMIT 1))+1),6,'0'); 
END;
$$
DELIMITER ;

INSERT INTO book VALUES
(0,'Linux操作系统','978-7-310-05677-4','郭思延','59.00','南开大学出版社',1,0,'系统而全面, 讲解Linux的基础知识、系统管理、服务器搭建'),
(0,'Linux Shell核心编程指南','978-7-121-37571-2','丁明一','89.00','电子工业出版社',1,0,'本书将围绕Linux系统中最常用的Shell脚本语言, 讲解如何通过Shell编写自动化、智能化脚本'),
(0,'Linux Shell核心编程指南','978-7-121-37571-2','丁明一','89.00','电子工业出版社',1,0,'本书将围绕Linux系统中最常用的Shell脚本语言, 讲解如何通过Shell编写自动化、智能化脚本'),
(0,'面向自然语言处理的深度学习','978-7-111-61719-8','戈雅尔','69.00','机械工业出版社',2,0,'面向自然语言处理的深度学习'),
(0,'面向自然语言处理的深度学习','978-7-111-61719-8','戈雅尔','69.00','机械工业出版社',2,0,'面向自然语言处理的深度学习'),
(0,'Python机器学习手册','978-7-121-36962-9','阿尔本','89.00','南开大学出版社',3,0,'采用基于任务的方式来介绍如何在机器学习中使用Python'),
(0,'Python机器学习手册','978-7-121-36962-9','阿尔本','89.00','南开大学出版社',3,0,'采用基于任务的方式来介绍如何在机器学习中使用Python'),
(0,'托福综合写作高分范文','978-7-5159-1652-1','谢侃','39.80','中国宇航出版社',4,0,'本书涵盖50道TPO综合写作题目, 对每道试题进行阅读和听力要点概括'),
(0,'托福综合写作高分范文','978-7-5159-1652-1','谢侃','39.80','中国宇航出版社',4,0,'本书涵盖50道TPO综合写作题目, 对每道试题进行阅读和听力要点概括');