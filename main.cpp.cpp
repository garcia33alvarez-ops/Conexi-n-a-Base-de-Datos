#include <iostream>
#include <mysql.h>

using namespace std;

int main() {

    // objeto de conexion
    MYSQL* conexion;
    conexion = mysql_init(NULL);

    // intentamos conectarnos
    if (mysql_real_connect(conexion, "localhost", "root", "TU_CONTRASEÑA", "mi_prueba", 3306, NULL, 0) == NULL) {
        cout << "Error al conectar: " << mysql_error(conexion) << endl;
        return 1;
    }

    cout << "Conexion exitosa a MySQL!" << endl;

    // hacemos la consulta
    string consulta = "SELECT * FROM personas";

    if (mysql_query(conexion, consulta.c_str()) != 0) {
        cout << "Error en la consulta: " << mysql_error(conexion) << endl;
        return 1;
    }

    // guardamos y mostramos los resultados
    MYSQL_RES* resultado = mysql_store_result(conexion);
    MYSQL_ROW fila;

    cout << "\nPersonas en la base de datos:" << endl;

    while ((fila = mysql_fetch_row(resultado)) != NULL) {
        cout << "ID: " << fila[0] << " | Nombre: " << fila[1] << " | Edad: " << fila[2] << endl;
    }

    // cerramos todo
    mysql_free_result(resultado);
    mysql_close(conexion);

    return 0;
}