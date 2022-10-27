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
	 * Class FerretBlueprint.MemFerretBlueprintInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMemFerretBlueprintInterface : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_StopTracking();
		class FString STATIC_StopAndSave(const class FString& FileName);
		void STATIC_StopAllocTracking();
		void STATIC_StartTracking();
		class FString STATIC_Snapshot(const class FString& FileName, bool ShouldClearData);
		void STATIC_SetMemoryStatCollectionInterval(float CollectionInterval);
		void STATIC_Reset();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
