Project Introduction

Flight Ticket Management System 是一个简单的航班票务管理系统，用于模拟航空公司的航班管理和票务管理流程。

系统提供航班查询、订票、退票以及航班信息管理等功能，并通过 MySQL 数据库存储航班和订单数据，实现数据持久化。

该项目主要用于学习：

数据库建模与设计

SQL 查询与事务处理

C++ 与 MySQL 数据库连接

基础业务系统开发

Features

系统主要包含以下功能：

1 Flight Management

添加航班信息

删除航班

修改航班信息

查看航班列表

2 Flight Query

按航班号查询航班

按出发地 / 目的地查询航班

查看航班剩余座位

3 Ticket Management

航班订票

退票

查看订单信息

4 Database Management

使用 MySQL 存储航班与订单数据

使用 SQL 实现数据查询与更新

使用事务保证数据一致性

Tech Stack

Programming Language: C++

Database: MySQL

Database Access: MySQL Connector / C++

Version Control: Git / GitHub
How to Run
1 Clone Repository
git clone https://github.com/stringofname/flight.git
2 Create Database

在 MySQL 中创建数据库：

CREATE DATABASE flight_system;

导入数据库结构：

SOURCE database.sql;
3 Configure Database

在代码中修改数据库连接信息：

host = "localhost";
user = "root";
password = "yourpassword";
database = "flight_system";
4 Compile and Run

使用 g++ 编译：

g++ main.cpp -o flight_system

运行程序：

./flight_system
