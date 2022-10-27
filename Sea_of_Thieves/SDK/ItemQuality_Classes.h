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
	 * Class ItemQuality.ItemQualityInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UItemQualityInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ItemQuality.ItemQualityComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UItemQualityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5IP5[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEmissaryQualityLevel                                      ItemQualityLevel;                                        // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UTV4[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPerComanyItemQualityEntry>                  CompanySpecificItemQualityLevels;                        // 0x00D8(0x0010) Edit, ZeroConstructor
		TArray<struct FPerComanyComplexItemQualityEntry>           CompanySpecificComplexItemQualityLevels;                 // 0x00E8(0x0010) Edit, ZeroConstructor
		TArray<struct FPerComanyComplexItemQualityEntry>           CompanySpecificComplexItemQualityLevelsHandin;           // 0x00F8(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
