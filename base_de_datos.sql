CREATE DATABASE mi_prueba;
USE mi_prueba;

CREATE TABLE personas (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(100),
    edad INT
);

INSERT INTO personas (nombre, edad) VALUES ("Juan", 25);
INSERT INTO personas (nombre, edad) VALUES ("Maria", 22);
INSERT INTO personas (nombre, edad) VALUES ("Carlos", 30);
INSERT INTO personas (nombre, edad) VALUES ("Ana", 19);
INSERT INTO personas (nombre, edad) VALUES ("Luis", 27);
INSERT INTO personas (nombre, edad) VALUES ("Sofia", 24);
INSERT INTO personas (nombre, edad) VALUES ("Pedro", 31);