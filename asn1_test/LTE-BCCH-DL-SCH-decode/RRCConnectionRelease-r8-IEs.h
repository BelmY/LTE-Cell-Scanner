/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_RRCConnectionRelease_r8_IEs_H_
#define	_RRCConnectionRelease_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ReleaseCause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectedCarrierInfo;
struct IdleModeMobilityControlInfo;

/* RRCConnectionRelease-r8-IEs */
typedef struct RRCConnectionRelease_r8_IEs {
	ReleaseCause_t	 releaseCause;
	struct RedirectedCarrierInfo	*redirectedCarrierInfo	/* OPTIONAL */;
	struct IdleModeMobilityControlInfo	*idleModeMobilityControlInfo	/* OPTIONAL */;
	struct RRCConnectionRelease_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RedirectedCarrierInfo.h"
#include "IdleModeMobilityControlInfo.h"

#endif	/* _RRCConnectionRelease_r8_IEs_H_ */
#include <asn_internal.h>