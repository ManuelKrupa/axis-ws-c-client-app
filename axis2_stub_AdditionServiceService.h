

        /**
        * axis2_stub_AdditionServiceService.h
        *
        * This file was auto-generated from WSDL for "AdditionServiceService|http://localhost:9090/axiswstest/AdditionService" service
        * by the Apache Axis2/Java version: 1.6.2  Built on : Apr 17, 2012 (05:33:49 IST)
        */

        #include <stdio.h>
        #include <axiom.h>
        #include <axutil_utils.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>
        #include <axis2_stub.h>

       
         #include "adb_addition.h"
        
         #include "adb_additionResponse.h"
        

	#ifdef __cplusplus
	extern "C" {
	#endif

        /***************** function prototypes - for header file *************/
        /**
         * axis2_stub_create_AdditionServiceService
         * Create and return the stub with services populated
         * @param env Environment ( mandatory)
         * @param client_home Axis2/C home ( mandatory )
         * @param endpoint_uri Service endpoint uri( optional ) - if NULL default picked from WSDL used
         * @return Newly created stub object
         */
        axis2_stub_t* AXIS2_CALL
        axis2_stub_create_AdditionServiceService(const axutil_env_t *env,
                                        const axis2_char_t *client_home,
                                        const axis2_char_t *endpoint_uri);
        /**
         * axis2_stub_populate_services_for_AdditionServiceService
         * populate the svc in stub with the service and operations
         * @param stub The stub
         * @param env environment ( mandatory)
         */
        void AXIS2_CALL 
        axis2_stub_populate_services_for_AdditionServiceService( axis2_stub_t *stub, const axutil_env_t *env);
        /**
         * axis2_stub_get_endpoint_uri_of_AdditionServiceService
         * Return the endpoint URI picked from WSDL
         * @param env environment ( mandatory)
         * @return The endpoint picked from WSDL
         */
        axis2_char_t* AXIS2_CALL
        axis2_stub_get_endpoint_uri_of_AdditionServiceService(const axutil_env_t *env);


        
            /**
             * Auto generated function declaration
             * for "addition|http://localhost:9090/axiswstest/AdditionService" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _addition of the adb_addition_t*
             *
             * @return adb_additionResponse_t*
             */

            adb_additionResponse_t* AXIS2_CALL 
            axis2_stub_op_AdditionServiceService_addition( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_addition_t* _addition);
          

        /**
         * Auto generated function for asynchronous invocations
         * for "addition|http://localhost:9090/axiswstest/AdditionService" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _addition of the adb_addition_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_AdditionServiceService_addition( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_addition_t* _addition,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_additionResponse_t* _additionResponse, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        


    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_STUB_ADDITIONSERVICESERVICE_ERROR_CODES_START (AXIS2_ERROR_LAST + 2000)

    typedef enum 
    {
        AXIS2_STUB_ADDITIONSERVICESERVICE_ERROR_NONE = AXIS2_STUB_ADDITIONSERVICESERVICE_ERROR_CODES_START,
        
        AXIS2_STUB_ADDITIONSERVICESERVICE_ERROR_LAST
    } axis2_stub_AdditionServiceService_error_codes;

	#ifdef __cplusplus
	}
	#endif
   

