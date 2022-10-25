#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass BP_Prop_Base_AirConditioner.BP_Prop_Base_AirConditioner_C
	 * Size -> 0x0018 (FullSize[0x0450] - InheritedSize[0x0438])
	 */
	class ABP_Prop_Base_AirConditioner_C : public APropBreakable
	{
	public:
		unsigned char                                              UnknownData_XL9J[0x8];                                   // 0x0438(0x0008) Fix Super Size
		class UAkAudioEvent*                                       StartAudioEvent;                                         // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       StopAudioEvent;                                          // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UserConstructionScript();
		void OnReset();
		void BlueprintOnBreak();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
