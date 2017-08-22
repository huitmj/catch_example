#define CATCH_CONFIG_MAIN

#include "catch.hpp"

inline bool itDoesThis(){ return true; }
inline bool itDoesThat(){ return true; }

SCENARIO( "Do that thing with the thing", "[Tags]" ) {
    GIVEN( "This stuff exists" ) {
        // make stuff exist
        WHEN( "I do this" ) {
            // do this
            THEN( "it should do this")
            {
                REQUIRE( itDoesThis() );
                AND_THEN( "do that")
                    REQUIRE( itDoesThat() );
            }
        }
    }
}
