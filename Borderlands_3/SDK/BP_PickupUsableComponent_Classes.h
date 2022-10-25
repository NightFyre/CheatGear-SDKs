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
	 * BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C
	 * Size -> 0x0000 (FullSize[0x03B0] - InheritedSize[0x03B0])
	 */
	class UBP_PickupUsableComponent_C : public UBP_UsableComponent_C
	{
	public:
		class FText K2_GetOptionalErrorText();
		bool K2_CanBeUsed(const struct FUsabilityQuery& Query);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
