#include <iostream>

using namespace std;

int main() {
    cout << "Bienvenidos al servicio de limpiza de Alvaro" << endl;
    cout << "Cuantas habitaciones pequeñas quieres limpiar?";
    
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "Cuantas habitaciones grandes quieres limpiar?";
    
    int number_of_big_rooms {0};
    cin >> number_of_big_rooms;
    
    const int small_room_price{25};
    const int large_room_price{35};
    const float tax {0.06};
    const int time_valid{30};
    
    float cost {0}; 
    cost = (number_of_small_rooms*small_room_price)+(number_of_big_rooms*large_room_price);
    
    cout << "\n Estimacion por el servicio:" << endl;
    cout << "Numero de habitaciones pequeñas: " << number_of_small_rooms << endl;
    cout << "Numero de habitaciones grandes: " << number_of_big_rooms << endl;
    cout << "Precio por habitacion pequeñas:$ " << small_room_price << endl;
    cout << "Precio por habitacion grande:$ " << large_room_price << endl;
    cout << "Coste: $" << cost << endl;
    cout << "Tax: $ " << cost*tax << endl;
    cout << "===============================================" << endl;
    cout << "Estimacion final: " << cost+(cost*tax) << endl;
    cout << "Esto es valido hasta por " << time_valid << " dias" << endl;
    
    return 0;
}
