/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _GPSTimeAssistanceMeasurements_H_
#define _GPSTimeAssistanceMeasurements_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GPSReferenceTimeUncertainty.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GPSTimeAssistanceMeasurements */
    typedef struct GPSTimeAssistanceMeasurements
    {
        long referenceFrameMSB;
        long *gpsTowSubms /* OPTIONAL */;
        long *deltaTow /* OPTIONAL */;
        GPSReferenceTimeUncertainty_t *gpsReferenceTimeUncertainty /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GPSTimeAssistanceMeasurements_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GPSTimeAssistanceMeasurements;

#ifdef __cplusplus
}
#endif

#endif /* _GPSTimeAssistanceMeasurements_H_ */
#include <asn_internal.h>
