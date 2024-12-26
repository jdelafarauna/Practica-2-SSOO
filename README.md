# Práctica 2: Programación con Threads

![Language](https://img.shields.io/badge/language-C-blue)  
![Status](https://img.shields.io/badge/status-in%20progress-orange)

## Tabla de Contenidos

- [Descripción](#descripción)
- [Características Principales](#características-principales)
- [Requisitos](#requisitos)
- [Configuración Inicial](#configuración-inicial)
- [Ejecución](#ejecución)
- [Ejemplo de Salida](#ejemplo-de-salida)
- [Estadísticas Finales](#estadísticas-finales)
- [Normas de Estilo](#normas-de-estilo)
- [Autores](#autores)

---

## Descripción

Este proyecto implementa un sistema que simula una campaña de vacunación contra una pandemia en un país pequeño. Utilizando **threads**, el programa gestiona:
- La fabricación de vacunas por parte de tres fábricas.
- El reparto de estas vacunas a cinco centros de vacunación.
- La vacunación de todos los habitantes en tandas organizadas.

Se asegura la sincronización correcta entre procesos y se evita la inanición y los interbloqueos.

---

## Características Principales

- **Simulación de Vacunación**:
  - Gestión de habitantes que eligen centros para vacunarse.
  - Manejo de tandas organizadas para evitar sobrecarga.

- **Fabricación y Reparto de Vacunas**:
  - Producción aleatoria por tandas y distribución eficiente basada en demanda.

- **Gestión de Threads**:
  - Implementación eficiente utilizando la biblioteca `pthread`.

---

## Requisitos

### Entrada

El programa toma como entrada un fichero de configuración con los siguientes datos:
1. Número total de habitantes.
2. Vacunas iniciales por centro.
3. Número mínimo y máximo de vacunas producidas por tanda.
4. Tiempos mínimos y máximos para fabricación y reparto.
5. Tiempos máximos para la reacción de los habitantes y su desplazamiento al centro.

Ejemplo de entrada:
```
1200
15
25
50
20
40
3
4
2
```

### Salida

El programa genera un archivo con:
- Configuración inicial del sistema.
- Registro del proceso de vacunación.
- Estadísticas finales de vacunación y distribución.

---

## Configuración Inicial

1. **Clona el repositorio**:
   ```bash
   git clone https://github.com/tu_usuario/nombre_repositorio.git
   cd nombre_repositorio
   ```

2. **Compila el programa**:
   ```bash
   gcc -pthread -o vacunacion vacunacion.c
   ```

3. **Ejecuta el programa**:
   ```bash
   ./vacunacion [fichero_entrada] [fichero_salida]
   ```

   - Si no se especifican archivos:
     - Fichero de entrada por defecto: `entrada_vacunacion.txt`
     - Fichero de salida por defecto: `salida_vacunacion.txt`

---

## Ejemplo de Salida

```plaintext
VACUNACIÓN EN PANDEMIA: CONFIGURACIÓN INICIAL
Habitantes: 1200
Centros de vacunación: 5
Fábricas: 3
Vacunados por tanda: 120
Vacunas iniciales en cada centro: 15
...

PROCESO DE VACUNACIÓN
Habitante 1 elige el centro 1 para vacunarse
...
Habitante 1150 vacunado en el centro 1
Fábrica 1 prepara 31 vacunas
...

ESTADÍSTICAS FINALES
Centro 1: 300 vacunados, 20 vacunas sobrantes
...
```

---

## Estadísticas Finales

- **Por Fábrica**:
  - Número total de vacunas fabricadas.
  - Distribución a cada centro.

- **Por Centro**:
  - Número de vacunas recibidas.
  - Total de habitantes vacunados.
  - Vacunas sobrantes.

---

## Normas de Estilo

- Código limpio y comentado.
- Gestión eficiente de recursos (memoria y threads).
- Sin *warnings* durante la compilación.

---

## Autores

- [Nombre del Autor 1](https://github.com/autor1)
- [Nombre del Autor 2](https://github.com/autor2) *(si aplica)*

---

### Notas Adicionales

- Este proyecto es parte de la asignatura **Sistemas Operativos** del **Grado en Ingeniería Informática**.
- Se evaluará tanto el código como una memoria técnica.

