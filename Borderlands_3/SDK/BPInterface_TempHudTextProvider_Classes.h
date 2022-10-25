#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPInterface_TempHudTextProvider_C : public UInterface
	{
	public:
		void SetMissionDebugText(const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
