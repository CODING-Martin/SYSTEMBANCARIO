[22:38, 27/5/2025] Martin: ${workspaceFolder}/INTERFACE
[23:25, 27/5/2025] Martin: @echo off
echo Compilando sistema bancario...

g++ -IUSERS main.cpp LOGIN\login.cpp USERS\gestionUsuarios.cpp OPERATIONS\operaciones.cpp INTERFACE\interfaz.cpp -o BIN\bancario.exe

if %errorlevel% neq 0 (
    echo Error en la compilacion.
) else (
    echo Compilacion exitosa. Ejecutando...
    
    BIN\bancario.exe
)


pause