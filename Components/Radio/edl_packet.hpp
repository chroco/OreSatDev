#ifndef EDL_Packet_HPP
#define EDL_Packet_HPP

#include "FpConfig.hpp"
#include <iostream>

/*
class Serializable
{
	public:
		Serializable(){}
		virtual ~Serializable(){}

		virtual void serialize(edlpacket_t, U8 *, U32) = 0;
		virtual void deserialize(edlpacket_t, U8 *, U32) = 0;
};
//*/
namespace Components {

	typedef struct edlpacket_t edlpacket_t;

	struct edlpacket_t {
		// USLP Primary Header (7 octets)
		struct __attribute((packed)) {
			U16 transfer_frame_version_number : 4;
			U16 space_craft_id : 16;
			U16 source_or_destination_id : 1;
			U16 virtual_channel_id : 6;
			U16 map_id : 4;
			U16 end_of_frame_primary_header_flag : 1;
			U16 frame_length : 16;
			U16 bypass_sequence_control_flag : 1;
			U16 protocol_control_command_flag : 1;
			U16 reserve_spare_bits : 2;
			U16 operation_control_flag : 1;
			U16 vc_frame_count_length : 3;
		} primary_header;

		// sequence number
		U32 sequence_number;
		
		// USLP data header
		struct __attribute((packed)) {
			U8 tfdz : 3;
			U8 upid : 5;
		} data_header;

		// Payload (X octets);
		U8 code;
	//		uint16_t *data;

		// HMAC (32 octets)
		U8 hmac[32];
		
		// Frame error control field
		U16 fecf;
	};

	class EdlPacket
	{
		public:
			EdlPacket();
			~EdlPacket();
			
			U8 get_tfvn();
			void set_tfvn(U8);
			
			U16 get_scid();
			void set_scid(U16);
		
			U8 get_sodid();
			void set_sodid(U8);
		



			U8 get_code();
			void set_code(U8);

			U8* getBytes();
			U16 getSize();
			void print();
			void printBytes();
		private:
			edlpacket_t edlpacket;
			U16 edlpacket_size;
	};

}

#endif
