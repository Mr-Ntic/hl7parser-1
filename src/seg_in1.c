/**
* \file seg_in1.c
*
* Insurance segment (IN1) accessors for the HL7 parser.
*
* \internal
* Copyright (c) 2011 \b Erlar (http://erlar.com)
*
* \warning DO NOT MODIFY THIS FILE.
*
* Autogenerated by the ./hl7segdef.py script on Mon Jun  6 12:54:47 2011
*/

/* ------------------------------------------------------------------------
   Headers
   ------------------------------------------------------------------------ */

#include <hl7parser/config.h>
#include <hl7parser/element.h>
#include <hl7parser/export.h>
#include <hl7parser/segment.h>
#include <hl7parser/seg_in1.h>

BEGIN_C_DECL()

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_id( HL7_Segment *segment )
{
    return hl7_element_int( hl7_segment_field( segment, 0 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_set_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_set_id_int( HL7_Segment *segment, const int value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_int( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_plan_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 1, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_plan_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 1, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_plan_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 1, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_plan_name( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 1, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_plan_name( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 1, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_plan_name_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 1, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_company_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 2, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 2, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 2, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_company_assigning_authority_id( HL7_Segment *segment )
{
    return hl7_segment_subcomponent( segment, 2, 3, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_assigning_authority_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_subcomponent( segment, 2, 3, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_assigning_authority_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_subcomponent( segment, 2, 3, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_company_id_type( HL7_Segment *segment )
{
    return hl7_segment_subcomponent( segment, 2, 3, 4 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_id_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_subcomponent( segment, 2, 3, 4, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_company_id_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_subcomponent( segment, 2, 3, 4, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_in1_authorization_number( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 13, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_authorization_number( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 13, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_authorization_number_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 13, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_in1_auhtorization_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_component( segment, 13, 1 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_auhtorization_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 13, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_in1_set_auhtorization_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, false, false, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 13, 1, &element ) : rc );
}

END_C_DECL()
