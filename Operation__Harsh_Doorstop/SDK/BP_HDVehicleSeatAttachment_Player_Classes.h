#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDVehicleSeatAttachment_Player.BP_HDVehicleSeatAttachment_Player_C
	 * Size -> 0x0009 (FullSize[0x00E1] - InheritedSize[0x00D8])
	 */
	class UBP_HDVehicleSeatAttachment_Player_C : public UArcVehicleSeatConfig_PlayerAttachment
	{
	public:
		class UClass*                                              SeatAnimInstanceLinked;                                  // 0x00D8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDFItemEnabledMode                                         SeatItemMode;                                            // 0x00E0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
