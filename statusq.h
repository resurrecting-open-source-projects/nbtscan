#if !defined STATUSQ_H
#define STATUSQ_H

#include <sys/types.h>

#define FL_REQUEST		0x8000
#define FL_QUERY		0x7800
#define FL_NON_AUTH_ANSWER	0x0400
#define FL_DGRAM_NOT_TRUNCATED	0x0200
#define FL_RECURSION_NOT_DESIRED	0x0100
#define FL_RECURSION_NOT_AVAIl	0x0080
#define FL_RESERVED1		0x0040
#define FL_RESERVED2		0x0020
#define	FL_BROADCAST		0x0010
#define FL_SUCCESS		0x000F

#define	QT_NODE_STATUS_REQUEST	0x0021
#define QC_INTERNET		0x0001

#define NB_DGRAM		137

struct nbname {
	char ascii_name [16] ;
	uint16_t rr_flags;
};

struct nbname_request {
        uint16_t transaction_id;
        uint16_t flags;
        uint16_t question_count;
        uint16_t answer_count;
        uint16_t name_service_count;
        uint16_t additional_record_count;
        char question_name[34]; 
        uint16_t question_type;
        uint16_t question_class;
};

#define NBNAME_REQUEST_SIZE 50
#define UDP_HEADER_SIZE 8
#define IP_HEADER_SIZE 20

typedef struct nbname_response_header {
	uint16_t transaction_id;
	uint16_t flags;
	uint16_t question_count;
	uint16_t answer_count;
	uint16_t name_service_count;
	uint16_t additional_record_count;
	char question_name[34];
	uint16_t question_type;
	uint16_t question_class;
	uint32_t ttl;
	uint16_t rdata_length;
	uint8_t number_of_names;
} nbname_response_header_t;

/* #define NBNAME_RESPONSE_NUMBER_OF_NAMES_OFFSET 56 */

#define NBNAME_RESPONSE_HEADER_SIZE 57

typedef struct nbname_response_footer {
	uint8_t adapter_address [6];
	uint8_t version_major;
	uint8_t version_minor;
	uint16_t duration;
	uint16_t frmps_received;
	uint16_t frmps_transmitted;
	uint16_t iframe_receive_errors;
	uint16_t transmit_aborts;
	uint32_t transmitted;
	uint32_t received;
	uint16_t iframe_transmit_errors;
	uint16_t no_receive_buffer;
	uint16_t tl_timeouts;
	uint16_t ti_timeouts;
	uint16_t free_ncbs;
	uint16_t ncbs;
	uint16_t max_ncbs;
	uint16_t no_transmit_buffers;
	uint16_t max_datagram;
	uint16_t pending_sessions;
	uint16_t max_sessions;
	uint16_t packet_sessions;
} nbname_response_footer_t ;

#define NBNAME_RESPONSE_FOOTER_SIZE 50

struct nb_host_info {
	struct nbname_response_header* header;
	struct nbname* names;
	struct nbname_response_footer* footer;
	int is_broken;
};

typedef struct nb_service {
	char nb_name[16];
	uint8_t service_number;
	int unique;
	char* service_name;
} nb_service_t ;

#endif /* STATUSQ_H */
