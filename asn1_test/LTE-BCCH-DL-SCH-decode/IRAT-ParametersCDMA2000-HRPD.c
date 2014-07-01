/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "IRAT-ParametersCDMA2000-HRPD.h"

static int
tx_ConfigHRPD_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
tx_ConfigHRPD_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
tx_ConfigHRPD_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tx_ConfigHRPD_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tx_ConfigHRPD_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tx_ConfigHRPD_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tx_ConfigHRPD_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tx_ConfigHRPD_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tx_ConfigHRPD_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tx_ConfigHRPD_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tx_ConfigHRPD_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
rx_ConfigHRPD_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
rx_ConfigHRPD_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
rx_ConfigHRPD_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
rx_ConfigHRPD_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
rx_ConfigHRPD_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
rx_ConfigHRPD_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
rx_ConfigHRPD_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
rx_ConfigHRPD_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
rx_ConfigHRPD_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
rx_ConfigHRPD_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rx_ConfigHRPD_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_tx_ConfigHRPD_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rx_ConfigHRPD_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_tx_ConfigHRPD_value2enum_3[] = {
	{ 0,	6,	"single" },
	{ 1,	4,	"dual" }
};
static unsigned int asn_MAP_tx_ConfigHRPD_enum2value_3[] = {
	1,	/* dual(1) */
	0	/* single(0) */
};
static asn_INTEGER_specifics_t asn_SPC_tx_ConfigHRPD_specs_3 = {
	asn_MAP_tx_ConfigHRPD_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_tx_ConfigHRPD_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_tx_ConfigHRPD_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tx_ConfigHRPD_3 = {
	"tx-ConfigHRPD",
	"tx-ConfigHRPD",
	tx_ConfigHRPD_3_free,
	tx_ConfigHRPD_3_print,
	tx_ConfigHRPD_3_constraint,
	tx_ConfigHRPD_3_decode_ber,
	tx_ConfigHRPD_3_encode_der,
	tx_ConfigHRPD_3_decode_xer,
	tx_ConfigHRPD_3_encode_xer,
	tx_ConfigHRPD_3_decode_uper,
	tx_ConfigHRPD_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tx_ConfigHRPD_tags_3,
	sizeof(asn_DEF_tx_ConfigHRPD_tags_3)
		/sizeof(asn_DEF_tx_ConfigHRPD_tags_3[0]) - 1, /* 1 */
	asn_DEF_tx_ConfigHRPD_tags_3,	/* Same as above */
	sizeof(asn_DEF_tx_ConfigHRPD_tags_3)
		/sizeof(asn_DEF_tx_ConfigHRPD_tags_3[0]), /* 2 */
	&asn_PER_type_tx_ConfigHRPD_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tx_ConfigHRPD_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_rx_ConfigHRPD_value2enum_6[] = {
	{ 0,	6,	"single" },
	{ 1,	4,	"dual" }
};
static unsigned int asn_MAP_rx_ConfigHRPD_enum2value_6[] = {
	1,	/* dual(1) */
	0	/* single(0) */
};
static asn_INTEGER_specifics_t asn_SPC_rx_ConfigHRPD_specs_6 = {
	asn_MAP_rx_ConfigHRPD_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_rx_ConfigHRPD_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_rx_ConfigHRPD_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rx_ConfigHRPD_6 = {
	"rx-ConfigHRPD",
	"rx-ConfigHRPD",
	rx_ConfigHRPD_6_free,
	rx_ConfigHRPD_6_print,
	rx_ConfigHRPD_6_constraint,
	rx_ConfigHRPD_6_decode_ber,
	rx_ConfigHRPD_6_encode_der,
	rx_ConfigHRPD_6_decode_xer,
	rx_ConfigHRPD_6_encode_xer,
	rx_ConfigHRPD_6_decode_uper,
	rx_ConfigHRPD_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_rx_ConfigHRPD_tags_6,
	sizeof(asn_DEF_rx_ConfigHRPD_tags_6)
		/sizeof(asn_DEF_rx_ConfigHRPD_tags_6[0]) - 1, /* 1 */
	asn_DEF_rx_ConfigHRPD_tags_6,	/* Same as above */
	sizeof(asn_DEF_rx_ConfigHRPD_tags_6)
		/sizeof(asn_DEF_rx_ConfigHRPD_tags_6[0]), /* 2 */
	&asn_PER_type_rx_ConfigHRPD_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rx_ConfigHRPD_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IRAT_ParametersCDMA2000_HRPD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersCDMA2000_HRPD, supportedBandListHRPD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportedBandListHRPD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportedBandListHRPD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersCDMA2000_HRPD, tx_ConfigHRPD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tx_ConfigHRPD_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tx-ConfigHRPD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IRAT_ParametersCDMA2000_HRPD, rx_ConfigHRPD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rx_ConfigHRPD_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rx-ConfigHRPD"
		},
};
static ber_tlv_tag_t asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IRAT_ParametersCDMA2000_HRPD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandListHRPD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tx-ConfigHRPD */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rx-ConfigHRPD */
};
static asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersCDMA2000_HRPD_specs_1 = {
	sizeof(struct IRAT_ParametersCDMA2000_HRPD),
	offsetof(struct IRAT_ParametersCDMA2000_HRPD, _asn_ctx),
	asn_MAP_IRAT_ParametersCDMA2000_HRPD_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersCDMA2000_HRPD = {
	"IRAT-ParametersCDMA2000-HRPD",
	"IRAT-ParametersCDMA2000-HRPD",
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
	asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1,
	sizeof(asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1[0]), /* 1 */
	asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1,	/* Same as above */
	sizeof(asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersCDMA2000_HRPD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IRAT_ParametersCDMA2000_HRPD_1,
	3,	/* Elements count */
	&asn_SPC_IRAT_ParametersCDMA2000_HRPD_specs_1	/* Additional specs */
};

