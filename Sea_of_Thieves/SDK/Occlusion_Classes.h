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
	 * Class Occlusion.OcclusionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOcclusionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Occlusion.OcclusionService
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOcclusionService : public UObject
	{
	public:
		unsigned char                                              UnknownData_X2TK[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnPrimaryActorEndPlay(class AActor* InActor);
		void OnIgnoredActorEndPlay(class AActor* InActor);
		void AutomationSetShouldDisableAsync(bool InShouldDisableAsync);
		bool AutomationGetShouldDisableAsync();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
