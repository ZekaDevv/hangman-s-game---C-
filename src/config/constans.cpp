#ifndef CONSTANS_H_INCLUDE
#define CONSTANS_H_INCLUDE

#include <string>
#include <vector>

const std::string REG_EX_NEW_GAME = "^[1-2]$";
const std::string REG_EX_DIFFICULTY = "^[1-3]$";
const std::string REG_EX_WORD_INPUT = "^[a-zA-Z]$";

const std::vector<std::string> WORDS_EASY = {
    "agua", "alma", "alto", "amar", "andar", "aire", "ancho", "ardor", "ave", "aula",
    "azul", "bajo", "barco", "boca", "bola", "bota", "brazo", "bueno", "cabra", "calor",
    "cama", "cana", "casa", "cielo", "cima", "cine", "codo", "cola", "copa", "cruz",
    "dato", "deja", "dedo", "deseo", "diez", "duro", "eco", "edad", "ella", "ente",
    "euro", "fama", "fase", "fiar", "foco", "flor", "fuego", "gala", "gato", "golpe",
    "gota", "gris", "guia", "hacha", "hada", "hilo", "hoja", "humo", "idea", "igual",
    "isla", "juego", "juez", "jugo", "justo", "lago", "lata", "lazo", "leal", "libro",
    "liso", "loco", "loma", "luna", "mano", "masa", "mesa", "meta", "miel", "mito",
    "nave", "nido", "norte", "nube", "nuez", "obra", "ocio", "olor", "oro", "oso",
    "palo", "papa", "pato", "pena", "peso", "pico", "piso", "plata", "pobre", "punto"
};

const std::vector<std::string> WORDS_NORMAL = {
    "abejas", "abrigo", "aceite", "acento", "actriz", "adivina", "alegre", "alegato", "amantes", "amarillo",
    "amigos", "anuncio", "aprender", "animalito", "asiento", "aspirar", "aviones", "barroco", "banquete", "bebidas",
    "bendito", "bicicleta", "bocinas", "bonitas", "botella", "caballo", "caminata", "caminar", "campista", "camping",
    "cansado", "capitan", "caricia", "carnada", "castigo", "cazador", "celular", "cerrado", "chile", "telefono",
    "cobarde", "cocinar", "colores", "comedia", "compra", "conocer", "coronado", "corona", "costura", "cultura",
    "deseado", "desfile", "destino", "difundir", "camiseta", "doblaje", "dominio", "educado", "eficaz", "ejemplo",
    "encanto", "enfermo", "esfuerzo", "espacio", "espejos", "espinas", "estadio", "estimar", "excusas", "famosas",
    "felices", "felinos", "fideos", "figuras", "firmeza", "flautas", "fondos", "formato", "fragata", "franqueo",
    "ganador", "gatillo", "cartera", "globos", "grandes", "grupo", "hablado", "hermosa", "hogares", "humilde",
    "imitar", "infante", "insecto", "invitar", "jardinero", "jugador", "labores", "lagarto", "lenguas", "limones"
};

const std::vector<std::string> WORDS_HARD = {
    "aeropuerto", "alucinantes", "apasionante", "arrepentido", "bicampeones", "biodiverso", "calculadora", "capacitador", "carretera", "habilidoso",
    "colisionado", "comunicarse", "conquistado", "constituyen", "contaminado", "colaboracion", "cooperativo", "declaracion", "descubrimos", "desobedecer",
    "despliegues", "desprolijos", "documentales", "electrolito", "electricidad", "enfrentados", "entusiasta", "equivalente", "escandaloso", "escritorios",
    "espectaculo", "estadisticas", "estudiantes", "extraordinario", "felicidades", "ferreterias", "fotografia", "frustracion", "funcionando", "generadores",
    "hospedarlos", "identificar", "iluminacion", "importancia", "improvisado", "incomprensible", "incorporado", "indestructo", "indiferente", "inexistente",
    "influencias", "ingenieros", "injusticias", "inmortalidad", "instalacion", "interactivo", "intolerable", "inundaciones", "investigador", "jurisprudencia",
    "laboratorios", "lamentacion", "legendario", "localidades", "magnifico", "malentendido", "maravilloso", "materializar", "matriculado", "mensajerismo",
    "meticulosidad", "modificaciones", "monumentales", "motivaciones", "multiplicado", "narraciones", "naturalmente", "navegaciones", "necesidades", "negociacion",
    "observadores", "obstaculizar", "ordenamiento", "organizador", "organizacion", "participante", "pensamientos", "perfeccionado", "periodismo", "personalizar",
    "planificaciones", "popularidad", "preparativos", "preservacion", "presupuestos", "profundidad", "programador", "prolongados", "proporcionar", "propuestas"
};

const std::vector<std::string> DOLL_FIGURE_ARR = {
      R"(
  _____
  |    
  |
  |
  |
  |______
        )",
      R"(
  _____
  |   |
  |
  |
  |
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |
  |
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |   |
  |
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |  /|
  |
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |  /|\
  |
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |  /|\
  |  /
  |______
        )",
      R"(
  _____
  |   |
  |   O
  |  /|\
  |  / \
  |______
        )"};

#endif
