/**
* \file seg_msh.c
*
* Message header segment (MSH) accessors for the HL7 parser.
*
* \internal
* Copyright (c) 2011 Juan Jose Comellas <juanjo@comellas.org>
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
#include <hl7parser/seg_msh.h>

BEGIN_C_DECL()

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_field_separator( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_field_separator( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_field_separator_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_encoding_characters( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_encoding_characters( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_encoding_characters_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_sending_application_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 2, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_application_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 2, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_application_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 2, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_sending_facility_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 3, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 3, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 3, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_sending_facility_universal_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 3, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_universal_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 3, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_universal_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 3, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_sending_facility_universal_id_type( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 3, 2 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_universal_id_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 3, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_sending_facility_universal_id_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 3, 2, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_receiving_application_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 4, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_application_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 4, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_application_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 4, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_receiving_facility_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 5, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 5, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 5, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_receiving_facility_universal_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 5, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_universal_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 5, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_universal_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 5, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_receiving_facility_universal_id_type( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 5, 2 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_universal_id_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 5, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_receiving_facility_universal_id_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 5, 2, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_msh_message_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_field( segment, 6 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 6, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, true, true, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 6, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_message_type( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 8, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 8, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 8, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_trigger_event( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 8, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_trigger_event( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 8, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_trigger_event_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 8, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_message_structure( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 8, 2 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_structure( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 8, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_structure_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 8, 2, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_message_control_id( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 9 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_control_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 9, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_message_control_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 9, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_processing_id( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 10 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_processing_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 10, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_processing_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 10, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_version( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 11 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_version( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 11, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_version_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 11, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_accept_ack_type( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 14 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_accept_ack_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 14, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_accept_ack_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 14, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_application_ack_type( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 15 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_application_ack_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 15, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_application_ack_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 15, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_msh_country_code( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 16 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_country_code( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 16, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_msh_set_country_code_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 16, &element ) : rc );
}

END_C_DECL()
