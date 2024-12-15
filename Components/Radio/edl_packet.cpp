#include "Components/Radio/edl_packet.hpp"

namespace Components {

	EdlPacket::EdlPacket() :
		edlpacket({0}),
		edlpacket_size(sizeof(edlpacket))
	{


	}

	EdlPacket::~EdlPacket() {

	}

	// getters and setters
	
	U8 EdlPacket::get_tfvn() {
		return edlpacket.code;
	}

	void EdlPacket::set_tfvn(U8 tfvn) {
		edlpacket.primary_header.transfer_frame_version_number = tfvn; 
	}

	U16 EdlPacket::get_scid() {
		return edlpacket.primary_header.space_craft_id;
	}

	void EdlPacket::set_scid(U16 scid) {
		edlpacket.primary_header.space_craft_id = scid; 
	}
	
	U8 EdlPacket::get_sodid() {
		return edlpacket.primary_header.source_or_destination_id;
	}

	void EdlPacket::set_sodid(U8 sodid) {
		edlpacket.primary_header.source_or_destination_id = sodid; 
	}
	
	U8 EdlPacket::get_vcid() {
		return edlpacket.primary_header.virtual_channel_id;
	}

	void EdlPacket::set_vcid(U8 vcid) {
		edlpacket.primary_header.virtual_channel_id = vcid; 
	}
	
	U8 EdlPacket::get_mid() {
		return edlpacket.primary_header.map_id;
	}

	void EdlPacket::set_mid(U8 mid) {
		edlpacket.primary_header.map_id = mid; 
	}
	
	U8 EdlPacket::get_eofphf() {
		return edlpacket.primary_header.end_of_frame_primary_header_flag;
	}

	void EdlPacket::set_eofphf(U8 eofphf) {
		edlpacket.primary_header.end_of_frame_primary_header_flag = eofphf; 
	}

	U16 EdlPacket::get_fl() {
		return edlpacket.primary_header.frame_length;
	}

	void EdlPacket::set_fl(U16 fl) {
		edlpacket.primary_header.frame_length = fl; 
	}

	U8 EdlPacket::get_bscf() {
		return edlpacket.primary_header.bypass_sequence_control_flag;
	}

	void EdlPacket::set_bscf(U8 bscf) {
		edlpacket.primary_header.bypass_sequence_control_flag = bscf; 
	}

	U8 EdlPacket::get_pccf() {
		return edlpacket.primary_header.protocol_control_command_flag;
	}

	void EdlPacket::set_pccf(U8 pccf) {
		edlpacket.primary_header.protocol_control_command_flag = pccf; 
	}

	U8 EdlPacket::get_rsb() {
		return edlpacket.primary_header.reserve_spare_bits;
	}

	void EdlPacket::set_rsb(U8 rsb) {
		edlpacket.primary_header.reserve_spare_bits = rsb; 
	}

	U8 EdlPacket::get_ocf() {
		return edlpacket.primary_header.operation_control_flag;
	}

	void EdlPacket::set_ocf(U8 ocf) {
		edlpacket.primary_header.operation_control_flag = ocf; 
	}

	U8 EdlPacket::get_vfcl() {
		return edlpacket.primary_header.vc_frame_count_length;
	}

	void EdlPacket::set_vfcl(U8 vfcl) {
		edlpacket.primary_header.vc_frame_count_length = vfcl; 
	}

	U32 EdlPacket::get_sequence_number() {
		return edlpacket.sequence_number;
	}

	void EdlPacket::set_sequence_number(U32 sequence_number) {
		edlpacket.sequence_number = sequence_number; 
	}

	U8 EdlPacket::get_tfdz() {
		return edlpacket.data_header.tfdz;
	}

	void EdlPacket::set_tfdz(U8 tfdz) {
		edlpacket.data_header.tfdz = tfdz; 
	}

	U8 EdlPacket::get_upid() {
		return edlpacket.data_header.upid;
	}

	void EdlPacket::set_upid(U8 upid) {
		edlpacket.data_header.upid = upid; 
	}

	U8 EdlPacket::get_code() {
		return edlpacket.code;
	}

	void EdlPacket::set_code(U8 code) {
		edlpacket.code = code;
	}

	U8* EdlPacket::get_hmac() {
		return edlpacket.hmac;
	}

	void EdlPacket::set_hmac(U8 hmac[], U32 size) {
		FW_ASSERT(sizeof(edlpacket.hmac) == size);
		memcpy(edlpacket.hmac, hmac, sizeof(edlpacket.hmac));
	}

	U16 EdlPacket::get_fecf() {
		return edlpacket.fecf;
	}

	void EdlPacket::set_fecf(U16 fecf) {
		edlpacket.fecf = fecf; 
	}

	U8* EdlPacket::getBytes() {
		return reinterpret_cast<U8*>(&edlpacket);
	}

	U16 EdlPacket::getSize() {
		return edlpacket_size;
	}

	void EdlPacket::print() {

	}

	void EdlPacket::printBytes() {
		U8* pBytes = getBytes();
		U8 value = 0;
		int i = 0;
		for (; i < edlpacket_size; ++i) {
			printf("%02x ",pBytes[i]);
		}

		printf("\n");
	}
}
