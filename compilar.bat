[22:38, 27/5/2025] Martin: ${workspaceFolder}/INTERFACE
[23:25, 27/5/2025] Martin: @echo off
echo Compilando sistema bancario...

g++ -std=c++17 -IUSERS -ILOGIN -IOPERATIONS -IINTERFACE main.cpp LOGIN\login.cpp USERS\gestionUsuarios.cpp OPERATIONS\operaciones.cpp OPERATIONS\prestamos.cpp OPERATIONS\cerrarSesion.cpp INTERFACE\interfaz.cpp INTERFACE\comprobadorOpcion.cpp INTERFACE\mensajeError.cpp -o BIN\bancario.exe


if %errorlevel% neq 0 (
    echo Error en la compilacion.
) else (
    echo Compilacion exitosa. Ejecutando...
    echo.
    
    BIN\bancario.exe
)

pause