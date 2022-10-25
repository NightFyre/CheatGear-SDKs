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
	 * DynamicClass BP_FireSupport_BlackHawk.BP_FireSupport_BlackHawk_C
	 * Size -> 0x0030 (FullSize[0x0420] - InheritedSize[0x03F0])
	 */
	class ABP_FireSupport_BlackHawk_C : public AFireSupportHoveringVehicle
	{
	public:
		bool                                                       bHasPlayedFireSound;                                     // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41S9[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicleHoveringBase*                                K2Node_Event_HoveringVehicle;                            // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemFirearm*                                        K2Node_Event_Weapon;                                     // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSGameMode*                                        K2Node_DynamicCast_AsINSGame_Mode;                       // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0410(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RL4[0xF];                                   // 0x0411(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnWeaponFired(class AVehicleHoveringBase* bpp__HoveringVehicle__pf, class AItemFirearm* bpp__Weapon__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
