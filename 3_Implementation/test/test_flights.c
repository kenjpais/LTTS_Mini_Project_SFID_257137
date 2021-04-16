#include "../inc/flight_operations.h"
#include "unity.h"
#include<string.h>
#include "unity_internals.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


struct records
{
    char p_no[9];
    char name[15];
    int seat_num;
    char email[15];
	
}flow;





void test_details(void)
{
strcpy(flow.p_no,"1234");
strcpy(flow.name,"ken");
strcpy(flow.email,"kenjpais@gmail.com");



TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
TEST_ASSERT_EQUAL_STRING("ken",stream.name);
TEST_ASSERT_EQUAL_STRING("kenjpais@gmail.com",stream.email);




}

void test_display(void)
{
strcpy(flow.p_no,"1234");
strcpy(flow.name,"ken");
strcpy(flow.email,"kenjpais@gmail.com");


TEST_ASSERT_EQUAL_STRING("1234",flow.p_no);
TEST_ASSERT_EQUAL_STRING("ken",flow.name);
TEST_ASSERT_EQUAL_STRING("kenjpais@gmail.com",flow.email);
}





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    RUN_TEST(test_display);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}

