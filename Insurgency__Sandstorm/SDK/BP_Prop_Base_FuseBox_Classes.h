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
	 * DynamicClass BP_Prop_Base_FuseBox.BP_Prop_Base_FuseBox_C
	 * Size -> 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
	 */
	class ABP_Prop_Base_FuseBox_C : public APropBreakable
	{
	public:
		class UArrowComponent*                                     Arrow;                                                   // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
