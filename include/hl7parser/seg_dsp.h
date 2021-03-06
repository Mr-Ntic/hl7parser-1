#ifndef HL7PARSER_SEG_DSP_H
#define HL7PARSER_SEG_DSP_H

/**
* \file seg_dsp.h
*
* Display data segment (DSP) accessors for the HL7 parser.
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

BEGIN_C_DECL()

/* ------------------------------------------------------------------------
   Function prototypes
   ------------------------------------------------------------------------ */

/**
* Get the set_id (DSP.1) field.
*/
HL7_EXPORT int hl7_dsp_set_id( HL7_Segment *segment );
/**
* Set the set_id (DSP.1) field.
*/
HL7_EXPORT int hl7_dsp_set_set_id( HL7_Segment *segment, HL7_Element *element );
/**
* Set the set_id (DSP.1) field as an integer.
*/
HL7_EXPORT int hl7_dsp_set_set_id_int( HL7_Segment *segment, const int value );
/**
* Get the display_level (DSP.2) field.
*/
HL7_EXPORT HL7_Element *hl7_dsp_display_level( HL7_Segment *segment );
/**
* Set the display_level (DSP.2) field.
*/
HL7_EXPORT int hl7_dsp_set_display_level( HL7_Segment *segment, HL7_Element *element );
/**
* Set the display_level (DSP.2) field as a string.
*/
HL7_EXPORT int hl7_dsp_set_display_level_str( HL7_Segment *segment, const char *value );
/**
* Get the data_line (DSP.3) field.
*/
HL7_EXPORT HL7_Element *hl7_dsp_data_line( HL7_Segment *segment );
/**
* Set the data_line (DSP.3) field.
*/
HL7_EXPORT int hl7_dsp_set_data_line( HL7_Segment *segment, HL7_Element *element );
/**
* Set the data_line (DSP.3) field as a string.
*/
HL7_EXPORT int hl7_dsp_set_data_line_str( HL7_Segment *segment, const char *value );
/**
* Get the break_point (DSP.4) field.
*/
HL7_EXPORT HL7_Element *hl7_dsp_break_point( HL7_Segment *segment );
/**
* Set the break_point (DSP.4) field.
*/
HL7_EXPORT int hl7_dsp_set_break_point( HL7_Segment *segment, HL7_Element *element );
/**
* Set the break_point (DSP.4) field as a string.
*/
HL7_EXPORT int hl7_dsp_set_break_point_str( HL7_Segment *segment, const char *value );
/**
* Get the result_id (DSP.5) field.
*/
HL7_EXPORT HL7_Element *hl7_dsp_result_id( HL7_Segment *segment );
/**
* Set the result_id (DSP.5) field.
*/
HL7_EXPORT int hl7_dsp_set_result_id( HL7_Segment *segment, HL7_Element *element );
/**
* Set the result_id (DSP.5) field as a string.
*/
HL7_EXPORT int hl7_dsp_set_result_id_str( HL7_Segment *segment, const char *value );

END_C_DECL()

#endif /* HL7_SEG_DSP_H */
