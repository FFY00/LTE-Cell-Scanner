/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "UE-EUTRA-Capability.h"

static int
memb_ue_Category_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_featureGroupIndicators_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ue_Category_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_featureGroupIndicators_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_interRAT_Parameters_9[] = {
	{ ATF_POINTER, 7, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, utraFDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utraFDD"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, utraTDD128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utraTDD128"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, utraTDD384),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_TDD384,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utraTDD384"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, utraTDD768),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_TDD768,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utraTDD768"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, geran),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geran"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, cdma2000_HRPD),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersCDMA2000_HRPD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cdma2000-HRPD"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, cdma2000_1xRTT),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersCDMA2000_1XRTT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cdma2000-1xRTT"
		},
};
static int asn_MAP_interRAT_Parameters_oms_9[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_interRAT_Parameters_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_interRAT_Parameters_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utraFDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utraTDD128 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* utraTDD384 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* utraTDD768 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* geran */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cdma2000-HRPD */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* cdma2000-1xRTT */
};
static asn_SEQUENCE_specifics_t asn_SPC_interRAT_Parameters_specs_9 = {
	sizeof(struct UE_EUTRA_Capability__interRAT_Parameters),
	offsetof(struct UE_EUTRA_Capability__interRAT_Parameters, _asn_ctx),
	asn_MAP_interRAT_Parameters_tag2el_9,
	7,	/* Count of tags in the map */
	asn_MAP_interRAT_Parameters_oms_9,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interRAT_Parameters_9 = {
	"interRAT-Parameters",
	"interRAT-Parameters",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_interRAT_Parameters_tags_9,
	sizeof(asn_DEF_interRAT_Parameters_tags_9)
		/sizeof(asn_DEF_interRAT_Parameters_tags_9[0]) - 1, /* 1 */
	asn_DEF_interRAT_Parameters_tags_9,	/* Same as above */
	sizeof(asn_DEF_interRAT_Parameters_tags_9)
		/sizeof(asn_DEF_interRAT_Parameters_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_interRAT_Parameters_9,
	7,	/* Elements count */
	&asn_SPC_interRAT_Parameters_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, accessStratumRelease),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessStratumRelease,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accessStratumRelease"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, ue_Category),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ue_Category_constraint_1,
		&asn_PER_memb_ue_Category_constr_3,
		0,
		"ue-Category"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, pdcp_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Parameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Parameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, phyLayerParameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phyLayerParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, rf_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rf-Parameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, measParameters),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability, featureGroupIndicators),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_featureGroupIndicators_constraint_1,
		&asn_PER_memb_featureGroupIndicators_constr_8,
		0,
		"featureGroupIndicators"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability, interRAT_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_interRAT_Parameters_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-Parameters"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v920_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_UE_EUTRA_Capability_oms_1[] = { 6, 8 };
static ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessStratumRelease */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-Category */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* phyLayerParameters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rf-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measParameters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* featureGroupIndicators */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* interRAT-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_specs_1 = {
	sizeof(struct UE_EUTRA_Capability),
	offsetof(struct UE_EUTRA_Capability, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability = {
	"UE-EUTRA-Capability",
	"UE-EUTRA-Capability",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UE_EUTRA_Capability_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_EUTRA_Capability_1,
	9,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_specs_1	/* Additional specs */
};

