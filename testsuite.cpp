#include <head-unit.h>
#include "testsuite.hpp"

int main(void)
{
    register_card_tests() ;
    register_player_tests() ;
    register_simple_player_tests() ;
    register_human_player_tests() ;
    run_tests() ;
    return 0 ;
}
