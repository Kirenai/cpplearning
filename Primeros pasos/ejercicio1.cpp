#include <iostream>
using namespace std;

int main() {
    int metrosCalidadMedia{0};
    int metrosCalidadAlta{0};

    const double PRECIO_CALIDAD_MEDIA{35.5};
    const double PRECIO_CALIDAD_ALTA{55.3};
    const double IVA{0.25};
    const int EXPIRA_PRESUPUESTO{30};

    cout << "Ingrese el numero en metros de calidad media:" << endl;
    cin >> metrosCalidadMedia;

    double precioSinIva = PRECIO_CALIDAD_MEDIA * metrosCalidadMedia;
    double precioTotal = precioSinIva + (precioSinIva * IVA);

    cout << "El precio total para calidad media es: " << precioTotal << endl;

    cout << "Ingrese el numero en metros de calidad alta:" << endl;
    cin >> metrosCalidadAlta;

    precioSinIva = PRECIO_CALIDAD_ALTA * metrosCalidadAlta;
    precioTotal = precioSinIva + (precioSinIva * IVA);

    cout << "El precio total para calidad media es: " << precioTotal << endl;

    cout << "Presupuesto valido durante: " << EXPIRA_PRESUPUESTO << " dias." endl;

}