/*Criação da base de bados*/
DROP DATABASE IF EXISTS hotel_database;
CREATE DATABASE hotel_database;
USE hotel_database;

/*--------------------------------------------*/

/*Criação das tabelas*/
CREATE TABLE Staff (
  Staff_id INT PRIMARY KEY AUTO_INCREMENT,
  Name VARCHAR(128) NOT NULL,
  Hotel INT NOT NULL,
  Email VARCHAR(128)
);

CREATE TABLE Hotel (
  Hotel_id INT PRIMARY KEY AUTO_INCREMENT,
  Name VARCHAR(128) NOT NULL,
  Admin INT NOT NULL,
  Email VARCHAR(128),
  Street VARCHAR(128) NOT NULL,
  Floor INT,
  City VARCHAR(128) NOT NULL
);

CREATE TABLE Room (
  Room_num INT PRIMARY KEY AUTO_INCREMENT,
  Price INT NOT NULL,
  Type VARCHAR(20),
  Hotel INT NOT NULL,
  StartDate DATE,
  EndDate DATE,
  FOREIGN KEY (Hotel) REFERENCES Hotel(Hotel_id)
);

CREATE TABLE Costumer (
  Username VARCHAR(20) PRIMARY KEY,
  Name VARCHAR(128) NOT NULL,
  Birth_date DATE NOT NULL,
  Email VARCHAR(128),
  Street VARCHAR(128) NOT NULL,
  Floor INT,
  City VARCHAR(128) NOT NULL,
  Room INT UNIQUE NOT NULL
);

CREATE TABLE Evaluates (
  Hotel INT,
  User VARCHAR(20) NOT NULL,
  Evaluation INT,
  FOREIGN KEY (Hotel) REFERENCES Hotel(Hotel_id),
  FOREIGN KEY (User) REFERENCES Costumer(Username)
);

CREATE TABLE Cleaning_Service (
  RoomNum INT NOT NULL,
  Staff_id INT NOT NULL,
  FOREIGN KEY (RoomNum) REFERENCES Room(Room_num),
  FOREIGN KEY (Staff_id) REFERENCES Staff(Staff_id)
);

CREATE TABLE Phone_Num_H (
  Id INT,
  Num INT UNIQUE,
  FOREIGN KEY (Id) REFERENCES Hotel(Hotel_id)
);

CREATE TABLE Phone_Num_S (
  Id INT,
  Num INT UNIQUE,
  FOREIGN KEY (Id) REFERENCES Staff(Staff_id)
);

CREATE TABLE Phone_Num_C (
  Id VARCHAR(20),
  Num INT UNIQUE,
  FOREIGN KEY (Id) REFERENCES Costumer(Username)
);

/*--------------------------------------------*/

/*Definição de algumas chaves externas e introdução dos primeiros dados*/

ALTER TABLE Staff
  ADD FOREIGN KEY (Hotel) REFERENCES Hotel(Hotel_id);

INSERT INTO Hotel (Name, Admin, Email, Street, City) VALUES ('SeaHotel', 1, 'seahotel@gmail.com', 'rua da praia', 'Algarve');

INSERT INTO Staff(Name, Hotel, Email) VALUES ('Sofia', 1, 'sofia@gmail.com');
INSERT INTO Staff(Name, Hotel) VALUES ('Joao', 1);

ALTER TABLE Hotel
  ADD FOREIGN KEY (Admin) REFERENCES Staff(Staff_id);

/*--------------------------------------------*/

INSERT INTO Room(Price, Type, Hotel) VALUES (35, 'suite', 1);
INSERT INTO Room(Price, Type, Hotel) VALUES (35, 'suite', 1);
INSERT INTO Room(Price, Type, Hotel, StartDate, EndDate) VALUES (35, 'suite', 1, '2021-05-23', '2021-06-04');
INSERT INTO Costumer(Username, Name, Birth_date, Street, Floor, City, Room) VALUES ('firstcostumer', 'Luis', '1995-02-03', 'rua do monte', 2, 'Gaia', 3);
INSERT INTO Room(Price, Type, Hotel, StartDate, EndDate) VALUES (20, 'normal', 1, '2021-08-12', '2021-08-30');
INSERT INTO Costumer(Username, Name, Birth_date, Street, City, Room) VALUES ('saraalves', 'Sara', '2000-07-15', 'rua dos aliados', 'Porto', 4);
INSERT INTO Room(Price, Type, Hotel) VALUES (20, 'normal', 1);
INSERT INTO Room(Price, Type, Hotel, StartDate, EndDate) VALUES (20, 'normal', 1, '2021-09-14', '2021-11-23');
INSERT INTO Costumer(Username, Name, Birth_date, Street, City, Room) VALUES ('123vitor', 'Vitor', '1987-06-16', 'rua do rio', 'Guimarães', 6);

INSERT INTO Cleaning_Service(RoomNum, Staff_id) VALUES (1, 1);
INSERT INTO Cleaning_Service(RoomNum, Staff_id) VALUES (1, 2);
INSERT INTO Cleaning_Service(RoomNum, Staff_id) VALUES (4, 1);
INSERT INTO Cleaning_Service(RoomNum, Staff_id) VALUES (3, 2);

INSERT INTO Evaluates(Hotel, User, Evaluation) VALUES (1, 'firstcostumer', 8);
INSERT INTO Evaluates(Hotel, User, Evaluation) VALUES (1, 'saraalves', 9);
INSERT INTO Evaluates(Hotel, User) VALUES (1, '123vitor');

INSERT INTO Phone_Num_H(Id, Num) VALUES (1, '545413131');
INSERT INTO Phone_Num_S(Id, Num) VALUES (1, '132132651');
INSERT INTO Phone_Num_S(Id, Num) VALUES (1, '687654354');
INSERT INTO Phone_Num_S(Id, Num) VALUES (2, '645245655');
INSERT INTO Phone_Num_C(Id, Num) VALUES ('firstcostumer', '651548313');
INSERT INTO Phone_Num_C(Id, Num) VALUES ('saraalves', '987631354');
INSERT INTO Phone_Num_C(Id, Num) VALUES ('saraalves', '878645341');
INSERT INTO Phone_Num_C(Id, Num) VALUES ('123vitor', '875313354');

SELECT * FROM Hotel;
SELECT * FROM Staff;
SELECT * FROM Room;
SELECT * FROM Costumer;
SELECT * FROM Cleaning_Service;
SELECT * FROM Evaluates;
SELECT * FROM Phone_Num_H;
SELECT * FROM Phone_Num_S;
SELECT * FROM Phone_Num_C;

show tables;
