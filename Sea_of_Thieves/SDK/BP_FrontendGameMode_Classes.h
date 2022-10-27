#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass BP_FrontendGameMode.BP_FrontendGameMode_C
	 * Size -> 0x0008 (FullSize[0x04D8] - InheritedSize[0x04D0])
	 */
	class ABP_FrontendGameMode_C : public AFrontendGameMode
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
