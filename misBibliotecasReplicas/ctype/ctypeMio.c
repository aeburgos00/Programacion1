#include "ctypeMio.h"

int tolower_mio(int ch){
    return ((ch>='A' && ch<='Z')?ch+' ':ch);
}

int toupper_mio(int ch){
    return ((ch>='a'&&ch<='z')?ch-' ': ch);
}
