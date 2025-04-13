#include <iostream>
#include <string>
using namespace std;


void mostrarPalabraOculta(const string &palabraOculta);

void actualizarPalabraOculta(string &palabraOculta, string palabra, char letra, int &errores); 
    
void imprimirEstadoDelJuego(string letrasUsadas, int errores, int maxErrores);

int main() {
    
    string palabra = "PROGRAMACION";
     
    string palabraOculta = palabra;
    for (int i = 0; i < palabra.length(); i++) {
        palabraOculta[i] = '_';
    }   

    string letrasUsadas = "";
    int errores = 0;
    int maxErrores = 6;

    cout << "=== JUEGO DEL AHORCADO ===\n";

    while (errores < maxErrores && palabraOculta != palabra) {
        cout << "\nPalabra: ";
        
        mostrarPalabraOculta(palabraOculta);

        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

    
        bool yaUsada = false;
        for (int i = 0; i < letrasUsadas.length(); i++) {
            if (letra == letrasUsadas[i]) {
                yaUsada = true;
                break;
            }
        }
        if (yaUsada) {
            cout << "Ya usaste esa letra. Intenta otra.\n";
            continue;
        }

        letrasUsadas += letra;

        actualizarPalabraOculta(palabraOculta, palabra, letra, errores);
        
        imprimirEstadoDelJuego(letrasUsadas, errores, maxErrores);
    
    }
 
    if (palabraOculta == palabra) {
        cout << "\n¡Felicidades! Adivinaste la palabra: " << palabra;
    } else {
        cout << "\nPerdiste. La palabra era: " << palabra;
        cout << "Partes perdidas:\n";
        cout << "- " << "- Cabeza" << "\n";
        cout << "- " << "- Tronco" << "\n";
        cout << "- " << "- Brazo izquierdo" << "\n";
        cout << "- " << "- Brazo derecho" << "\n";
        cout << "- " << "- Pierna izquierda" << "\n";
        cout << "- " << "- Pierna derecha" << "\n";                     
    
}

    return 0;
}
void mostrarPalabraOculta(const string &palabraOculta) {
    for (int i = 0; i < palabraOculta.length(); i++) {
        cout << palabraOculta[i] << " ";
    }
    cout << "\n";
}

void actualizarPalabraOculta(string &palabraOculta, string palabra, char letra, int &errores) {
    bool acierto = false;
    for (int i = 0; i < palabra.length(); i++) {
        if (letra == palabra[i]) {
            palabraOculta[i] = letra;
            acierto = true;
        }
    }

    if (acierto) {
        cout << "¡Bien! Letra correcta.\n";
    } else {
        cout << "Letra incorrecta.\n";
        errores++;
    }
}

void imprimirEstadoDelJuego(string letrasUsadas, int errores, int maxErrores) {
    cout << "\nLetras usadas: " << letrasUsadas << "\n";
    cout << "Errores: " << errores << "/" << maxErrores << "\n";

    cout << "Intentos restantes:" << (maxErrores - errores) << "\n";
    cout << "Partes perdidas:\n";
    if (errores >= 1) cout << "- Cabeza\n";
    if (errores >= 2) cout << "- Tronco\n";
    if (errores >= 3) cout << "- Brazo izquierdo\n";
    if (errores >= 4) cout << "- Brazo derecho\n";
    if (errores >= 5) cout << "- Pierna izquierda\n";
    if (errores >= 6) cout << "- Pierna derecha\n";
}