﻿#pragma once

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
	 * BlueprintGeneratedClass BPWeapInterface_MAL.BPWeapInterface_MAL_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPWeapInterface_MAL_C : public UInterface
	{
	public:
		void SetSecondaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
		void SetPrimaryElementalData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
