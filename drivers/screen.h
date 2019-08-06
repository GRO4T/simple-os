#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLS 80
// Attribute byte for our default colour scheme .
#define WHITE_ON_BLACK 0x0f
// Screen device I / O ports
#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

void print_char ( char character , int col , int row , char attribute_byte );
void print_str ( char * str , int col , int row , char attribute_byte );
void clear_screen();
