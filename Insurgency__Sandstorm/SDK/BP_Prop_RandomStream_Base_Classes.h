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
	 * DynamicClass BP_Prop_RandomStream_Base.BP_Prop_RandomStream_Base_C
	 * Size -> 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
	 */
	class ABP_Prop_RandomStream_Base_C : public APropBreakable
	{
	public:
		struct FRandomStream                                       RandomStream;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
