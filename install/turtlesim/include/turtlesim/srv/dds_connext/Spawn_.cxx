

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Spawn_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Spawn_.h"

#include <new>

namespace turtlesim {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Spawn_Request_TYPENAME = "turtlesim::srv::dds_::Spawn_Request_";

            DDS_TypeCode* Spawn_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Spawn_Request__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Spawn_Request__g_tc_members[4]=
                {

                    {
                        (char *)"x_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"y_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"theta_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"name_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Spawn_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::srv::dds_::Spawn_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        Spawn_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Spawn_Request_*/

                if (is_initialized) {
                    return &Spawn_Request__g_tc;
                }

                Spawn_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Spawn_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Spawn_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Spawn_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&Spawn_Request__g_tc_name__string;

                is_initialized = RTI_TRUE;

                return &Spawn_Request__g_tc;
            }

            RTIBool Spawn_Request__initialize(
                Spawn_Request_* sample) {
                return turtlesim::srv::dds_::Spawn_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Spawn_Request__initialize_ex(
                Spawn_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::srv::dds_::Spawn_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Spawn_Request__initialize_w_params(
                Spawn_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->x_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->y_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->theta_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Spawn_Request__finalize(
                Spawn_Request_* sample)
            {

                turtlesim::srv::dds_::Spawn_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Spawn_Request__finalize_ex(
                Spawn_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::srv::dds_::Spawn_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Spawn_Request__finalize_w_params(
                Spawn_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
            }

            void Spawn_Request__finalize_optional_members(
                Spawn_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Spawn_Request__copy(
                Spawn_Request_* dst,
                const Spawn_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyFloat (
                        &dst->x_, &src->x_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->y_, &src->y_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->theta_, &src->theta_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Spawn_Request_' sequence class.
            */
            #define T Spawn_Request_
            #define TSeq Spawn_Request_Seq

            #define T_initialize_w_params turtlesim::srv::dds_::Spawn_Request__initialize_w_params

            #define T_finalize_w_params   turtlesim::srv::dds_::Spawn_Request__finalize_w_params
            #define T_copy       turtlesim::srv::dds_::Spawn_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Spawn_Response_TYPENAME = "turtlesim::srv::dds_::Spawn_Response_";

            DDS_TypeCode* Spawn_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Spawn_Response__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Spawn_Response__g_tc_members[1]=
                {

                    {
                        (char *)"name_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Spawn_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"turtlesim::srv::dds_::Spawn_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Spawn_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Spawn_Response_*/

                if (is_initialized) {
                    return &Spawn_Response__g_tc;
                }

                Spawn_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Spawn_Response__g_tc_name__string;

                is_initialized = RTI_TRUE;

                return &Spawn_Response__g_tc;
            }

            RTIBool Spawn_Response__initialize(
                Spawn_Response_* sample) {
                return turtlesim::srv::dds_::Spawn_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Spawn_Response__initialize_ex(
                Spawn_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return turtlesim::srv::dds_::Spawn_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Spawn_Response__initialize_w_params(
                Spawn_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Spawn_Response__finalize(
                Spawn_Response_* sample)
            {

                turtlesim::srv::dds_::Spawn_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Spawn_Response__finalize_ex(
                Spawn_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                turtlesim::srv::dds_::Spawn_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Spawn_Response__finalize_w_params(
                Spawn_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
            }

            void Spawn_Response__finalize_optional_members(
                Spawn_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool Spawn_Response__copy(
                Spawn_Response_* dst,
                const Spawn_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Spawn_Response_' sequence class.
            */
            #define T Spawn_Response_
            #define TSeq Spawn_Response_Seq

            #define T_initialize_w_params turtlesim::srv::dds_::Spawn_Response__initialize_w_params

            #define T_finalize_w_params   turtlesim::srv::dds_::Spawn_Response__finalize_w_params
            #define T_copy       turtlesim::srv::dds_::Spawn_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

