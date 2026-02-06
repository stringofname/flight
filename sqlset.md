# SQL操作(flight数据库的内容）

create database if not exists flight;

use flight;

CREATE TABLE admin (
    id INT(11) NOT NULL AUTO_INCREMENT,      -- 用户ID，自动递增
    account VARCHAR(100) DEFAULT NULL,       -- 用户账号
    password VARCHAR(50) DEFAULT NULL,       -- 用户密码
    id_card VARCHAR(20) DEFAULT NULL,        -- 用户身份证号
    name VARCHAR(100) DEFAULT NULL,          -- 用户姓名
    phone VARCHAR(20) NOT NULL,              -- 用户电话，不可为空
    PRIMARY KEY (id)                         -- 主键为ID
);

CREATE TABLE admin_info (
    id INT(11) NOT NULL AUTO_INCREMENT,      -- 管理员信息ID，自动递增
    account VARCHAR(100) NOT NULL UNIQUE,    -- 管理员账号，唯一且不可为空
    password VARCHAR(100) NOT NULL,          -- 管理员密码，不可为空
    name VARCHAR(100) NOT NULL,              -- 管理员姓名，不可为空
    employee_number VARCHAR(50) NOT NULL,    -- 员工编号，不可为空
    PRIMARY KEY (id)                         -- 主键为ID
);

CREATE TABLE flightinformation (
    flightNumber VARCHAR(10) NOT NULL,       -- 航班号，主键的一部分
    time VARCHAR(5) NOT NULL,                -- 起飞时间，主键的一部分
    arrivalTime VARCHAR(5) DEFAULT NULL,     -- 到达时间
    economyPrice DECIMAL(10,2) DEFAULT NULL, -- 经济舱价格
    firstPrice DECIMAL(10,2) DEFAULT NULL,   -- 头等舱价格
    businessPrice DECIMAL(10,2) DEFAULT NULL, -- 商务舱价格
    economyNum INT(11) DEFAULT NULL,         -- 经济舱座位数
    firstNum INT(11) DEFAULT NULL,           -- 头等舱座位数
    businessNum INT(11) DEFAULT NULL,        -- 商务舱座位数
    takeoffCity VARCHAR(50) DEFAULT NULL,    -- 起飞城市
    arrivalCity VARCHAR(50) DEFAULT NULL,    -- 到达城市
    flightDate DATE DEFAULT NULL,            -- 航班日期
    PRIMARY KEY (flightNumber, time)         -- 主键由航班号和起飞时间共同组成
);
 
CREATE TABLE purchased_tickets (
    id INT(11) NOT NULL AUTO_INCREMENT,      -- 票务ID，自动递增
    flightNumber VARCHAR(10) NOT NULL,       -- 航班号，关联航班信息表
    flightDate DATE NOT NULL,                -- 航班日期
    departTime VARCHAR(5) DEFAULT NULL,      -- 起飞时间
    arrivalTime VARCHAR(5) DEFAULT NULL,     -- 到达时间
    economyPrice DECIMAL(10,2) DEFAULT NULL, -- 经济舱票价
    firstPrice DECIMAL(10,2) DEFAULT NULL,   -- 头等舱票价
    businessPrice DECIMAL(10,2) DEFAULT NULL, -- 商务舱票价
    seatClass VARCHAR(20) DEFAULT NULL,      -- 座位等级（经济舱、头等舱、商务舱等）
    takeoffCity VARCHAR(50) DEFAULT NULL,    -- 起飞城市
    arrivalCity VARCHAR(50) DEFAULT NULL,    -- 到达城市
    passengerName VARCHAR(100) DEFAULT NULL, -- 乘客姓名
    passengerIdCard VARCHAR(20) DEFAULT NULL, -- 乘客身份证号码
    PRIMARY KEY (id)                         -- 主键为ID
);



