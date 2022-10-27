#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BPFL_HDUI.BPFL_HDUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_HDUI_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetIconBrushForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, struct FSlateBrush* IconBrush);
		void STATIC_GetIconTextureForStanceState(EHDUICharacterStanceState State, class UObject* __WorldContext, class UTexture2D** IconTex);
		void STATIC_GetNormHealthColorByRatio(float HealthValueNorm, class UObject* __WorldContext, struct FLinearColor* ColorToUse);
		void STATIC_GetHealthColorByRatio(float Health, float MaxHealth, class UObject* __WorldContext, struct FLinearColor* ColorToUse);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
