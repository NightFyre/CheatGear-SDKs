#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Ammo_Crossbow_Bolt_Wooden.BP_Ammo_Crossbow_Bolt_Wooden_C
	 * Size -> 0x0008 (FullSize[0x0980] - InheritedSize[0x0978])
	 */
	class ABP_Ammo_Crossbow_Bolt_Wooden_C : public AAmmunitionArrow
	{
	public:
		unsigned char                                              UnknownData_5UVI[0x8];                                   // 0x0978(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
