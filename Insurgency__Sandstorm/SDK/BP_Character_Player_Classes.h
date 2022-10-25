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
	 * DynamicClass BP_Character_Player.BP_Character_Player_C
	 * Size -> 0x0010 (FullSize[0x2000] - InheritedSize[0x1FF0])
	 */
	class ABP_Character_Player_C : public ABP_Character_C
	{
	public:
		class USkeletalMeshComponent*                              Equip_Item_MonoNVG;                                      // 0x1FF0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              Equip_Item;                                              // 0x1FF8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
