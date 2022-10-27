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
	 * BlueprintGeneratedClass BPFL_HDWeapon.BPFL_HDWeapon_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_HDWeapon_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AimStyleToDisplayText(EHDWeaponAimStyle AimStyle, class UObject* __WorldContext, class FText* StyleText);
		void STATIC_FireModeToDisplayText(EFireMode FireMode, class UObject* __WorldContext, class FText* ModeText);
		void STATIC_FireModeToString(EFireMode FireMode, class UObject* __WorldContext, class FString* ModeString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
