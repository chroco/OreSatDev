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
	










	U8 EdlPacket::get_code() {
		return edlpacket.code;
	}

	void EdlPacket::set_code(U8 code) {
		edlpacket.code = code;
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
