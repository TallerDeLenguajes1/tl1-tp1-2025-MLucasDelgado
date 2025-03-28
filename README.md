# Tp-01
### ¿Qué es un archivo .gitignore?
El archivo _.gitignore_ es un archivo utilizado en proyectos de control de versiones con Git. Su función es decirle a Git qué archivos o directorios debe ignorar y no agregar al repositorio. Esto es útil para evitar que ciertos archivos, como archivos temporales, de configuración personal, o de compilación, se suban al repositorio.

### ¿Por qué es conveniente incluir un archivo .gitignore?

Incluir un archivo .gitignore en un repositorio es fundamental por varias razones:

- Evitar archivos innecesarios: Algunos archivos generados durante el proceso de desarrollo (por ejemplo, archivos de compilación, logs o configuraciones locales) no deben ser incluidos en el repositorio, ya que no son útiles para otros colaboradores y pueden ocupar espacio innecesario.

- Mejorar la eficiencia: Ignorar archivos temporales o grandes puede hacer que el repositorio sea más ligero y rápido para operar.

- Mantener la privacidad y seguridad: Algunos archivos, como credenciales o configuraciones locales, no deben ser compartidos en el repositorio público, y un archivo .gitignore ayuda a prevenir su inclusión accidental.

- Evitar conflictos: Si los archivos de configuración específicos de un entorno (como editor o IDE) se incluyen en el repositorio, podrían causar conflictos con otros colaboradores que no tienen la misma configuración. Ignorar estos archivos previene problemas.

### ¿Cuándo se debe hacer?

El archivo _.gitignore_ debe ser creado al inicio del proyecto o tan pronto como se comience a trabajar con Git. Es ideal configurar este archivo antes de realizar el primer commit para asegurarse de que no se suban archivos no deseados desde el principio. Sin embargo, si ya tienes un repositorio sin un _.gitignore_, puedes agregarlo en cualquier momento para evitar la inclusión de archivos innecesarios en commits futuros.

### ¿Cómo configuraría el archivo .gitignore?

La configuración del archivo _.gitignore_ depende del tipo de proyecto y de los archivos que deseas ignorar. El archivo _.gitignore_ contiene reglas que indican a Git qué archivos o directorios deben ser ignorados.

<hr>

### ¿Por qué la dirección de memoria almacenada por el puntero y la dirección de memoria de la variable son iguales?

En el programa, cuando asigno _p_num_ = _&num_;, lo que hago es almacenar en el puntero _p_num_ la dirección de memoria de la variable _num_. Por lo tanto, p_num apunta exactamente a la dirección donde está almacenado num. Como resultado, tanto la dirección de memoria almacenada por el puntero (p_num) como la dirección de memoria de la variable (&num) son iguales.

### Dirección de memoria del puntero

La "dirección de memoria del puntero" es la dirección donde está almacenado el puntero _p_num_ en la memoria. Es diferente de la dirección a la que apunta el puntero (la dirección de num). El puntero p_num tiene una dirección de memoria propia, y esta se puede obtener usando &p_num. 
La dirección de memoria del *puntero* no es igual a la dirección de memoria de la variable ni a la dirección almacenada por el puntero. Como mencioné antes, p_num tiene su propia dirección de memoria, que no tiene por qué coincidir con la dirección de la variable _num_ ni con la dirección de memoria almacenada en _p_num_. El puntero almacena la dirección de num, pero en sí mismo tiene una dirección de memoria distinta. 