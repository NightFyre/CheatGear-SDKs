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
	 * BlueprintGeneratedClass BPWeapInterface_ATL.BPWeapInterface_ATL_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPWeapInterface_ATL_C : public UInterface
	{
	public:
		void SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
