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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ItemQuality.EItemQualityQueryReason
	 */
	enum class EItemQualityQueryReason : uint8_t
	{
		DontCare        = 0,
		ChangeOwnership = 1,
		DropOnShip      = 2,
		HandIn          = 3,
		MAX             = 4
	};

	/**
	 * Enum ItemQuality.EEmissaryQualityLevel
	 */
	enum class EEmissaryQualityLevel : uint8_t
	{
		Invalid = 0,
		Level1  = 1,
		Level2  = 2,
		Level3  = 3,
		Level4  = 4,
		Level5  = 5,
		Level6  = 6,
		Level7  = 7,
		Level8  = 8,
		MAX     = 9,
		MAX01   = 10
	};

	/**
	 * Enum ItemQuality.EHealthIndex
	 */
	enum class EHealthIndex : uint8_t
	{
		DontCare = 0,
		Level1   = 1,
		Level2   = 2,
		Level3   = 3,
		Level4   = 4,
		Level5   = 5,
		Level6   = 6,
		Level7   = 7,
		MAX      = 8,
		MAX01    = 9
	};

	/**
	 * Enum ItemQuality.EStatusType
	 */
	enum class EStatusType : uint8_t
	{
		DontCare = 0,
		Yes      = 1,
		No       = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ItemQuality.PerComanyItemQualityEntry
	 * Size -> 0x0010
	 */
	struct FPerComanyItemQualityEntry
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EEmissaryQualityLevel                                      Quality;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I3A6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ItemQuality.ComplexItemQualityEntry
	 * Size -> 0x0010
	 */
	struct FComplexItemQualityEntry
	{
	public:
		EStatusType                                                OnTime;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHealthIndex                                               HealthLevel;                                             // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStatusType                                                IsComissioned;                                           // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStatusType                                                IsStolen;                                                // 0x0003(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemQualityQueryReason                                    QueryReason;                                             // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEmissaryQualityLevel                                      QualityLevel;                                            // 0x0005(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TCID[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Rarity;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ItemQuality.PerComanyComplexItemQualityEntry
	 * Size -> 0x0018
	 */
	struct FPerComanyComplexItemQualityEntry
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FComplexItemQualityEntry>                    QualityData;                                             // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
