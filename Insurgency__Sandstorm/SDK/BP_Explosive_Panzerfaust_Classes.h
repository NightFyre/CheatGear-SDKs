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
	 * DynamicClass BP_Explosive_Panzerfaust.BP_Explosive_Panzerfaust_C
	 * Size -> 0x0000 (FullSize[0x4660] - InheritedSize[0x4660])
	 */
	class ABP_Explosive_Panzerfaust_C : public ABP_Explosive_LauncherSingleUseBase_C
	{
	public:
		void BlueprintOnDropped();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
